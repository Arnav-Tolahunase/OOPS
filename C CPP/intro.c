#include <stdio.h>      //header file for standard input and output functions
                        //header files provide declarations for functions and macros
int globalVarable=10;   //definition and initialization of a global variable
                        //global variables are accessible from any function within this file

int add(int a, int b){
    int result = a + b; //local variable to store the result of addition
    return result;      //returning the result of addition
                        //result is only accessible within this function
}

int calcMarks(int sub1, int sub2){  
    int marks= sub1 + sub2;
    return marks;
}

int main(){             //declaration of the main function. This is the entry point of the program

    int localVariable=20; //definition and initialization of a local variable
                        //local variables are accessible only within the function they are defined in

    int sum = add(globalVarable, localVariable); //calling the add function with global and local variables
    printf("Sum: %d\n",sum); //printing the result to the console

    int mathMarks = 85;
    int scienceMarks = 90;

    int totalMarks = calcMarks(mathMarks, scienceMarks); //calling calcMarks function
    printf("Total Marks: %d\n", totalMarks); //printing total marks
}


