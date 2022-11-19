// Brandon Newton J00610524 11/15/22
// Due Wednesday Nov 16, 2022
// P 284
//Random Numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  int i, rnum, amount;
  cin >> amount;
  srand(time(0));
  for(i=0; i<amount; i++)
    {
      rnum = rand() % (100+1 -0) + 0; 
      cout << rnum << " ";
      
    }
  return 0; 
}

