#include <stdio.h>
#include <time.h>

int epoch() {
   return (int)time(NULL);
}

int main() {
   
   printf("%d\n", epoch());
   
   printf("%s\n", __FILE__);
   
   printf("%d\n", __LINE__);

   return 0;
}
