#include<bits/stdc++.h>
  using namespace std;
  #define long long int
//inheritance e jodi amra function overide korte jai. abong
// class er object hisebe amra jodi pointer use kori
//thole amader super class er override function e datatype er age virtual keword likhte hoi
// tai nicher code e virtual kyword ti lkhlam
  class shape{
 public:
    double dim1, dim2;
    shape (double dim1, double dim2)
       {
           this->dim1=dim1;
           this->dim2=dim2;
          }
    virtual double area()
       {
           return 0;
       }
  };

  class traingle: public shape{
 public:
    traingle(double dim1, double dim2):shape(dim1,dim2)
      {


      }

      double area()
       {
           return 0.5*dim1*dim2;
       }

  };

   class rectangle: public shape{
 public:
    rectangle(double dim1, double dim2):shape(dim1,dim2)
      {


      }

      double area()
       {
           return dim1*dim2;
       }

  };
  int main()
    {
        int a,b,c,d;
        cin>>a>>b;
   shape *p;
   traingle t(a,b);
   rectangle r(a,b);

   p=&t;
   cout<<"traingle area= "<<p->area()<<endl;
   p=&r;
   cout<<"rectangle area= "<<p->area()<<endl;

    }
