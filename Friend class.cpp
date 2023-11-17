#include<bits/stdc++.h>
  using namespace std;

  #define long long int

  class A
  {
  private:
       int id=101;
       string name="Al Jabir Newton";

  public:
    friend class B;


  };

  class B
     {
     public:
        void display(A ob)
          {
              cout<<ob.id<<endl;
              cout<<ob.name<<endl;
          }
     };

  int main()
    {
       A ob1;
       B ob2;

        ob2.display(ob1);
    }
