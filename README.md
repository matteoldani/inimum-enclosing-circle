# minimum-enclosing-circle
Minimum Enclosing Circle solver written in c

The program has implemented two functios:

1) BruteForceMethod which is a bruteforce aproach to the problem. The function complexity is around O(n^4)
2) RandomIncrementalMethod wich is a incremental aproach to the problem. The function has a complexity of O(n)

Usage:

./executable "fileWithPoints.txt"

the file passed as arguments with points needs to have this structure:
-first line must be the number of points
-second to last lines must be composed by 2 numbers representing (x,y) of the point 
