/*
Student Name:Diwakar kandel
subject:programming fundamental
Lab No:
Roll NO:08
Program:WAP to check nos those which divide by itself or one.
Date:6Nov,2016
*/
#include<stdio.h>
int main()
{
 int n,i,count=0;
 printf("Enter any nos:\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++){
 
 if(n%i== 0)
 {
     count++;
  }
}
  
  
  if(count<=2)
  {
   printf("%d is prime number:\n",n);
   }
   else
   {
    printf("%d is not prime number:\n",n);
    }
    return 0;
 }
    
