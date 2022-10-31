#ifndef NUMBER_H
#define NUMBER_H

class Number{
    friend Number operator+(const Number &lhs,const Number &rhs);
    private:
        int dollars;
        int cents;
    public:
        Number(int dollars_val,int cents_val);
        bool operator==(const Number &rhs) const;
        bool operator != (const Number &rhs) const;
        // Number operator+(const Number &rhs) const;
        //***We can't have same operator in two versions(member or non-member)
        Number(int total);
        Number();
};


#endif