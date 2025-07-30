     //Summon relevant input/output libraries and object containers//
#include <iostream>
#include <vector>
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
//FIBBONACCI SERIES IMPLEMENTATION//
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

//  3.  RECURSIVE STRING REVERSAL

void reverseString(string& s, int left, int right) {
    if (left >= right) return;          // base case
    swap(s[left], s[right]);            // one step
    reverseString(s, left + 1, right - 1); // recurse
}
void reversal() {
    cout << "\n--- String Reversal ---\nEnter string to reverse: ";
    cin.ignore();               // flush newline left by previous cin
    string str;
    getline(cin, str);
    reverseString(str, 0, static_cast<int>(str.size()) - 1);
    cout << "Reversed string: \"" << str << "\"\n";
}

//  4.  RECURSIVE BINARY SEARCH

int binarySearch(const vector<int>& a, int low, int high, int target) {
    if (low > high) return -1;          // base case – not found
    int mid = low + (high - low) / 2;
    if (a[mid] == target) return mid;   // base case – found
    if (target < a[mid])
        return binarySearch(a, low, mid - 1, target);
    else
        return binarySearch(a, mid + 1, high, target);
}
void search() {
    cout << "\n--- Binary Search ---\n";

    //sorted array
    const vector<int> arr = {8, 12, 17, 29, 30, 43, 49, 57, 63, 74};
    
    cout << "Sorted array: ";
    for (int i : arr) cout << i << ' ';
    cout << "\n";

    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    int pos = binarySearch(arr, 0, static_cast<int>
        (arr.size()) - 1, target);
    if (pos != -1)
        cout << "Target found at index " << pos << " (0-based).\n";
    else
        cout << "Target NOT found in array.\n";
}
