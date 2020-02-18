#include <iostream>
#include "src/lib/solution.h"
#include <string>
#include <vector>


 std::ostream &operator<<(std::ostream &os, const AcademicRecord &m) 
    {
        return os << "( " << m.getMath() << ", " << m.getComputer() << " )";
    }
std::string print(const AcademicRecord &m){
        int buffer1=m.getMath();
        int buffer2=m.getComputer();
        int buffer3=m.getPhysics();
        
        std::string var= std::to_string(buffer1)+std::to_string(buffer2)+std::to_string(buffer3);
        return var;
}



int main()
{
    
    AcademicRecord p1;
    AcademicRecord p3(10,15,20);
    AcademicRecord p2=p3;
    p3-=4;
    print(p3);
   
    std::cout << "p1: " << p3<< std::endl;

    return EXIT_SUCCESS;
}