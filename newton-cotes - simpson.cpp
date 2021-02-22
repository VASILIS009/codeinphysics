#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

double myfunc(double x)
{
 double ff=0.;
 ff= exp(x); // ή όηιδήποηε άλλο
 return ff;
}

void simpson(double a, double b, int n)
{
 double h=(b-a)/2/n;
 double integral=h*(myfunc(a)+myfunc(b))/3;
 for (int i=1; i<2*n; i++){
 double xx=a+h*i;
 if(i%2==0){integral+=2*h*myfunc(xx)/3;}
 else {integral+=4*h*myfunc(xx)/3;}
 }
 std::cout<< n <<" "<< integral<< endl;
}



int  main(){ 
    printf("main starting \nn  integral \n");
    double a = 0;
    double b = 5;
    int n =1 ;
    simpson(a, b, n);
    return 0; 
} 

