#include <iostream>
using namespace std;

int main()
{
  //Inputs the size of pattern i.e Number of Rows...
  int i = 1;
  int n;
  cout << "Enter Size :-";
  cin >> n;

  //i->row no.
  //j->column no.
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << "*" << "  ";
      j++;
    }
    i++;
    cout << endl;
  }
  return 0;
}
