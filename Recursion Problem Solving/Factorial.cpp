     //Summon relevant input/output libraries and object containers//
#include <iostream>
using namespace std;

#include <limits>



 int factorial(int x) {
    //Error Handling for Non-positive Integers//  
        if (x < 0)
    cerr<<"Error:factorial cannot be implemented"<<'\n'<<endl;
    cin.clear();
    cout <<"Enter a non-negative integers"<<endl;
    return -1;
//Setting the base case of the recursive function//
     if (x==0 || x==1) 
        return 1;
         //The Recursive Function//
    else 
        return (x*factorial(x-1));
        
}

int main () {
//Start-up display//
    int x, r;
        cout <<"Enter a non-negative integers"<<endl;
//Check for Positiive integers//
   if (cin>>x)
    
    r=factorial(x);
    cout <<x<<"!="<<r<<endl;
        return 0;
}
