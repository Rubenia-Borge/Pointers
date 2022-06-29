#include <iostream>
using namespace std;

int main(){
    
    int count; // count is an integer
    int *countPtr; //count Ptr is a pointer to an integer
    
    count = 7;
    countPtr = &count; // countPtr set to address of countPtr
    
    cout << "The address of count is " << &count << endl
         << "The value of countPtr is " << countPtr << endl << endl;
         
    cout << "The value of count is " << count << endl
         << "The value of countPtr is " << *countPtr << endl << endl;
         
    cout << " Proving that * and & are compliments of "
         << "each other." 
    
}
