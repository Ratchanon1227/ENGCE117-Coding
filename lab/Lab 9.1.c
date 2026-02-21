#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
};

typedef struct {
    struct studentNode *start ;
    struct studentNode **now ;
} LinkedList;

void initList(LinkedList *list) ;
void InsNode(LinkedList *list, char n[], int a, char s, float g) ;
void DelNode(LinkedList *list) ;
void GoFirst(LinkedList *list) ;
void GoLast(LinkedList *list) ;
void ShowAll(LinkedList *list) ;
int FindNode(LinkedList *list, char n[]) ;
void EditNode(LinkedList *list, char n[], int a, char s, float g) ;
void readfile(LinkedList *list) ;
void writefile(LinkedList *list) ;
void AddData(LinkedList *list) ;
void EditData(LinkedList *list) ;
void FindData(LinkedList *list) ;

int main() {
    LinkedList listA ;
    initList(&listA) ;
    
    int menu ;
    readfile(&listA) ;
    
    do {
        printf("\nMenu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Exit : ") ;
        if (scanf("%d", &menu) != 1) break ;
        
        switch(menu) {
            case 1: AddData(&listA); break ;
            case 2: EditData(&listA); break ;
            case 3: {
                char n[20] ;
                printf("Enter name to delete : "); scanf("%s", n) ;
                if (FindNode(&listA, n)) {
                    DelNode(&listA) ;
                    printf("Deleted successfully.\n") ;
                } else printf("Not found.\n") ;
                break ;
            }
            case 4: FindData(&listA); break ;
            case 5: ShowAll(&listA); break ;
        }
    } while (menu != 0) ;
    
    writefile(&listA) ;
    return 0 ;
}

void initList(LinkedList *list) {
    list->start = NULL ;
    list->now = &(list->start) ;
}

void GoFirst(LinkedList *list) {
    list->now = &(list->start) ;
}

void GoLast(LinkedList *list) {
    list->now = &(list->start) ;
    while (*(list->now) != NULL) {
        list->now = &((*(list->now))->next) ;
    }
}

void InsNode(LinkedList *list, char n[], int a, char s, float g) {
    GoLast(list) ;
    struct studentNode *newNode = (struct studentNode*)malloc(sizeof(struct studentNode)) ;
    strcpy(newNode->name, n) ;
    newNode->age = a ;
    newNode->sex = s ;
    newNode->gpa = g ;
    newNode->next = NULL ;
    *(list->now) = newNode ;
}

void DelNode(LinkedList *list) {
    if (*(list->now) != NULL) {
        struct studentNode *temp = *(list->now) ;
        *(list->now) = (*(list->now))->next ;
        free(temp) ;
    }
}

int FindNode(LinkedList *list, char n[]) {
    GoFirst(list) ;
    while (*(list->now) != NULL) {
        if (strcmp((*(list->now))->name, n) == 0) return 1 ;
        list->now = &((*(list->now))->next) ;
    }
    return 0 ;
}

void EditNode(LinkedList *list, char n[], int a, char s, float g) {
    if (*(list->now) != NULL) {
        strcpy((*(list->now))->name, n) ;
        (*(list->now))->age = a ;
        (*(list->now))->sex = s ;
        (*(list->now))->gpa = g ;
    }
}

void ShowAll(LinkedList *list) {
    struct studentNode *temp = list->start ;
    printf("\n%-20s %-5s %-5s %-5s\n", "Name", "Age", "Sex", "GPA") ;
    while (temp != NULL) {
        printf("%-20s %-5d %-5c %-5.2f\n", temp->name, temp->age, temp->sex, temp->gpa) ;
        temp = temp->next ;
    }
}

void writefile(LinkedList *list) {
    FILE *fp = fopen("database.txt", "w") ;
    if (!fp) return ;
    struct studentNode *temp = list->start ;
    while (temp != NULL) {
        fprintf(fp, "%s %d %c %f\n", temp->name, temp->age, temp->sex, temp->gpa) ;
        temp = temp->next ;
    }
    fclose(fp) ;
}

void readfile(LinkedList *list) {
    FILE *fp = fopen("database.txt", "r") ;
    if (!fp) 
    return ;
    char n[20], s; int a; float g ;
    while (fscanf(fp, "%s %d %c %f", n, &a, &s, &g) != EOF) {
        InsNode(list, n, a, s, g) ;
    }
    fclose(fp) ;
}

void AddData(LinkedList *list) {
    char n[20], s; int a; float g ;
    printf("Name : "); scanf("%s", n) ;
    printf("Age : "); scanf("%d", &a) ;
    printf("Sex : "); scanf(" %c", &s) ;
    printf("GPA : "); scanf("%f", &g) ; 
    InsNode(list, n, a, s, g) ;
}

void EditData(LinkedList *list) {
    char n[20], new_n[20], s; int a; float g ;
    printf("Target Name : "); scanf("%s", n) ;
    if (FindNode(list, n)) {
        printf("New Name : "); scanf("%s", new_n) ;
        printf("New Age : "); scanf("%d", &a) ;
        printf("New Sex : "); scanf(" %c", &s) ;
        printf("New GPA : "); scanf("%f", &g) ;
        EditNode(list, new_n, a, s, g) ;
    } else printf("Not found.\n") ;
}

void FindData(LinkedList *list) {
    char n[20];
    printf("Search Name : "); scanf("%s", n) ;
    if (FindNode(list, n)) {
        struct studentNode *curr = *(list->now) ;
        printf("Found : %s, %d, %c, %.2f\n", curr->name, curr->age, curr->sex, curr->gpa) ;
    } else printf("Not found.\n") ;
}