//pointers in c and use of &, *
#include <stdio.h>

int calcMarks(int* sub1, int* sub2){      //call by value 
    int marks= *sub1 + *sub2;
    return marks;
}

int main(){
    int mathMarks = 85;
    int scienceMarks = 90;

    int totalMarks = calcMarks(&mathMarks, &scienceMarks);  //call by reference 
                                                            //passing addresses of variables
    printf("Total Marks: %d\n", totalMarks); //printing total marks

    int a = 10;
    int* p = &a; //pointer variable p stores the address of variable a
    int val=*p; //dereferencing pointer p to get the value of a
    printf("Value of a using pointer: %d\n", val);
    printf("Address of a: %p\n", (void*)&a);
    printf("Address stored in pointer p: %p\n", (void*)p);

    return 0;
}

/* 
& - Address-of operator: Used to get the memory address of a variable.
    Call by reference involves passing the address of a variable to a function.
* - Dereference operator: Used to access the value at a given memory address.
    Call by value involves passing the actual value of a variable to a function.
*/
