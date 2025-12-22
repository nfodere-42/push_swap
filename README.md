# Push Swap
![](images/logo_push_swap.png)

# Description
The push_swap project is part of the 42 curriculum and its goal is to design a C program that sorts a list of integers using only a limited set of operations on two stacks: A and B. The challenge lies in the fact that you cannot directly use classic sorting algorithms such as qsort or sort; instead, you must implement basic stack‑manipulation operations (swap, push, rotate, reverse rotate...) and combine them strategically to achieve the correct order with the smallest possible number of moves.

# Instructions to compile and use (Linux)
To compile the push_swap project, simply navigate to the project folder, open a terminal, and run the make command. Thanks to the Makefile, the entire process is automated. After that, a file named **push_swap** will be created, which becomes an executable once you run `chmod +x push_swap`.

To run push_swap, after completing the steps above, just type `./push_swap {unsorted numbers}` for example: `./push_swap 54 763 21 32 43 12 5` in the terminal while inside the same folder as the executable. The program will output the operations it performs. You can pipe the output into `| wc -l` to see how many operations were required for the numbers you provided.

***This project has been created as part of the 42 curriculum by Néo Foderé de Frutos (nfodere-), a student at 42 Barcelona***
