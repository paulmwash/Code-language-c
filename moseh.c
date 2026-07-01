#include <stdio.h>
#include <unistd.h>

void id(int argc, char *argv[]){
  if (argc ==1)
    printf("Please enter your name");
  else{
    printf("Your name is %s",argv[1]);
  }  
