#include "solution.h"

std::vector<int> Solution::twoSum(std::vector<int> &inputs, int sum){
  std::vector<int> solution;
  int max=inputs.size();
  if(max==0) return inputs;
  else {
    int counter = 0;
    int flag=0;
    for(int i=0;i<max;i++){
      if(flag==1) break;
      counter=i+1;
      while(counter<max){
        if(inputs.at(counter)+inputs.at(i)==sum){
          solution.push_back(i);
          solution.push_back(counter);
          flag=1;
          break;
        }
        else{
          counter++;
        }
        
      }
    }

  }
return solution;
}
