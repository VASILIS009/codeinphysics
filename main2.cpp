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

void simpson13(double a, double b)
{
 double h=(b-a)/2;
 double inte=(h/3)*(myfunc(a)+4*myfunc(a+h)+myfunc(b));
}

int  main(){
    double a = 0;
    double b = 5;
    //call functions 
    simpson13(a, b);
    return 0;
}
