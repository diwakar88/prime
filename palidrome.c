/*
Student Name:Diwakar kandel
subject:programming fundamental
Lab No:
Roll NO:08
Program:WAP to check given nos is palidrome or not.
Date:6Nov,2016
*/
#include<stdio.h>
int main()
{
  int a,b=0,r,m;
  printf("Enter any nos:\n");
  scanf("%d",&a);
  
  m=a;
  while(a!=0){
  
  r=a%10;
  b=b*10+r;
  a=a/10;
  }
  
  if(m==b)
  {
  printf("%d is palidrome",m);
  }
  else
  {
  printf("%d is not palidrome",m);
  }
  return 0;
  
  }
