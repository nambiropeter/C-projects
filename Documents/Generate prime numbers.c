#include <stdio.h>
#include <string.h>
#include <math.h>

#define CHECK_LIMIT 1000
int main(int argc, char* argv[]) {
  char composite[CHECK_LIMIT];
  size_t last_check = (size_t)sqrt(CHECK_LIMIT);
  char* sep = "";

  memset(composite, 0, sizeof(composite));

  //find the first number not marked as composite. We can stop at
  //sqrt(CHECK_LIMIT) because all the composites will have been
  //marked off by the time we reach that.
  for(size_t i = 2; i < last_check; ++i) {
    if(composite[i]) {
      //whelp i is composite so skip it
      continue;
    }

    //ok so i isn't composite and is therefore prime, starting at
    //2*i mark all the multiples of i as composite since they can
    //be divided by i.
    for(size_t j = i*2; j < CHECK_LIMIT; j += i) {
      composite[j] = 1;
    }
  }

  for(size_t i = 2; i < CHECK_LIMIT; ++i) {
     if(!composite[i]) {
       printf("%s%d", sep, i);
       sep = ", ";
     }
  }

  return 0;
}
