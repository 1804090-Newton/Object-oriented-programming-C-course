#include<bits/stdc++.h>
  using namespace std;
  class person
    {
    public:
        string name;
        int age;
        void display1()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
    };

    class student:public  person{
  public:
    //string name;
   // int age;
    int id;
    void display2()
      {
         // cout<<"Name: "<<name<<endl;
          //cout<<"Age: "<<age<<endl;
          cout<<"id: "<<id<<endl;
          display1();
      }
    };

  int main()
    {
        person p;
        p.name="Al Jabir";
        p.age=23;
        p.display1();
        student s;
        s.name="Newton";
        s.age=24;
        s.id=1804090;
        s.display2();

    }
