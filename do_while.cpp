#include<iostream>
using namespace std;

int main(){
    
    char selection{};
    do{
        cout<<"*****selection list*******"<<endl;
        cout<<"1.Do this"<<endl;
        cout<<"2.Do that"<<endl;
        cout<<"3.Do something else"<<endl;
        cout<<"Q.Quit"<<endl;
        cout<<"Enter your selection: "<<endl;
        cin>>selection;

        switch(selection)
        {
            case '1':   // 1 is integar type,but we are using '' for why?because selection type is char
                cout<<"You entered 1--doing this."<<endl;
                break;
            case '2':
                cout<<"You entered 2--doing that."<<endl;
                break;
            case '3':
                cout<<"You entered 3--doing something else."<<endl;
                break;
            case 'q':
            case 'Q':
                cout<<"You entered Q--good bye."<<endl;
                break;
            default:
                cout<<"Sorry--Try again!"<<endl;

        }
    }while(selection != 'q' && selection !='Q');

    cout<<endl;
    return 0;
}