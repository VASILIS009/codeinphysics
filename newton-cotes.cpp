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

void trapezio(double a, double b, int n){
 int cout =0 ;  
 int end1 =0;
 double h=(b-a)/n;
 double integral= 0;
 integral = 0.5*h*(myfunc(a)+myfunc(b));
     for (int i=1; i<n; i++){
         double xx=a+h*i;
         integral+=h*myfunc(xx);
     }

 std::cout<< n << "  " << integral <<endl; //print result
}



int  main(){ 
    printf("main starting \nn  integral \n");
    double a = 0;
    double b = 5;
    int n =1 ;
    trapezio (a, b, n);
    return 0; 
} 

