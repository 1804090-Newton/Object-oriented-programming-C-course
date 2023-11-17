#include<bits/stdc++.h>
using namespace std;
  class student
     {
     private:
        string name;
     public:
         void setName(string x)
           {
               name=x;
           }
         string getName()
             {
                 return name;
             }
     };

     int main()
     {
           student s1;
           s1.setName("Al jabir");
           cout<<s1.getName()<<endl;


     }
