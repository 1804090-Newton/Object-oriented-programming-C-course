
#include<bits/stdc++.h>
  using namespace std;
  #define ll long long int

  class MobileUser
    {
    public:
        void call()
          {
              cout<<"Hello! "<<endl;
          }
         virtual void sendMessage()=0;
    };

    class Asif:public MobileUser
      {
      public:
        void sendMessage()
          {
              cout<<"Assalamu alaikum. I am asif "<<endl;
          }

      };


       class Arif:public MobileUser
      {
      public:
        void sendMessage()
          {
              cout<<"Assalamu alaikum. I am arif"<<endl;
          }

      };


  int main()
    {
       MobileUser *m;
       Asif r;
       Arif k;
       m =&r;
       m->sendMessage();

       m=&k;
       m->sendMessage();
    }
