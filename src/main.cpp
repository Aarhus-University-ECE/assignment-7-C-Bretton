#include "taylor_sine.c"
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "stack.c"



// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    double t1 = 1; //t1 to t5 is test variables for x
    double t2 = 2;
    double t3 = 9;
    double t4 = 14;
    double t5 = 28;

    int n = 33; //number of terms used in taylor_sine function

    //test cases for the taylor_sine function
    printf("The result using our taylor_sine function: \n");
    printf("%f \n", taylor_sine(t1, n)); 
    printf("%f \n", taylor_sine(t2, n));
    printf("%f \n", taylor_sine(t3, n));
    printf("%f \n", taylor_sine(t4, n));
    printf("%f \n", taylor_sine(t5, n));

    printf("The result using ANSI C Sin function: \n");
    printf("%f \n", sin(t1)); //this result matches the result of my function
    printf("%f \n", sin(t2)); //this result matches the result of my function
    printf("%f \n", sin(t3)); //this result matches the result of my function
    printf("%f \n", sin(t4)); //this result matches the result of my function
    printf("%f \n", sin(t5)); //this result varies from the result of my function, and is not really close

 /* c) By increasing the number of terms in the taylor_sine function the precision of the function increases.
    If the x value has a high value, then the function requires a lot more terms to make a better
    precision than a low value x variable. */

    //Exercise 2
    // a) + b) A)
    stack s; //creates stack s
    initialize(&s); //initializes stack s
    assert(s.head == NULL); //checks if stack was initialized as empty
    
    // b) B)
    int x = 5; //test variable to test push and pop functions
    push(x, &s); //pushes x on top of the stack
    int y = pop(&s); //pops the stack and returns it as y
    assert(s.head == NULL); //checks if stack s is the same as before the commands
    assert(x == y); // checks if the pushed and popped values are the same: PASSES the assertation
    printf("Here come the test of the stack\n");
    printf("x = %d and y = %d\n", x, y); //prints the x and y variable.

    // b) C)
    int x0 = 4; //test variable
    int x1 = 6; //test variable
    push(x0, &s); //Pushes x0 on top of the stack
    push(x1, &s); //pushes x1 on top of the stack
    int y0 = pop(&s); //pops the top of stack (x1)
    int y1 = pop(&s); //pops the top of stack (x0)
    assert(s.head == NULL); //checks if stack s is the same as before the commands
    assert(x0 == y1 && x1 == y0); // asserts that x0 and y1 are equal and x1 and y0 are equal
    printf("x0 = %d and y1 = %d\n", x0, y1); //prints x0 and y1
    printf("x1 = %d and y0 = %d\n", x1, y0); //prints x1 and y0


     
    return 0;
}