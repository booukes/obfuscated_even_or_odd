# Obfuscated, and dumb way to check for even or odd numbers in C

## Yes, it is as dumb as it seems.

## It is just a project i made from boredom, and i also wanted to learn bitwise operations.

## It works like that:
- The program firstly collects a user selected number from the range 0-127
- The number is stored in the n variable of type ```__int8```.
- The main function calls __mod, passing n if the input was successfully scanned, or returning 0 otherwise.
- The function is a one-liner with only the return keyword used.
- Firstly, it shifts ```n``` one bit to the right using ```n>>1```, discarding the least significant bit.
- Then, it isolates the LSB using ```n&1``` and shifts it to the MSB position using ```<<7```.
- The bitwise OR operation ```|``` combines these two results, forming a new 8-bit value.
- This result is then bitwise ANDed with ```0x80```, isolating the most significant bit.
- The bitwise NOT operator ```~``` inverts all bits of the result.
- The comparison ```==-1``` checks whether all bits are now set (i.e., the value is ```0xFF```).
- If the condition is met, 0 is returned; otherwise, 1 is returned.
- The result of __mod determines the output: "o" if 1 is returned, or "e" if 0 is returned.

## The program is passing all test cases, from 0 to 127.

I am yet to upgrade the snippet to int32.
  
