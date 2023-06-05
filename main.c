#include <stdio.h>

int main() {
     const double PI = 3.141593;
     printf("WELCOME TO CIRCUMFRENCE CALCULATOR!!!\nPlease input the radius of your circle:\n> ");
     double radius;
     scanf("%lf", &radius);
     double out = 2 * PI * radius;
     printf("The circumfrence of your circle is %lf.\nTo exit, type anything and press enter.\n", out);
     scanf("%d");
     return 0;
}