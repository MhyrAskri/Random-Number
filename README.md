## Familiarity with cstdlib and ctime libraries
Use the **cstdlib** library to access the **rand()** & **srand()** commands to generate random numbers.

Use the **ctime** library to access the **time()** command and always create different random, patternless numbers using the command:
- **srand code (time (nullptr));**

Finally, generate a random number and specify the maximum and minimum range of random number generation using the command:
- **rand ()% max + min;** (Instead of max, we set the maximum range and instead of min, we set the minimum range.)
