# Simple Calculator 🔢

## Description

A terminal-based calculator written in C.

The program displays a menu, accepts an operation and two integer operands, prints the result, and repeats until the user chooses to quit.

## Compilation

Compile with GCC using the following command:

``gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator``

## Run instructions

``./calculator``

## Supported operations

| Option | Operation      |
|--------|----------------|
| 1      | Addition       |
| 2      | Subtraction    |
| 3      | Multiplication |
| 4      | Division       |
| 0      | Quit           |

## Numeric behaviour (integer vs decimal)

- Uses integer operands and integer results.
- Division truncates fractional results toward zero.
*Example: 10 / 4 produces 2.*

## Known limitations

- Decimal operands are not supported.
- Non-numeric input are not handled.
- Large integer calculations may overflow.

## Author

Chloe Ha 
