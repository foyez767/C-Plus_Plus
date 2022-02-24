//switch statement

//ask the user what grade he expect in exam
//and tell them what he need to do to score/achieve it.

#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the letter grade you want to obtain in exam: ";
    char letter_grade {};
    cin>>letter_grade;

    switch(letter_grade)
    {
      case 'A' :
      case 'a' :
            cout<<"Excellent! You need to do hardwork";
            break;
      case 'B' :
      case 'b' :
            cout<<"Great! You should learn properly and do homework.";
            break;
      case 'C' :
      case 'c' :
            cout<<"Hmmm,you should try for a better result.Just work on daily basis.";
            break;
      case 'F' :
      case 'f' :

        {
            cout<<"Are you sure?(Y/N): ";
            char confirm {};          
            cin>>confirm;

                if(confirm == 'Y'||confirm == 'y')
                    cout<<"I think you have no interest in study.BOL"<<endl;

                else if(confirm == 'N'|| confirm == 'n')
                    cout<<"Good boy!keep study so that you can obtain a better result.";
                else
                    cout<<"Illegal choice!!!!!!!!!";

                break;
        }
      default :
            cout<<"Invalid letter grade.";
    }
    return 0;
}