#include "Number.h"
Number::Number(){

}
Number::Number(int total)
    :dollars {total/100},cents {total%100}{

    }

Number::Number(int dollars_val,int cents_val)
    :dollars {dollars_val},cents {cents_val}{

}
bool Number::operator==(const Number rhs) const {
    if(dollars==rhs.dollars && cents==rhs.cents){
            return true;
    }
return false;
}
bool Number::operator!=(const Number rhs) const {
    if(dollars != rhs.dollars || cents != rhs.cents){
        return true;
    }
return false;
}
//sum
Number operator+(const Number lhs,const Number rhs){
    int a=(lhs.dollars+rhs.dollars)*100;
    int b=(lhs.cents+rhs.cents);
    Number total(a+b);
return total;
}