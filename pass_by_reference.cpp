#include <iostream>
using namespace std;

void swapnum(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}

int main() {
  int a = 10;
  int b = 20;

  swapnum(a, b);
  
  cout << "A is " << a << endl;
  cout << "B is " << b << endl;
  
  return 0;
}
