Allow a user to find the area of different shapes.
The first step is to prompt the user to enter a character to specify the shape. 
Only for the following shapes:
```
t - triangle
s - square
r - rectangle
c - circle
```

Based on the shape entered, only prompt for the information needed to find the area for that shape. 
For example, a triangle requires a base and a height, a square requires a side, a rectangle requires a width and height, and a circle requires a radius. 
Do not prompt the use to enter extraneous information.

After reading the data from the user, find the area of the desired shape and output it to the screen. 
Here are a few sample executions of the pogram.

```
Enter a shape (t, s, r, c): t
Enter the base of the triangle: 10
Enter the height of the triangle: 3
The area of the triangle is 15.

                            
Enter a shape (t, s, r, c): s
Enter the side of the square: 5
The area of the square is 25.


Enter a shape (t, s, r, c): r
Enter the height of the rectangle: 20
Enter the width of the rectangle: 3
The area of the rectangle is 60.


Enter a shape (t, s, r, c): c
Enter the radius of the circle: 4
The area of the circle is 50.27.
```

**Run program**
```
cd 002/
gcc -Wall -o ../bin/day2 day2.c
./../bin/day2
```
