#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
double myfunc(double x)
{
 double value=exp(x);
 return value;
}
void simpson38(double a, double b)
{
 double h=(b-a)/3;
 double inte=(3*h/8)*(myfunc(a)+3*myfunc(a+h)+3*myfunc(a+2*h)+myfunc(b));
}


int  main(){
    double a = 0;
    double b = 5;
    //call functions 
    simpson38(a, b);
    return 0;
}
