#include<stdio.h>
int main ()
{
           float units,bills;
           printf ( " enter units consumed: ");
           scanf ("%f",units);
           if (units<= 100)
            bill=units *1.50;
           else if (units<=200)
            bills=units*2.50;
           else if (units <=300)
            bills=units*4.00;
           else
            bills=units*6.00;
           printf("electricity bill = Rs%.3f\n",bill);
           return 0;
}
