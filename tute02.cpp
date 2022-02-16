/*
#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}*/
#include<iostream>
#include<iomanip>
int main()
{
  double salary,netSalary;
  int etype,otHrs,otRate;
  std::cout<<"Enter Employee Type:";
  std::cin>>etype;
  std::cout<<"Enter Salary:";
  std::cin>>salary;
  std::cout<<"Enter OtHrs:";
  std::cin>>otHrs;
  switch(etype)
  {
    case 1:otRate=1000;
            break;  
    case 2:otRate=1500;
            break;         
    default:otRate=1700;
          break;  
  }     
  netSalary=salary+otHrs*otRate;
  std::cout<<"Net Salary is "<<netSalary;
  return 0;
}
