# FormatString

## Use

consider:

```**cpp**
string name = "Harry"
int age  = 21
profession = "developer"
std::cout<<name<<" is "<<age<<" Years old"<<profession;
```

Below is corresponding code for `cout` using `format()`

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
  format("Hello i am {0} I am {1} years old, this is an Example of How you can use {2} ",
             "ShaniTheCoder",18, "Format.h format function");
  return 0;
}
```

Output:

```bash
>>> Hello i am  ShaniTheCoder I am 18 years old, this is an Example of How you can use  Format.h format function
```
