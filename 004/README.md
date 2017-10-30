Extend yesterday's program using functions and adding some logic to it.

First, you need to display not only the largest number that divides a composite number evenly, but also display the largest *prime* number that divides the composite number evenly. 

Second, you will display the prime factors for a composite value.
Every number can be written as the product of a series of prime numbers. 
Your task is to display the set of prime numbers that can be multiplied together to equal the composite value entered by the user. 

Third, there are many sets of values that will multiply to equal a composite number. 
You will display one the set that contains the largest integer less than the composite number.

Each of these tasks must be contained within separate functions.
You should have at least three functions extra functions besides the `main()` function.
Feel free to add more. 

Note that to quit the program use **q** instead of **-1**. Sample executions:

```
Please enter a positive integer: 10
COMPOSITE
Largest number that divides 10 evenly is 5
Largest prime number that divides 10 evenly is 5
Prime factors = 2 * 5
Largest integer factor set = 2 * 5


Please enter a positive integer: 7
PRIME


Please enter a positive integer: a
a is not a positive integer


Please enter a positive integer: 93
Largest number that divides 93 evenly is 31
Largest prime number that divides 93 evenly is 31
Prime factors = 3 * 31
Largest integer factor set = 3 * 31


Please enter a positive integer: 99
Largest number that divides 99 evenly is 33
Largest prime number that divides 93 evenly is 11
Prime factors = 3 * 3 * 11
Largest integer factor set = 3 * 33


Please enter a positive integer: 101
PRIME


Please enter a positive integer: 90
Largest number that divides 90 evenly is 45
Largest prime number that divides 90 evenly is 5
Prime factors = 2* 3 * 3 * 5
Largest integer factor set = 2 * 45


Please enter a positive integer: q
Thank you for using my program.
```

**Run program**
```
cd 004/
gcc -Wall -o ../bin/day4 day4.c
./../bin/day4
```

