#include "solution.h"
#include<stack>

bool Solution::checkValid(std::string input){
  std::stack <char> checker;
  char buffer;
  for(auto n:input){
    if(n=='('||n=='{'||n=='['){
      checker.push(n);
      continue;
    }
    //if(checker.empty()) return false;
      switch(n) {
            case ')':   
               buffer = checker.top();
               checker.pop();
               if (buffer=='{' || buffer=='[')
                  return false;
                  break;
               
            case '}': 
               buffer = checker.top();
               checker.pop();
               if (buffer=='(' || buffer=='[')
                  return false;
                  break;
               
            case ']': 
               buffer = checker.top();
               checker.pop();
               if (buffer =='(' || buffer == '{')
                  return false;
                  break;
               
  }
  }
  return (checker.empty());


}

