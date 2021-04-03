/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
template < class T > class A
{
private:
  T a;
  T b;
public:
  A (T a, T b);
  T add ();
  T sub ();
  T mul ();
  T divv ();
};

template < class T > A < T >::A (T a, T b)
{
  this->a = a;
  this->b = b;
}

template < class T > T A < T >::add ()
{
  T c;
  c = a + b;
  return c;
}

template < class T > T A < T >::sub ()
{
  T c;
  c = a - b;
  return c;
}

template < class T > T A < T >::mul ()
{
  T c;
  c = a * b;
  return c;
}

template < class T > T A < T >::divv ()
{
  T c;
  c = a / b;
  return c;
}

int
main ()
{
  A < float >obj (2.5, 1.5);
  cout << obj.add () << endl << obj.sub () << endl << obj.
    mul () << endl << obj.divv () << endl;

  return 0;
}
