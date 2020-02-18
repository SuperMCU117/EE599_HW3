#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{   
    bool flag=1;
    int position=0;
    int choice=0;
    int i= 0;
    while(flag){
        
        vector<int>input{1,4,5,23,100,12,18,175};
        vector<int>::iterator itr;
        int last= input.size();
        cout<<"**********************************************************"<<endl
        <<"vector: ";
        
        for(itr=input.begin();itr!=input.end();++itr){
            cout<<*itr<<" ";
            /*for(auto n: input)
            cout<<n<<" ";*/
        }
        cout<<endl<<"**********************************************************"<<endl;
        cout<<"Please choose any of the following options: "<<endl<<
        "1. What is the first element?"<<endl<<"2. What is the last elemt?"<<endl
        <<"3. What is the current element?"<<endl<<"4. What is the ith element from the current location?"
        <<endl<<"5. Exit."<<endl;
        cin>> choice;
        switch (choice)
        {
        case 1: 
            cout<<"Output: "<<input.at(0)<<endl;
            position=0;
            break;
        case 2:
            cout<<"Output: "<<input.at(last-1)<<endl;
            position=last-1;
            break;
        case 3:
            cout<<"Output: "<<input.at(position)<<endl;
            break;

        case 4:
            cout<<"Value of current position is: "<<input.at(position)<<endl;
            cout<<"Enter the value of i::"<<endl;
            cin>> i;
            if(i<0){
                cout<<"Value of i cannot be negative!"<<endl;
            }
            else if (i>last-1-position){
                cout<<"Sorry, value is out of bounds"<<endl;
            }
            else{
                cout<<"Output: "<<input.at(i+position)<<endl;
                position=i+position;
            }
            break;
        case 5:
            flag=0;
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Your input is not recognizable!"<<endl;
            break;
        }
    }

    return EXIT_SUCCESS;
}