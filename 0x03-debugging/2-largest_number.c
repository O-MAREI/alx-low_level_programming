#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a == b)
    {
	    if (a > c)
	    {
		    return (a);
	    }
	    else
	    {
		    return (c);
	    }
    }
    if (a == c)
    {
	    if (a > b)
	    {
		    return (a);
	    }
	    else
	    {
		    return (b);
	    }
    }
    if (b == c)
    {
	    if (b > a)
	    {
		    return (b);
	    }
	    else
	    {
		    return (a);
	    }
    }
    if (a > b && a > c)
    {
	    largest = a;
    }
    else if (b > a && b > c)
    {
	    largest = b;
    }
    else
    {
	    largest = c;
    }

    return (largest);
}
