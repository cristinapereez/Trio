#include <iostream>
using namespace std;
int swap (int &r, int &b, int &g); //prototype

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

red = blue;
blue = green;
green = red;

swap (red, blue, green);

//DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

int swap(int &r, int &b, int &g) //definition
{
int temp = r;
r = b;
b = g;
g = temp;
}

