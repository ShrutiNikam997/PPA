#include<iostream>
using namespace std;


class Marvellous : public demo, hello
{
    public :
    int C;

        Marvellous()
        {
            C=30;
            cout<<"inside marvellous costructor\n";
        }
        ~Marvellous()
        {
            cout<<"inside marvellous costructor\n"; 
        }
            void sun()
            {
            cout<<"inside sun of marvellous\n";
            }
        };

class demo : public Marvellous
{
    public:
    int A; 

        demo()
        {
              A=10;
              cout<<"inside demo constructor\n";
        } 

        ~demo()
        {
            cout<<"inside demo destructor";
        }

        void fun()
        {
            cout<<"inside fun of demo";
        }
};

class hello : public Marvellous
{
    public :
    int B;
        
        hello()
        {
         B=20;
         cout<<"inside hello costructor";
        }
         ~hello()
        {
            cout<<"inside demo destructor";
        }

        void gun()
        {
            cout<<"inside gun of hello";
        }

};




int main()
{

    demo dobj;
    hello hobj;

    return 0;
}