#include <iostream>
#include "src/lib/solution.h"
#include <vector>

int main()
{
    Solution solution ;
    std::vector<int> input {1,2,6,4,5,3};
    int sum =7;
    std::cout<<"{ ";
    std::vector<int>buffer=solution.twoSum(input,sum);
    for(auto n: buffer){
        std::cout<<n<<' ';
    }
    std::cout<<"}"<<std::endl;
    return EXIT_SUCCESS;
}