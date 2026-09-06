#include <stdio.h>
int main() {
    char stdname[40], stdID[20];
    int numofcompletedlabs, totalnooflabs;
    float quizmarks, assignmentmarks, projectmarks;
    printf("Enter Student Name");
    scanf("%39s, &stdname");
    printf("Enter Student ID");
    scanf("%19s, &stdID");
    printf("Enter completed labs");
    scanf("%d, &numofcompletedlabs");
    printf("Enter Total no of Labs");
    scanf("%d, &totalnooflabs");
    printf("Enter Quiz Marks");
    scanf("%f, &quizmarks");
    printf("Enter Assignment marks");
    scanf("%f, &assignmentmarks");
    printf("Enter Project marks");
    scanf("%f, &projectmarks");
    float labpercentage = ((float)numofcompletedlabs / totalnooflabs ) * 100;
    float Totalacademicscore = quizmarks + assignmentmarks + projectmarks;
    printf("Hi",stdname);
    printf("Your Lab Completion Percentage: %.2f%%\n", labpercentage);//%% to show percentage sign//
    printf("Your Total Academic Score is ", Totalacademicscore);
    return 0;
}