# Smart Electricity Bill Generator

A C program that shows the way billing works in electricity companies. Made using the basics from the first four chapters of Let Us C by Yashvant Kanetkar. No loops, no functions no arrays, no switch.

## Overview

The program calculates an electricity bill for one customer based on:

- Type of customer (Domestic / Commercial / Industrial) each with different pricing for different slabs

- A fuel surcharge that happens if the usage goes up a lot

- A late fee or a discount depending on when the payment is made

## Concepts Used

| Concept | Description |

|---|---|

| Variables and Data Types | int, float, char |

| Input and Output | printf, scanf |

| Arithmetic Operators | + - * / % |

| Relational Operators | > < >= <= == != |

| Logical Operators | && || ! |

Conditional Statements | if, if-nested if-else |

| else-if Ladder | Used for choosing slabs and categories (no switch) |

| Conditional (Ternary) Operator | ?:

| Type Conversion | When using int with float it happens automatically |


## Input
| Field | Type | Description |

|---|---|---|

| Consumer Number | int | Any number |

Category | char | D = Domestic C = Commercial I = Industrial |

Units This Month | int | How much was used this month |

| Units Month | int | How much was used month |

Payment Status | char | Y = paid on time N = paid late |

## Billing Rules

**Energy Charges (slab-wise):**
| Category | Slabs | Fixed Charge |

|---|---|---|

| Domestic | 1–100 at ₹3.50 101–300 at ₹4.50 301–500 at ₹6.00 than 500 at ₹7.50 | ₹50 |
| Commercial | 1–100 at ₹6.00 101–300 at ₹7.50 more than 300 at ₹9.00 | ₹150 |
| Industrial | 1–500 at ₹5.50 more than 500 at ₹6.50 | ₹500 |

**Electricity Duty:** 5% of the energy charges

**Fuel Surcharge Adjustment (FSA):** 2% of energy charges if the usage went up by than 20% compared to last month (not used if last month was 0)

**Late Fee / Rebate:**

- If paid late: add 2% to (energy + fixed + duty + FSA)
- If paid on time Domestic only: subtract 1% from energy charges
- If paid on time Commercial or Industrial: no charge, no discount
## Sample Run

Consumer No: 10234

Category: D
Units this month: 350
Units month: 260
Paid on time (Y/N): Y
Energy Charges : Rs. 1550.00
Fixed Charges : Rs. 50.00
Electricity Duty (5%) : Rs. 77.50
Fuel Surcharge (2%) : Rs. 31.00
Rebate (1%) : Rs. -15.50
TOTAL PAYABLE : Rs. 1693.00

## Edge Cases Handled

- Wrong category entered
- connection (last months units = 0). No division by zero, no surcharge
- Units at the exact slab limits
- Domestic customer who pays late (gets late fee not rebate)
