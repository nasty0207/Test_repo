#include <stdio.h>

int main ()
    {
    printf ("\n"
            "Supersolution of linear equations v. 2.0 (C) Nastya\n\n"
            "Equation of the form: kx + b=0.\n\n"
            "Enter coefficient k:");

    double k=0;
    scanf ("%lg",&k);

    printf ("Enter coefficient b:");

    double b=0;
    scanf ("%lg",&b);

    if (k!=0)
        {
        double x = -b / k;

        printf ("1 root, x= %lg\n", x);

        }

    if ((k == 0) && (b!= 0))
        {
        printf ("No roots\n");
        }

    if ((k == 0) && (b == 0))
        {
        printf ("infinity of roots\n");
        }

    printf ("\nYour equation is solved :)\n");

    return 0;
    }
