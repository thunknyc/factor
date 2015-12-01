#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long factor(const long long i) {
  long long max = (long long)ceil(sqrt((double)i));
  long long j = 2;

  while(j <= max) {
    if(i % j == 0)
      return j;
    else
      j++;
  }
  return i;
}

int main(const int argc, const char **argv) {

  long long f, i = strtoll(argv[1], NULL, 10);
  bool first = true;

  if (i == 0) {
    printf("0\n");
    exit(0);
  }
  
  if (i < 0) {
    printf("-1");
    first = false;
    i = -i;
  }
  
  do {
    f = factor(i);
    
    if (first) {
      printf("%lld", f);
      first = false;
    } else {
      printf(" %lld", f);
    }
    
    i = i / f;
    
  } while(i != 1);
  
  printf("\n");
      
  return 0;
}
