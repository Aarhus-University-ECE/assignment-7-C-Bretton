#include "taylor_sine.h"
#include "math.h"
#include "assert.h"
#include "stdio.h"


double taylor_sine(double x, int n)
{
    assert(n > 0); //Checks that the input n is larger than 0
    
    double result = 0; //Initializes result
    double sign = -1; //Sign initialization, changes between positive and negative before a new term
    double j = 1; // the denominator of the taylorsine function
    double k = 1; //The potens of x in the function

    for (int i = 0; i < n; i++)
    {
        sign = -sign; //Changes the sign infront of the next term in the series.

        result = result + (sign * (pow(x, k) / j)); //calculates the resulting value of the function

        j=j*(k+1)*(k+2); //Calculates the next denominator. As the next factorial will be the current factorial j
        // times the number k+1 and k+2. because the factored denominator will increase by 2, and the number factored is the same
        // as k, k is used to times the next to numbers in the row.

        k = k + 2; //Calculates the potens for next term
    }
        
    return result; //returns the result
}
