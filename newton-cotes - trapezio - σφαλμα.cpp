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


void trapezio(double a, double b, int n)
{
// σπολογιζμός ολοκληρώμαηος
double h=(b-a)/n;
double integral=0.5*(myfunc(a)+myfunc(b));
for (int i=1; i<n; i++){
 double xx=a+h*i;
 integral+=myfunc(xx);
 }
double integral_n=h*integral;
//σπολογιζμός ζθάλμαηος
int m=n/2;
 h=(b-a)/m;
integral=0.5*(myfunc(a)+myfunc(b));
for (int i=1; i<m; i++){
 double xx=a+h*i;
 integral+=myfunc(xx);
 }
double integral_m=h*integral;
double integral_error=fabs(integral_n-integral_m)/3.;
//εκηύπωζη αποηελεζμάηων
double trueval= exp(4.)-exp(0.);
cout<< n <<"  "<< integral_n<< " +-  "<< integral_error;
cout<<" apoklisi "<<integral_n-trueval <<endl;
}
int  main(){ 
    printf("main starting \nn  integral  error\n");
    double a = 0;
    double b = 5;
    int n =1 ;
    trapezio(a, b, n);
    return 0; 
} 