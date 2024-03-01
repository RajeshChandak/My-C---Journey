#include <iostream>
using namespace std;

int main()
{
  // Inputs the Size of Shape i.e. no. of Rows...
  int n;
  cout << "Input Size:- ";
  cin >> n;

  // i->Column no.
  // j->Row no.

  for (int i = 1; i <= n; i++)
  {
    for (int space = 1; space <= n - i; space++)
      cout << " ";
    for (int j = 1; j <= i; j++)
      cout<<j;
    for(int start=i-1;start>0;start--)
      cout<<start;
    cout<<endl;
  }
  return 0;
}