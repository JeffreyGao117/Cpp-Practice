//
// Created by gaoje on 3/29/2021.
//

/*
 * 1. A declaration can be done any number of times but definition only once.
 * 2. the extern keyword is used to extend the visibility of variables/functions.
 * 3. Since functions are visible throughout the program by default, the use of extern is not needed in function
 * declarations or definitions. Its use is implicit.
 * 4. When extern is used with a variable, it’s only declared, not defined.
 * 5. As an exception, when an extern variable is declared with initialization, it is taken as the definition of the
 * variable as well.
 */

int var;  // declared and defined(memory allocated)
int main(void)
{
    var = 10;
    return 0;
}

extern int var;  // declared and undefined(no memory)
int main(void)
{
    // still runs as var is not assigned
    return 0;
}

extern int var;
int main(void)
{
    var = 10;  // error as no memory is allocated for var
    return 0;
}


#include "somefile.h"  // var is defined in somefile.h
extern int var;
int main(void)
{
    var = 10;  // no error
    return 0;
}

extern int var = 0;  // initializer is provided with declaration, memory allocated
int main(void)
{
    var = 10;
    return 0;
}