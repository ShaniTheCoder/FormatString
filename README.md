# FormatString

## Use

consider:

```**cpp**
string name = "Harry"
int age  = 21
profession = "developer"
std::cout<<name<<" is "<<age<<" Years old"<<profession;
```

above you can see how much if `<<` is used it decreases the efficiency
it can be simplified with format

```cpp
format("{0} us {1} years old {2}",name,age,profession);
```

## Usage/Examples

clone this repository and import "format.h"
that's now you just have to call format() function.

```cpp
#include "format.h"
#include "iostream"

using namespace std;
int main() {
  format("Hello i am {0}, this is an Example of How you can use {1} ",
             "ShaniTheCoder", "Format.h format function");
  return 0;
}
```

Output:

```bash
>>> Hello i am  ShaniTheCoder, this is an Example of How you can use  Format.h formate function
```
