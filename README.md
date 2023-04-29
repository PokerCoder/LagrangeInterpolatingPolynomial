# Lagrange Interpolation

This is a C program that implements Lagrange interpolation to approximate the value of a function at a given point based on a set of known points.

## Description

Lagrange interpolation is a method of estimating the value of a function at a given point, given a set of known points. This program takes in a set of (x, y) coordinates and the x-coordinate of the point you want to estimate. It then calculates the y-coordinate of the desired point using the Lagrange interpolation formula.

## Usage

1. Compile the program using a C compiler (e.g., GCC):
```
gcc -o lagrange lagrange.c
```

2. Run the compiled program:
```
./lagrange
```

3. Follow the prompts to enter the number of known data points, the x-coordinate of the desired point, and the x and y coordinates of the known data points.

4. The program will output the estimated y-coordinate of the desired point using Lagrange interpolation.

## Example

Input:
```
number of data: 3
want to find this x's value: 2.5

1. x: 1
1. y: 2

2. x: 2
2. y: 5

3. x: 3
3. y: 10
```

Output:
```
Result is -> 6.5
```

## Functions

- `lagrange`: Main function for calculating the Lagrange interpolation result.
- `kroneckerDelta`: Auxiliary function used in the `lagrange` function to calculate the product of the Kronecker delta terms.
