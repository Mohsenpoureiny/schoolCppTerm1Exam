#include <iostream>
#include <vector>

using namespace std;

int main()
{
 long int n, t, max;

 cout << "Enter a number :";

 cin >> n;
 vector<int> numbers = {};
 while (n != 0)
 {
  t = n % 10;
  numbers.push_back(t);
  n = n / 10;
 }

 for (int e : numbers)
 {
  if (max < e)
  {
   max = e;
  }
 }
 cout << max << endl;

 return 0;
}

// Mohsen Poureiny