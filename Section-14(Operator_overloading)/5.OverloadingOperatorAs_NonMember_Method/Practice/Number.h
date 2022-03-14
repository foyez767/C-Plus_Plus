#ifndef NUMBER_H
#define NUMBER_H

class Number{
    private:
    friend Number operator+(const Number lhs,const Number rhs);
        int dollars;
        int cents;
    public:
        Number(int dollars_val,int cents_val);
        bool operator==(const Number rhs) const;
        bool operator != (const Number rhs) const;
        Number(int total);
        Number();
};


#endif