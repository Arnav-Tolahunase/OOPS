//heap and stack memory allocation implementation

#include <stdio.h>
#include <stdlib.h>

int main(){

    struct Marks{
        int math;
        int science;
    };
    struct Marks student1;
    student1.math = 85;      //accessing members using dot operator
    student1.science = 90;
    printf("Student 1 - Math: %d, Science: %d\n", student1.math, student1.science);

    struct Marks* pStudent = (struct Marks*)malloc(sizeof(struct Marks)); //dynamic memory allocation
    pStudent->math = 78;    //accessing members using pointer
    pStudent->science = 88;
    printf("Student 2 - Math: %d, Science: %d\n", pStudent->math, pStudent->science);
    
    free(pStudent); //freeing dynamically allocated memory

    return 0;
}
/*****************************************************************************************
 
student1 is a structure variable that has its memory allocated on the stack (value along with its address)

pStudent is a pointer to a structure that has its memory allocated on the heap (address is in the stack but the value is in the heap)


 ******************************************************************************************/
