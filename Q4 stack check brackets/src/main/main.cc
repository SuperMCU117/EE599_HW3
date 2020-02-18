#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string input ="(a+b)[c*d]";
    if(solution.checkValid(input)){
        std::cout<<"valid"<<std::endl;
    }
    else std::cout<<"invalid"<<std::endl;


    return EXIT_SUCCESS;
}