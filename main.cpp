#include <iostream>
using namespace std;
int swap(int& first, int& second, int& third); //prototype
//int first, second, third;
int red, blue, green;
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

swap (red, green, blue); //call

//DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
int swap(int& first, int& second, int& third)
{
int least, middle, greatest;
if(first >= second && first >= third || first >= third && first >= second)
{
  greatest = first;
}
else if( second >= first && second >= third || second >= third && second >= first)
{
  greatest = second;
}
else if(third >= first && third >= second || third >= second && third >= first)
{
  greatest = third;
}
if( first >= second && first <= third || first >= third && first <= second)
{
  middle = first;
}
else if( second >= first && second <= third || second >= third && second <= first)
{
  middle = second;
}
else if(third >= second && third <= first || third >= first && third <= second)
{
  middle = third;
}
if(first <= second && first <= third || first <= third && first <= second)
{
  least = first;
}
else if(second <= first && second <= third || second <= third && second <= first)
{
  least = second;
}
else if(third <= first && third <= second || third <= second && third <= first)
{
  least = third;
}


  first = greatest;
  second = middle;
  third = least;
/*
  int temp;
  temp = first;
  first = second;
  second = third;
  third = temp;
*/
}

