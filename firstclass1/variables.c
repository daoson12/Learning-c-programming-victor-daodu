#include <stdio.h>

int main(void){


    /**variables = Allocated scape in memory to store a value
     * We refer to a variable's name to access the stored value.
     * That variable now behaves as if it was the value it contains.
     * creating a variable is done two steps declaration and initialization
     * But  we need to declare what type of data we are storing.
     */


    /**declaration we are creating a space 
     * in the memory to store a value using 
     * an integer data type.
     */
    int x;

    /**
     * we are assigning a value
     * to our variable. 
     */
    x=123;

    /**
     * likewise declaration and initialiazation
     * can be done on the same line
     * that is we can combine declearation and
     * initialiazation in one place 
     * 
     */
    int y=12;     

    int age =21; //integer
    float gpa = 21.05; //floating point number
    char grade = 'A'; //Single character
    char name[]="Victor"; //array of characters

    printf("I am %d years old\n", age);
    printf("Hell0 my name is %s\n", name);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);
    return 0;


}