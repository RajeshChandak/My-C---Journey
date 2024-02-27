#include<iostream>
using namespace std;

int main()
  {
  //Inputs the size of pattern i.e Number of Rows...
  int n;
  cout<<"Enter Size:- ";
  cin>>n;

  //k->Count Variable.
  int k=1;

  //i->row no.
  //j->column no.
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      cout<<k<<"  ";
      k++;
    }
    cout<<endl;
}

  return 0;
}