#include <stdio.h>

int main() {
    int N, i;
    int studentId, score, totalClasses, absentClasses;
    float attendancePercent;
    int passCount = 0;
    int failCount = 0;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (i = 0; i < N; i++) {
        if (scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses) != 4) {
            break;
        }

        attendancePercent = (float)(totalClasses - absentClasses) / totalClasses * 100.0;

        int scorePass = (score >= 50);
        int attendancePass = (attendancePercent >= 75.0);

        printf("Student %d : ", studentId);

        if (scorePass && attendancePass) {
            printf("PASS\n");
            passCount++;
        } 
            else {
            printf("FAIL - ");
            if (!scorePass && !attendancePass) {
                printf("Both Score and Attendance\n");
            } 
                else if (!scorePass) {
                printf("Low Score\n");
            } 
                else {
                printf("Low Attendance (%.2f%%)\n", attendancePercent);
            }
            failCount++;
        }
    }

    printf("\n--- Summary ---\n");
    printf("Total PASS : %d\n", passCount);
    printf("Total FAIL : %d\n", failCount);

    return 0;
}