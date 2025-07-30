     //Summon relevant input/output libraries and object containers//
//Header: input/output lib and object container//
#include <iostream>
using namespace std;

//Data-type and variable declaration and initialization//
int fibbonacci(int n) {
    //Base Case//
        if(n<=1) {
            return n;
        }
        //Recursive Function//
    return fibbonacci(n-1)+fibbonacci(n-2);
}

int main() {
    int n;
    cout<<"Enter the fibbonacci number: "; //start page display//
    
    cin>>n; //Reading input//

    cout<<"Fibbonacci series up to" << n << "terms:" ;
    for (int i=0; i<n; i++) {
        cout<<fibbonacci(i)<<endl; //Iterates through the number of terms required//
    }

    return 0; //ends execution after base case is achieved//

}
