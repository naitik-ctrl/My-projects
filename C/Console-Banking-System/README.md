# Console Banking System

A menu-driven C program simulating a single bank account session — balance checks, deposits, withdrawals, interest projection, and an independent loan EMI calculator. Built using concepts from Chapters 1–9 of *Let Us C* (Yashvant Kanetkar, 18th Edition): no arrays, no structures, no strings, no recursion.

## Overview

On startup, the user selects an account category and enters an opening balance. A repeating menu then offers six operations until the user chooses to exit.

## Concepts Used

| Concept | Description |
|---|---|
| Variables & Data Types | `int`, `float` |
| Input/Output | `printf`, `scanf` |
| Arithmetic Operators | `+`, `-`, `*`, `/` |
| Relational & Logical Operators | `>`, `<`, `<=`, `&&`, `\|\|` |
| Decision Control | `if`, `if-else`, ternary operator |
| Loops | `do-while` (menu repeat), `for` (interest projection) |
| `switch-case` | Menu dispatch, category-based rate lookup |
| Functions | Parameters, return values, scope |
| Pointers | `&`, `*`, call by reference — balance persistence, multi-value returns from EMI calculation |
| `math.h` | `pow()` for compound interest and EMI formula |

## How to Compile and Run

```bash
gcc banking_system.c -o banking_system -lm
./banking_system
```

## Account Setup

| Category | Code | Annual Interest | Minimum Balance |
|---|---|---|---|
| Savings | 1 | 4% | $1,000 |
| Current | 2 | 0% | $5,000 |
| Salary | 3 | 2% | $0 |

## Menu
1. Check Balance
2. Deposit
3. Withdraw
4. Apply Interest (projects growth over N months)
5. Loan EMI Calculator
6.  Exit
