# static-hash-in-C
<pre>
Example of a static hash in C using 2 arrays. Tested on Ubuntu 16.4 , Mint 17, Android 9. 
This code is free.

The CODE sets up 1 array with the input to be hashed and another array dedicated to the hash keys.
The first array is read using a loop to compute the hash or each array index to assign.
It then stores the input string in the array using the hash/array index.

This code will print all the hash keys -> hash index numbers first so you can see what each string was hashed to.
Then it will print the search for the string "DEBUGOFF" which yields the hashed string "DOF"
To compile:
$ gcc staticHashc.c 

Output:
$ ./a.out
ZERO_IDX->652
+->44
-->46
*->43
/->48
PUSH->324
POP->242
DUP->236
DROP->313
BYE->227
HALT->301
WORDS->404
DEBUG->364
DEBUGOFF->586
PRINTPROG->718
DUMPSYM->566
SWAP->319
CR->151
CLEAR->364
DEBUGOFF -> DOF

