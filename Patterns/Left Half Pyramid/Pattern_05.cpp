#include <iostream>
using namespace std;

int main()
{
  //Inputs the size of pattern i.e Number of Rows.
  int n;
  cout << "Enter Size :-";
  cin >> n;

  //k_>Count Variable
  int k=1;

  //i->row no.
  //j->column no.
  for(int i=1;i<=n;i++)
  {
    for(int space=n-i;space;space--)
    {
      cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
      cout<<k;
      k++;
    }
    cout<<endl;
  
  }
  return 0;
}