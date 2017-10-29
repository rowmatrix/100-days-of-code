Read in values from the user until `-1` has been entered. 
Each parameter should be a positive integer, but if the value entered is not a positive integer, you should tell the user that your program only accepts positive integers, then prompt the user to enter a number.
(See example below)

If the user enters a positive integer, you will determine whether the number is prime or composite.
A number is defined to be prime if the only divisors of that number are `1` and itself.
If a number is not prime, then it is composite. 
In other words:

```
Assuming n,d ∈ Z
Prime(n) = false iff n/d ∈ Z where d != 1 and d != n
Prime(n) = true otherwise
```

Your program should test the primality of each number in the command line. 
The output should be the number followed by the word `PRIME` or `COMPOSITE` depending on whether the number is prime or composite. 
Also, if the number happens to be composite, print out the largest integer, other than 1 or n, that divides the number evenly.

Here is a possible execution of the program.

```
Please enter a positive integer: 10
10 COMPOSITE 5

Please enter a positive integer: 7
7 PRIME

Please enter a positive integer: 93
93 COMPOSITE 31

Please enter a positive integer: -8
-8 is not a positive integer

Please enter a positive integer: 101
101 PRIME

Please enter a positive integer: -1
Thank you for using my program. 
```

**Run program**

```
cd 003/
gcc -Wall -o ../bin/day3 day3.c
./../bin/day3
```
