#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long sieve(int target){
  long size = target*log(target)*1.15;
  char *array= malloc(size);
  long current = 1;
  int found = 0;
  while(found!=target){
    current++;
    if (!array[current]){
      found++;
      int temp = current;
      while(temp<size){
        if(!array[temp]){
         array[temp]=1;
        }
        temp+=current;
      }
    }
  }
  return current;
}


