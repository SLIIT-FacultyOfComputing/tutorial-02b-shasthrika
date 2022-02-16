/*
#include <stdio.h>
int main() 
{
    float cm, inches;
    printf("Enter a length in cm : ");
    scanf("%f",&cm);
    inches = cm / 2.54;
    printf("Length in inches is %f \n", inches);
    return 0;
} */ 
#include<iostream>
#include<iomanip>
int main()
{
  float cm,inches;
  std::cout<<"Enter a length in cm:";
  std::cin>>cm;
  inches=cm/2.54;
  std::cout<<"Length in inches is "<<inches<<std::endl;
  return 0;
}