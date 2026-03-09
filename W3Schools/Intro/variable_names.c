#include <stdio.h>


int main()

{

    /**
     * When we name a variable we give them a unique name, called identifier
     * normally we can use camel case: variableName or snake case: variable_name
     * Note: It is recommended to use descriptive names in order to create understandable and maintainable code:
     * The general rules for naming variables are:
        Names can contain letters, digits and underscores
        Names must begin with a letter or an underscore (_)
        Names are case-sensitive (myVar and myvar are different variables)
        Names cannot contain whitespaces or special characters like !, #, %, etc.
        Reserved words (such as int) cannot be used as names
     */

     // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student ID: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c", studentGrade);


     return 0; 

}