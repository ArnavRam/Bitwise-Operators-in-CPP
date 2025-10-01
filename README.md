# Experiment 4 - Operations with Operators (Bitwise) in C++

---

## Aim
- To understand and implement bitwise operations (`AND`, `OR`, `XOR`, `NOT`, `Shift`).
- To write a program that demonstrates how to set and reset a specific bit in an integer.

---

## Tools Used
- Visual Studio Code
- MinGW-w64 with g++ Compiler

---

## Theory
Bitwise operators operate directly on the binary (bit-level) representation of integers. They are essential for tasks like flag manipulation, low-level hardware control, and performance optimization.

- **Bitwise AND (`&`)**
    - Sets each bit to 1 only if both corresponding bits in the operands are 1.
    - *Example:* `5 & 3` → `0101 & 0011` = `0001` (Result: 1)

- **Bitwise OR (`|`)**
    - Sets each bit to 1 if at least one of the corresponding bits is 1.
    - *Example:* `5 | 3` → `0101 | 0011` = `0111` (Result: 7)

- **Bitwise XOR (`^`)**
    - Sets each bit to 1 only if the corresponding bits are different.
    - *Example:* `5 ^ 3` → `0101 ^ 0011` = `0110` (Result: 6)

- **Bitwise NOT (`~`)**
    - Inverts all the bits of its operand.
    - *Example:* `~5` → `~00000101` = `11111010` (Result: -6 in two's complement)

- **Left Shift (`<<`)**
    - Shifts bits to the left by a specified number of positions, effectively multiplying the number by powers of 2.
    - *Example:* `5 << 1` → `0101` becomes `1010` (Result: 10)

- **Right Shift (`>>`)**
    - Shifts bits to the right, effectively dividing the number by powers of 2.
    - *Example:* `5 >> 1` → `0101` becomes `0010` (Result: 2)

---

## Algorithm / Logic

### Program 1: Demonstrating Bitwise Operators
1.  **Start**
2.  Declare two integer variables, `a` and `b`.
3.  Prompt the user to enter values for `a` and `b`.
4.  Perform `a & b` and display the result.
5.  Perform `a | b` and display the result.
6.  Perform `a ^ b` and display the result.
7.  Perform `~a` and display the result.
8.  Perform `a << 1` and display the result.
9.  Perform `a >> 1` and display the result.
10. **End**

### Program 2: Set and Reset a Specific Bit
1.  **Start**
2.  Declare an integer `num` and a bit position `k`.
3.  Prompt the user to enter the number and the bit position to modify.
4.  **To Set the Bit:** Create a mask by left-shifting `1` by `k` positions (`1 << k`). Perform a bitwise OR between `num` and the mask. Display the new number.
5.  **To Reset (Clear) the Bit:** Create a mask by left-shifting `1` by `k` positions and then inverting it (`~(1 << k)`). Perform a bitwise AND between `num` and the mask. Display the new number.
6.  **End**

---

## Conclusion
Bitwise operators provide a layer of programming precision beyond standard arithmetic. This experiment demonstrated how to use these operators to perform low-level data manipulation. Whether shifting bits to perform fast multiplication/division or using masks to toggle individual flags, mastering these operations is essential for writing efficient and optimized code, especially in performance-critical applications.
