
/**
* File	:argc.c
* Author: Prasanna Paudyal
* Date :01/05/2018
* Last Modified	:01/05/2018
*---------------------------
* OVERVIEW
* ===========
* This program demonstrates the
* what argc & argv[] in main 
* actually does. 
*/

#include<stdio.h>
int main(int argc, char *argv[]){
 
  int i;
  printf("%d\n",argc);

  for(i = 1; i < argc; i++){
    printf("argv[%d] = %s\n",i,argv[i]);
  }
return 0;
}
