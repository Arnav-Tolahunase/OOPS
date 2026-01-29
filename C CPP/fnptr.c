#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
    int (*fnptr)(int, int) = add;  //fnptr is a pointer to a function that takes two int arguments and returns an int
    int result = fnptr(5, 10);      //calling the function using the function pointer
    printf("Result of addition using function pointer: %d\n", result);
}

/*******************************************************************************
Function pointers store the address of a function and can be used to call the function indirectly.
They are useful for implementing callback functions, event handlers, and for passing functions as arguments to other

fnptr=listener
add=callback function


********************************************************************************/