#include<iostream>
using namespace std;    //Inbuilt namespace

namespace Marvellous
{
    class Demo 
    {
        //Logic
    };
}

namespace PPA
{
    class Hello
    {
        //Hello
    };
}

using namespace Marvellous;

int main()
{
    std ::cout<<"Inside main";
    Demo dobj;
    PPA::Hello hobj;
    
    return 0;
}