
#include<iostream>
using namespace std;
void
fun (int n)
{
  cout << n << endl;
  if (n > 0)
    {
      fun (n - 1);
      cout << n << endl;
    }
}

int
main ()
{
  int n;
  cout << "Enter an integer" << endl;
  cin >> n;
  fun (n);
  return 0;
}
