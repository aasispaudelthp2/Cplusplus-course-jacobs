#include <iostream>

void swapping(int &a, int &b);
void swapping(double &a, double &b);
void swapping(const char* &a, const char* &b);

using namespace std;
int main() {
  int a = 5, b = 10;
  double x = 5.2, y = 10.7;
  const char* str1 = "One";
  const char* str2 = "Two";

  cout << "a=" << a << ", b=" << b << endl;
  cout << "x=" << x << ", y=" << y << endl;
  cout << "str1=" << str1 << ", str2=" << str2 << endl;

  swapping(a, b);
  swapping(x, y);
  swapping(str1, str2);

  cout << "a=" << a << ", b=" << b << endl;
  cout << "x=" << x << ", y=" << y << endl;
  cout << "str1=" << str1 << ", str2=" << str2 << endl;
 
  return 0;
}

void swapping(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void swapping(double &a, double &b) {
  double temp = a;
  a = b;
  b = temp;
}

void swapping(const char* &a, const char* &b) {
  const char* temp = a;
  a = b;
  b = temp;
}
