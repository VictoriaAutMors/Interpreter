# Interpreter
Interpreter implementation in C++ language

## Features
* [Definition of Interpreter](#def)
* [Arithmetic operations](#math)
* [Bitwise operations](#bit)
* [Assignment](#assign)
* [conditions](#if)
* [cycles](#while)
* [Dependencies](#dependencies)
* [How to run programs](#run)

# <a name="def"></a> Definition of Interpreter:
An interpreter is a computer program that directly executes instructions written in a programming or scripting language, without requiring them previously to have been compiled into a machine language program.

An interpreter generally uses one of the following strategies for program execution:
1) Parse the source code and perform its behavior directly;
2) Translate source code into some efficient intermediate representation and immediately execute this;
3) Explicitly execute stored precompiled code made by a compiler which is part of the interpreter system. 

# <a name="math"></a> Arithmetic operations

In mathematics, a basic algebraic operation is any one of the traditional operations of arithmetic, which are addition, subtraction, multiplication, division. These operations may be performed on numbers, in which case they are often called arithmetic operations. They may also be performed, in a similar way, on variables, algebraic expressions, and, more generally on elements of algebraic structures, such as groups and fields.

Availavle operations:
|     Operation name     |   Operation symbol   |
| ---------------------- | -------------------- |
|          plus          |          `+`         |
|          minus         |          `-`         |
|     multiplication     |          `*`         |
|         division       |          `/`         |
| division with remainder|          `%`         |
|         brackets       |          `()`        |

## Examples:
Input:
``` 144 % 10 ```
Output: ```4```
Input:
``` 100 / 10 ```
Output: ```10```
Input:
``` 44 + 2```
Output: ```46```
Input:
``` 34 - 32 ```
Output: ```2```
Input: ``` ((123 + 45) / (144 % 10)) - (2 * 10) ```
Output: ```22```

## <a name="bit"></a> Bitwise operations

A bitwise operation operates on one or more bit patterns or binary numerals at the level of their individual bits. It is a fast and simple action, directly supported by the processor, and is used to manipulate values for comparisons and calculations. On simple processors, typically, bitwise operations are substantially faster than division, several times faster than multiplication, and sometimes significantly faster than addition.

Availavle operations:
|     Operation name     |   Operation symbol     |
| ---------------------- | ---------------------- |
|       bitwise and      |          `&`           |
|       bitwise or       |          `|`           |
|       bitwise xor      |          `^`           |
|       shift right      |          `>>`          |
|       shift left       |          `<<`          |

### Bitwise AND

A bitwise AND is a binary operation that takes two equal-length binary representations and performs the logical AND operation on each pair of the corresponding bits, which is equivalent to multiplying them. Thus, if both bits in the compared position are 1, the bit in the resulting binary representation is 1 (1 × 1 = 1); otherwise, the result is 0 (1 × 0 = 0 and 0 × 0 = 0). For example: 
Input: 
``` 5 & 3 ```
Output: 
``` 1 ```
Input: 
``` 3 & 2 ```
Output: 
``` 2 ```

## Bitwise OR
A bitwise OR is a binary operation that takes two bit patterns of equal length and performs the logical inclusive OR operation on each pair of corresponding bits. The result in each position is 0 if both bits are 0, while otherwise the result is 1. For example: 
Input: 
``` 5 | 3 ```
Output: 
``` 7 ```

Input: 
``` 2 | 8 ```
Output: 
``` 10 ```
## Bitwise XOR
A bitwise XOR is a binary operation that takes two bit patterns of equal length and performs the logical exclusive OR operation on each pair of corresponding bits. The result in each position is 1 if only one of the bits is 1, but will be 0 if both are 0 or both are 1. In this we perform the comparison of two bits, being 1 if the two bits are different, and 0 if they are the same. For example: 
Input: 
``` 5 ^ 3 ```
Output: 
``` 6 ```

Input: 
``` 2 ^ 10 ```
Output: 
``` 8 ```

## Shift Left and Shift Right
In an arithmetic shift, the bits that are shifted out of either end are discarded. In a left arithmetic shift, zeros are shifted in on the right; in a right arithmetic shift, the sign bit (the MSB in two's complement) is shifted in on the left, thus preserving the sign of the operand. For example: 

Input:
``` 23 << 1 ```
Output:
``` 46 ```

Input:
``` 23 << 2 ```
Output:
``` 92 ```

# <a name="assign"></a> Assignment

**An assignment** statement sets and/or re-sets the value stored in the storage location(s) denoted by a variable name; in other words, it copies a value into the variable.

**Variables** 

It can allocates memory for variables and assign them to rvalue or lvalue. 
Variables contains letters of latin alphabet.
Example:

```     
    x:= 2
    y := x
    print y
```  

The result of the program:
```    
2
```
# <a name="if"></a> conditions

You can use conditions with lexem "if". When you wrote "if" you must must write the condition.
When you had written the condition you must write "then" and after that, wrote the piece of code that executed when that condition is true. 
Also, you can write "else" when you want describe the piece of code that executed when that condition is false.

Example:

```  
    x := 1
    if x == 1 then
      x := x + 1
      print x
    else 
      x := x + 2
      print x
```

The result of the program:
```
    2
```

# <a name="while"></a> Cycles

You can use cycles with "while" lexem. It had been executing a bit of code that wrapped into begin and end of "while".
The begin of "while" marked as then.
Then end of "while" marked as endwhile.

Example:

```  
    i:=0
    while i < 6 then
      i:=i+1
    print i
```

The result of the program:
```
 6
```
# <a name="dependencies"></a> Dependencies

**Debian/Ubuntu/Mint**

``` sudo apt-get install g++```

**Fedora/CentOS**

```sudo dnf install g++```

# <a name="run"></a>How to compile and run program:
1) run in terminal: ``` make```
2) run in terminal: ```./bin/main```
