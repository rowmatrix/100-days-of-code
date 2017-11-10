#include <stdio.h>
#include <math.h>

/* finds the average for all the assignments for an individual student */
float getAverageForStudent(float scores[20][10], int student, int numAssignments) 
{
    float sum = 0;
    int i;
    for (i = 0; i < numAssignments; i++) {
        sum += scores[student][i];
    }
    return sum / (float)numAssignments;
}

/* finds the average for all students for an individual assignment */
float getAverageForAssignment(float scores[20][10], int numStudents, int assignment) 
{
    float sum = 0;
    int i;
    for (i = 0; i < numStudents; i++) {
        sum += scores[i][assignment];
    }
    return sum / (float)numStudents;
}

/* find the standard deviation for all students for an individual assignment */
float getStandardDeviationForAssignment(float scores[20][10], int numStudents, int assignment) 
{
    float sum = 0, avg, result;
    int i;
    avg = getAverageForAssignment(scores, numStudents, assignment);
    for (i = 0; i < numStudents; i++) {
        sum += (scores[i][assignment] - avg) * (scores[i][assignment] - avg);
    }
    result = sum / (float)(numStudents - 1);
    
    return sqrt(result);
}

/* prints the table will all scores for all students for all assignments, including the  */
/* averages and standard deviations */
void printScores(char students[20][50], float scores[20][10], int numStudents, int numAssignments) 
{
    int i, j;
    
    /* print table header */
    printf("Name\t");
    for (i = 1; i <= numAssignments; i++) {
        printf("Assn%d\t", i);
    }
    printf("Average\n");

    /* print student scores & averages */
    for (i = 0; i < numStudents; i++) {
        printf("%s\t", students[i]);
        for (j = 0; j < numAssignments; j++) {
            printf("%5d\t", (int)scores[i][j]);
        }
        
        printf("%7.2f\n", getAverageForStudent(scores, i, numAssignments));
    }

    /* print assignment averages and standard deviations */
    printf("\nAvg\t");
    float sumAvg = 0, avg;
    for (i = 0; i < numAssignments; i++) {
        avg = getAverageForAssignment(scores, numStudents, i);
        printf("%5.2f\t", avg);
        sumAvg += avg;
    }
    printf("%7.2f\n", sumAvg/(float)numAssignments);

    printf("StdD\t");
    float sumStdD = 0, stdD;
    for (i = 0; i < numAssignments; i++) {
        stdD = getStandardDeviationForAssignment(scores, numStudents, i);
        printf("%5.2f\t", stdD);
        sumStdD += stdD;
    }
    printf("%7.2f\n", sumStdD/(float)numAssignments);
}

/* collects student names and scores from the user */
void getInfo(char students[20][50], float scores[20][10], int numStudents, int numAssignments)
{
    int i, j;
    for (i = 0; i < numStudents; i++) {
        printf("Student name: ");
        scanf("%s", students[i]);
        for (j = 0; j < numAssignments; j++) {
            printf("Assignment %d: ", j+1);
            scanf("%f", &scores[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float scores[20][10];
    int numStudents;
    int numAssignments;
    char students[20][50];

    /* prompt */
    printf("How many students are there (between 1 and 20)? ");
    scanf("%d", &numStudents);
    printf("How many assignments are there (between 1 and 10)? ");
    scanf("%d", &numAssignments);
    printf("\n");

    getInfo(students, scores, numStudents, numAssignments);
    printScores(students, scores, numStudents, numAssignments);

    return 0;
}
