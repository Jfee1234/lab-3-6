#include<stdio.h>
#include<math.h>
int main (void) 
{
 float R, H, K;
 printf("Enter R :");
 scanf("%f",&R);
 printf("Enter H : ");
 scanf("%f",&H);
 K = (6.28 * R)*H+2*(3.14*pow(R,2));
 printf("area = %.3f",K);
}