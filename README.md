# Push Swap
![](images/logo_push_swap.png)

# Description
The Push Swap project is part of the 42 curriculum and its goal is to design a C program that sorts a list of integers using only a limited set of operations on two stacks: A and B. The challenge lies in the fact that you cannot directly use classic sorting algorithms such as qsort or sort; instead, you must implement basic stack‑manipulation operations (swap, push, rotate, reverse rotate...) and combine them strategically to achieve the correct order with the smallest possible number of moves.

# Project files
`src/Makefile`: Build automation file.

`src/conv.c`: Conversion functions.

`src/input_val.c`: Validates the input to ensure it contains valid numbers.

`src/memory.c`: Functions used to free allocated memory.

`src/order_helpers.c`: Helper functions for sorting.

`src/push_swap.c`: The entry point of the program.

`src/push_swap.h`: The header containing the definitions, declarations, and libraries.

`src/rotations.c`: Functions for rotating stacks during sorting **(ra, rb, rr...)**.

`src/rotations_aux.c`: File containing the implementation of the rrr() function, moved here because rotations.c ran out of space.

`src/sort_big.c`: Functions I use for sorting when there are many arguments.

`src/sort_small.c`: Functions I use for sorting when there are few arguments.

`src/stack.c`: Functions for sort stacks directly **(sa, sb, pa, pb...)**.

***This project has been created as part of the 42 curriculum by Néo Foderé de Frutos (nfodere-), a student at 42 Barcelona***
