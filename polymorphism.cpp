#include<bits/stdc++.h>
  using namespace std;

  #define ll long long int

  /*
     there are two types of polymorphism . these are
     1. compile time polymorphism/static binding
        Example-> function overloading
     2. Runtime Polymorphism/dynamic Binding
        Example: Function overriding
  */

  class person{
public:
   virtual void display()
      {
          cout<<"I am a person. but I am very weak in oop. so I want to learn oop from you. I hope that you will help me to any problem."<<endl;
      }
  };


  class teacher:public person{
public:
    void display()
      {
          cout<<"I am a teacher. but I am very weak in oop. so I want to learn oop from you. I hope that you will help me to any problem."<<endl;
      }
  };
  class student:public person{
public:
    void display()
      {
          cout<<"I am a student. but I am very weak in oop. so I want to learn oop from you. I hope that you will help me to any problem."<<endl;
      }
  };
  int main()
    {
//       person p;
//       student s;
//       teacher t;
       person *p;
       student s;
       teacher t;


       // p->display();
       p=&s;
        p->display();
        p=&t;
         p->display();


    }
