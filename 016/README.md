Start off by reading two integers, the number of students in the class and the number of assignments per student.
You will then prompt the user for the names of each student (string) and the assignment scores for each student (floating point values).
See below for a sample execution of the program.

Ensure that the number of students is between 1 and 20, inclusively.
Ensure that the number of assignments is between 1 and 10, inclusively.
Ensure that the score on each assignment is between 0 and 100, inclusively.

In addition, you must have five functions in your code, which the main function counting as one. 
After reading all the data, you must use *other* functions to figure out the statistics of the student grades. 
You must define and use the following functions **EXACTLY** shown below:

```c       
/* finds the average for all the assignments for an individual student */
float getAverageForStudent(float scores[20][10], int student, int numAssignments) {

}

/* finds the average for all students for an individual assignment */
float getAverageForAssignment(float scores[20][10], int numStudents, int assignment) {

}

/* find the standard deviation for all students for an individual assignment */
float getStandardDeviationForAssignment(float scores[20][10], int numStudents, int assignment) {

}

/* prints the table will all scores for all students for all assignments, including the  */
/* averages and standard deviations */
void printScores(char students[20][50], float scores[20][10], int numStudents, int numAssignments) {

}
```

You can have more functions if you like, but you must have at least the four functions above and your main function. 

Below is a sample execution of the program:

```
How many students are there (between 1 and 20)? 4
How many assignments are there (between 1 and 10)? 3

Student name: Jeff
Assignment 1: 100
Assignment 2: 100
Assignment 3: 100

Student name: Mike
Assignment 1: 50
Assignment 2: 45
Assignment 3: 90

Student name: John
Assignment 1: 100
Assignment 2: 20
Assignment 3: 30

Student name: Paul
Assignment 1: 20
Assignment 2: 20
Assignment 3: 0

Name    Assn1   Assn2   Assn3   Average
Jeff      100     100     100    100.00
Mike       50      45      90     61.67
John      100      20      30     50.00
Paul       20      20       0     13.33

Avg     67.50   46.25   55.00     56.25
StdD    39.48   37.72   47.96     35.70
```

Prompt the user the correct number of times depending on number of students and assignments.
Print the ouput formatted as shown.

