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
// σπολογιζμός ολοκληρώμαηος
double h=(b-a)/2/n;
double integral_b=0, integral_c=0;
double integral_a=(myfunc(a)+myfunc(b));
for (int i=1; i<2*n; i++){
double xx=a+h*i;
if(i%2==0){integral_b+=myfunc(xx);}
else {integral_c+=myfunc(xx);}
}
double simpson_n=(h/3.)*(integral_a+2*integral_b+4*integral_c);
// σπολογιζμός ζθάλμαηος
int m=n/2;
h=(b-a)/2/m;
integral_b=0, integral_c=0;
for (int i=1; i<2*m; i++){
double xx=a+h*i;
if(i%2==0){integral_b+=myfunc(xx);}
else {integral_c+=myfunc(xx);}
}
double simpson_m=(h/3.)*(integral_a+2*integral_b+4*integral_c);
double simpson_error=fabs(simpson_n-simpson_m)/15.;
//εκηύπωζη αποηελεζμάηων
double trueval= exp(4.)-exp(0.);
cout<< n <<" "<< simpson_n<< " +- "<< simpson_error;
cout<<" apoklisi "<<simpson_n-trueval <<endl;
}
int  main(){ 
    printf("main starting \nn  integral  error\n");
    double a = 0;
    double b = 5;
    int n =1 ;
    simpson(a, b, n);
    return 0; 
} 

