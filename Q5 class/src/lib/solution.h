#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
class AcademicRecord{
public:
    
    AcademicRecord(){
        Math_=0;
        Computer_=0;
        Physics_=0;
    }
    AcademicRecord(int Math, int Computer, int Physics){
        Math_=Math;
        Computer_=Computer;
        Physics_=Physics;

    }
    AcademicRecord(const AcademicRecord &p2)
    {Math_=p2.getMath();Computer_=p2.getComputer();Physics_=p2.getPhysics();}

    //rivate:
    AcademicRecord& operator++(){
        Math_=Math_+10;
        Computer_=Computer_+10;
        Physics_=Physics_+10;
        if(Math_>100) Math_=100;
        if(Computer_>100) Computer_=100;
        if(Physics_>100) Physics_=100;
        return *this;
        
    }
    AcademicRecord operator++(int){
        AcademicRecord result(*this);
        ++(*this);
        if(Math_>100) Math_=100;
        if(Computer_>100) Computer_=100;
        if(Physics_>100) Physics_=100;
        return result;

    }
    AcademicRecord& operator--(){
        Math_=Math_-20;
        Computer_=Computer_-20;
        Physics_=Physics_-20;
        if(Math_<0) Math_=0;
        if(Computer_<0) Computer_=0;
        if(Physics_<0) Physics_=0;
        return(*this);
    }
    AcademicRecord operator--(int){
        AcademicRecord result(*this);
        --(*this);
        if(Math_<0) Math_=0;
        if(Computer_<0) Computer_=0;
        if(Physics_<0) Physics_=0;
        return result;
    }
    AcademicRecord& operator+=(int n){
        Math_=Math_+n;
        Computer_=Computer_+n;
        Physics_=Physics_+n;
        if(Math_>100) Math_=100;
        if(Computer_>100) Computer_=100;
        if(Physics_>100) Physics_=100;
        return (*this);
    }
    AcademicRecord& operator-=(int n){
        Math_=Math_-n;
        Computer_=Computer_-n;
        Physics_=Physics_-n;
        if(Math_<0) Math_=0;
        if(Computer_<0) Computer_=0;
        if(Physics_<0) Physics_=0;
        return(*this);

    }

    
    
    int getMath()const{return Math_;};
    int getComputer()const{return Computer_;};
    int getPhysics()const{return Physics_;};

private:
    int Math_ ;
    int Computer_;
    int Physics_;
    

};

#endif