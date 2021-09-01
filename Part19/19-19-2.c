#include <stdio.h>

extern int num1, num2;
extern void add(int num1, int num2);

int main(void)
{
    add(num1, num2);

    return 0;
}

/*
Undefined symbols for architecture x86_64:
  "_add", referenced from:
      _main in 19-19-2-56ef86.o
  "_num1", referenced from:
      _main in 19-19-2-56ef86.o
  "_num2", referenced from:
      _main in 19-19-2-56ef86.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/