#include <stdio.h>

#define PI 3.14               //Defining a macro for the value of Pi

int main(){
    float radius = 7;
    float area = PI * radius * radius; //Using the macro to calculate area of a circle
    printf("Area of circle with radius %.2f is: %.2f\n", radius, area);
    return 0;
}

/*******************************************************************************
 
macros are preprocessor directives that define constants or expressions.
They are replaced by their values before compilation.

so here PI is replaced by 3.14 before the code is compiled.

macros do not consume memory like variables do, making them efficient for constant values.



 *******************************************************************************/