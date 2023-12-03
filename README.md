# FormatString

## Usage/Examples

clone this repository and import "format.h"
that's now you just have to call format() function.

```cpp
#include "format.h"
#include "iostream"

using namespace std;
int main() {
  string formatted_String =
      format("Hello i am {0}, this is an Example of How you can use {1} ",
             "ShaniTheCoder", "Format.h format function");
  cout << formatted_String;
  return 0;
}
```

Output:

```bash
>>> Hello i am  ShaniTheCoder, this is an Example of How you can use  Format.h formate function
```
