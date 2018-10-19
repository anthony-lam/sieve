#include <math.h>
#include <stdio.h>

int sieve(int target){
  int size = target*log(target)*1.15;
  char array[size];
  int current = 2;
  int found = 0;
  while(found<target){
    if (!array[current]){
      found++;
      printf("%d\n", array[current]);
      int temp = current*2;
      while(temp<size){
	if(!array[temp]){
	  array[temp]=1;
	}
	temp+=current;
      }
    }
    current++;
  }
  return current;
}

int main(){
  return 0;
}
