# Assembly-Calculator: A Simple Calculator using C & Assembly

**Course:** CS1021 – Computer Architecture & Organization  
**Languages Used:** High-Level Language (C), Low-Level Language (Assembly)  
**Team Members:** Araa AlMarhabi, Mawaddah Eyad, Leen Bajunaid  

## Project Overview

This project is a simple calculator developed using both **C** and **Assembly language**. It demonstrates how high-level and low-level languages can work together to perform fundamental arithmetic operations.

The calculator supports:
- **Addition**
- **Subtraction**
- **Multiplication**
- **Division**

Intended for anyone who wants to perform basic mathematical operations while exploring the collaboration between C and Assembly.

## Repository Structure

```bash
repository/
├── codec2.c        # C code with arithmetic logic
├── c1.asm          # Assembly code handling output
└── README.txt      # Project documentation

```

## High-Level Language (C)
### ➤ Functions
There are 4 main arithmetic functions implemented in C:
```bash
int addition(int num1, int num2, int res);
int subtraction(int num1, int num2, int res);
int multiplication(int num1, int num2, int res);
int division(int num1, int num2, int res);
```
#### ➤ Description (Non-Technical)
- Addition: Adds two numbers.
- Subtraction: Subtracts the second number from the first.
- Multiplication: Multiplies two numbers.
- Division: Divides the first number by the second.
The result of each operation is passed to the assembly file for displaying the output.

## Assembly Language
### ➤ Functions
The assembly file c1.asm contains four key routines:
- Add
- Sub
- Mul
- Div

Each function performs the following steps:

1. Receives the result from the corresponding C function via the rdi register.
2. Moves the result into the rdx register.
3. Pushes the value onto the stack.
4. Prints the message: "The result is:".
5. Pops the value from the stack and displays the result.
This separation helps demonstrate interlanguage communication and stack handling.

## System Information
- **Operating Systems Used**: Windows, Kali Linux
- **Tools & Versions**:
   - Assembler: NASM
   - Compiler: GCC
- **Notes**: Kali Linux didn't run on Mac devices, so testing and execution were done using a Windows system.

## Key Takeaways
- Learned to bridge C and Assembly through function calls.
- Understood how to pass and retrieve data using registers and the stack.
- Faced and overcame OS compatibility challenges during development.

## Contributors
1. Araa AlMarhabi 
2. Mawaddah Eyad
3. Leen Bajunaid
