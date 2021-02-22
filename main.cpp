#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

double myfunc(double x)
{
 double value=exp(x);
 return value;
}
//YPOLOGISMOS TRAPEZIOY 
void trapezio(double a, double b)
{
double h=b-a;
 double inte=(h/2)*(myfunc(a)+myfunc(b));
cout << inte <<endl;
}

int  main(){
    double y = 0 ;
    //call functions 
    double a =0;
    double b =6;
    trapezio(a,b);
    return 0;
}

