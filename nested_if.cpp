#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your obtain marks in exam out of 100 : "<<endl;
    int exam_marks {0};
    cin>>exam_marks;

    char letter_grade {};
    
    if(exam_marks>=0 && exam_marks<=100)//number must be remain between 0-100
        {
            if(exam_marks>90)
                letter_grade ='A';
            else if(exam_marks>80)
                letter_grade ='B';
            else if(exam_marks>70)
                letter_grade ='C';
            else if(exam_marks>60)
                letter_grade ='D';
            else
                letter_grade ='F';

            cout<<"Letter grade : "<<letter_grade<<endl;

            if(letter_grade=='F')
            cout<<"Sorry! You must repeat the exam.";
            else
            cout<<"Congratulations! You passed the exam.";
        }

    else
        {
            cout<<"Sorry! "<<exam_marks<<" is not in range."<<endl;
        }
        
    return 0;
}