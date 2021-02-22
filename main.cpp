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

void trapezio(double a, double b)
{
double h=b-a;
 double inte=(h/2)*(myfunc(a)+myfunc(b));
cout << inte <<endl;
}

int  main(){
    double y = 0 ;
    //call functions 
 myfunc(y);
    return 0;
}
