#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void swap(int&,int&);

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;
  
  // compares all three numbers and sorts them
  if( numA < numC )
  {
    swap(numA,numC);
  }
  if( numA < numB )
  {
    swap(numA,numB);
  }
  if( numB < numC )
  {
    swap(numB,numC);
  }
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

/*
 * Takes in two ints and swaps them. It uses passby reference, so it doesn't
 * have a return value.
 */
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}