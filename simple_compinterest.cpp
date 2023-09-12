# include <stdio.h>
#include <math.h>
int main()
{ 
   float p,t,simple,compound,r,b;
   scanf("%f %f %f",&p,&r,&t);
   simple=(p*r*t)/100;
   compound=p*(pow((1+(r*0.01)),t));
   printf("The simple interest is %fcompound interest is %f",simple,compound);

}
