#include<iostream>
#include<cmath>  //required for math function

int main(){
    double number1 {};
    std::cout<<"Enter a number(double): ";
    std::cin>>number1;

    std::cout<<"The square root of "<<number1<<" is :"<<sqrt(number1)<<std::endl;   //computes square root of number
    std::cout<<"The cubic root of "<<number1<<" is :"<<cbrt(number1)<<std::endl;   //computes cubic root of num
    std::cout<<"\nThe sin of "<<number1<<" is :"<<sin(number1)<<std::endl;           //computes sin(x)=computes sine of x
    std::cout<<"The cos of "<<number1<<" is :"<<cos(number1)<<std::endl;              //computes cosine
    std::cout<<"The tan of "<<number1<<" is :"<<tan(number1)<<std::endl;         //computes tangent
    std::cout<<"\nThe ceil of "<<number1<<" is :"<<ceil(number1)<<std::endl;    //ceil(x)=round x to the nearest integar not less then x eg.12.40=13
    std::cout<<"The floor of "<<number1<<" is :"<<floor(number1)<<std::endl;    //nfloor(x)=round x to the longest integar not greater then x  eg 12.40=12
    std::cout<<"The round of "<<number1<<" is :"<<round(number1)<<std::endl;    //nearest integar;eg 12.40=12 and 12.60=13
    std::cout<<"\nexponential of "<<number1<<" is :"<<exp(number1)<<std::endl;    //exp(x)=exponential founction =e^x
    std::cout<<"Absulate value of "<<number1<<" is :"<<fabs(number1)<<std::endl;    //fabs(x)=absulate value of x
    std::cout<<"Natural logaritm of "<<number1<<" is : "<<log(number1)<<std::endl;  //log(x)=natural logarithm of x(base e)
    std::cout<<"Logarithm of "<<number1<<" is(base 10) :"<<log10(number1)<<std::endl;   //log10(x)=logarithm of x(base 10)


    std::cout<<"\nEnter another double : ";
    double number2 {};
    std::cin>>number2;
    std::cout<<number1<<" to the power "<<number2<<" is :"<<pow(number1,number2)<<std::endl;    //pow(x,y)=x to the power y
    std::cout<<"\nSquare root of the sum of the squares of two numbers is :"<<hypot(number1,number2)<<std::endl;   //hypot(x,y)=sqrt(pow(x,2)+pow(y,2))
    std::cout<<"Remainder of "<<number1<<"/"<<number2<<" is : "<<fmod(number1,number2)<<std::endl;     //fmod(x,y)=remainder of x/y as a floating number
   
    return 0;
}