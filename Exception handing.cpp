
/*
 Error-> 1) compile time Error
         2)run Time Error
  Exception: Exception is a run time error.
  Exception Handling is a mechanism that can handle the exception
  keywords: Try, catch, throw
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
     {

         try
         {
         int num1, num2;
           cout<<"Enter ist number: ";
           cin>>num1;
           cout<<"Enter 2nd number: ";
           cin>>num2;
             if(num2==0)
             {
                 throw -1;
             }
           double result=(double)num1/num2;
           cout<<" this result is: "<<result<<endl;
         }

        // catch(int x)
          catch(...)
         {
             cout<<"divided by zero is not possible. please try again"<<endl;
         }
     }
