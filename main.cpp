#include "format.h"
#include "iostream"

using namespace std;
int main() {
  string formatted_String =
      format("Hello i am {0}, this is an Example of How you can use {1} ",
             "ShaniTheCoder", "Format.h formate function");
  cout << formatted_String;
  return 0;
}