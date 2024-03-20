// Guess The Output...

#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = a++;
  int c = ++a;
  cout << b;
  cout << c;

  return 0;
}

// Expected Output:- 13