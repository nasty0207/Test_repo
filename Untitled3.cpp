#include <stdio.h>

int supersoluthion (double a, double k, double* x);
void supersoluthion_Test ();

const double tolerance = 1e-7;

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

    int roots = supersolution (b, k, &X);

    printf ("\nYour equation is solved :)\n");

    if (roots==1) printf ( "1 root, x= %lf\n" X);
    if (roots==2) printf ( "infinity of roots\n");
    if (roots==0) printf ( "No roots");


    return 0;

    }
	void supersoluthion_test ()
{
	printf ("\nChecking tests:\n");

	double x=0;
	int n=0;

	n = supersolution (3, 6, &x);

	if (n==1 && x==-2) printf ("Test 1 good\n");
	else               printf ("Test bad\n");

	n = supersolution (0, 0, &x);

	if (n==2)         printf ("Test 2 good\n");
	else               printf ("Test bad\n");

	n = supersolution (0, 1, &x);

	if (n==0)         printf ("Test 3 good\n");
	else               printf ("Test bad\n");
}
