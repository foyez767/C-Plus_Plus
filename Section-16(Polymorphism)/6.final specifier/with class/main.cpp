#include<iostream>
using namespace std;

class A final
{
    public:
        void say_hello(){
            cout<<"how are you"<<endl;
        }
};

// class B: public A
// {
//     public:
//         void say_hello(){
//             cout<<"How are you"<<endl;
//         }
// };
/*It is error since I said earlier that class A is final means we can not derived class A in future*/

int main()
{


    return 0;
}