#include <stdio.h>
	/**
 * Program: Sum and Difference of int and float values
 *
 * Description:
 *   Reads two integers and two floating-point numbers from stdin,
 *   then prints the sum and difference of each pair on separate lines,
 *   with a label describing each result.
 *
 * Input Format:
 *   Line 1: two integers separated by a space      
 *   Line 2: two floating-point numbers separated
 *           by a space                             
 *
 * Output Format:
 *   Four labelled lines: int sum, int difference,
 *   float sum, float difference.
 *   Float results are rounded to one decimal place.
 *
 * Note:
 *   Differences are computed as (first - second), so the result
 *   is negative when the second number is larger.
 */
 
int main()
{
    /* Declare two integers and two floats */
    int a, b;
    float x, y;

    /* Read two integers from the first line of input */
    scanf("%d %d", &a, &b);

    /* Read two floating-point numbers from the second line of input */
    scanf("%f %f", &x, &y);

    /* Integer results: print sum and difference (%d prints an int) */
      printf("%d %d\n", a + b, a - b);
    /* Float results: %.1f rounds the output to one decimal place */
     printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}
    
