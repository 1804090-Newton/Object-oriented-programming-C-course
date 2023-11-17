#include<bits/stdc++.h>
  using namespace std;

  #define long long int

  class overloading{
 public:
     int name;
     float age;
     int id;

    void add (int a, int b)
      {
          cout<<a+b<<endl;
      }
    void add (int a , int b, int c)
    {
        cout<<a+b+c<<endl;
    }
    void add(){
     cout<<"there is no way to add any operand "<<endl;
    }

    void add ( string name, float age, int id )
      {
           //this->name=name;
           //this->age=age;
           //this->id=id;
           cout<<name<<" "<<id<<" "<<age<<endl;

      }

  };

  int main()
     {
         overloading ol;
         ol.add(2,3);

          ol.add(2,3,8);
           ol.add();
           ol.add ("Al jabir Newton", 23.8, 1804090);


     }
