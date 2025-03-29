#include <stdio.h>
#include <time.h>

int epoch() {
   return (int)time(NULL);
}

int main() {
   
   printf("%d\n", epoch());

   return 0;
}
