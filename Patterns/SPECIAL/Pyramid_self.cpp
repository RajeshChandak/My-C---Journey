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
    for (int j = 1; j <= (i * 2) - 1; j++)
    {
      if (j <= i)
        cout << j;
      else
        cout<<2*i-j;
    }
    cout << endl;
  }
}