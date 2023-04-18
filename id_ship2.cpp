#include <iostream>
using namespace std;
int main()
{
  // your code goes here
  int i, t;
  cin >> t;
  for (i = 0; i < t; i++)
  {
    char x;
    cin >> x;
    if (x == 'B' || x == 'b')
    {
      printf("Battleship\n");
    }
    else if (x == 'C' || x == 'c')
    {
      printf("Cruiser\n");
    }
    else if (x == 'D' || x == 'd')
    {
      printf("Destroyer\n");
    }
    else if (x == 'F' || x == 'f')
    {
      printf("Frigate\n");
    }
  }
  return 0;
}