# Discrete_math_GT_HW_1
C++ code to solve some homework paragraphs

std::map states - list of European states in alphabetic order with Albania at the end.
Array e[41][41] - adjacency matrix with distances between capitals

To run the paragraph №1.(b), enter the command -b: 
The program using DFS in the graph looks for distances to all vertices and writes the maximum to the array "exc".

To run the paragraph №1.(f), enter the command -f: 
The program goes through all combinations of countries (converting numbers from 0 to 2^41 into binary form) and checks their adjacency using the adjacency table. 
Optimization: 
- we can immediately conclude that we do not need combinations where there are countries: 
GB, IE, FI, SE (states in Scandinavia qlique is similar and we choose variant only with Norway), IS, RU, DE, FR, HU 
these vertices are not in G or have too high a degree.
- And we don't need combinations without these states: VA, NO, DK, PT 
we definitely need leaves.
