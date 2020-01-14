#include<stdio.h>
#include<string.h>

#define BUCKETS 2069
char *vals[BUCKETS];

int hashstring(char *s){
int i, n, z; i = n = z = 0;
 while(*s != '\0'){ n = (int)*s++ + i; z = z + n; }  
 return z % BUCKETS;
}

char *words[] = { "ZERO_IDX", "+", "-", "*", "/", "PUSH",
                  "POP", "DUP","DROP","BYE","HALT","WORDS",
                  "DEBUG","DEBUGOFF","PRINTPROG","DUMPSYM",
                  "SWAP","CR","CLEAR", 0 };
 
 char *syms[] = {  "ZRO", "ADD", "SUB", "MUL", "DIV", "PSH", "POP", "DUP", "DRP", "BYE", "HLT",
                   "WRD", "DON", "DOF", "PPG", "DSM", "SWP", "CRT", "CLR", 0};

int main(){
   char **p = words;
  int i = 0;
  while(*p != 0){
    printf("%s->%d\n", *p, hashstring(*p) );
    vals[hashstring(*p++)] = syms[i]; i++; }

  printf("DEBUGOFF -> %s\n", vals[hashstring("DEBUGOFF")]);

  return 0;  

}


