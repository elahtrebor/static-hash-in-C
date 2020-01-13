# static-hash-in-C
Example of a static hash in C using 2 arrays

This file will print all the hash key -> hash index numbers first so you can see what each string was hashed to.

Then it will print the search for the string "DEBUGOFF" which yields the string "DOF" 

$ gcc staticHashc.c 

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

