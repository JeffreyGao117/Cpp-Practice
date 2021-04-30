# Details

`#include <system-header>`

`#include "user-defined-header"`

Header files should be guarded against multiple inclusions with
`#ifndef variable` and `#endif`

Functions can be overloaded with the same name but differing parameters.

`inline` asks compiler to expand calls ot the function inline. 
Avoids function-call overhead by replacing each call to function with
copy of function body, modified as necessary.