#include <stdio.h>
#include <time.h>
#include <string.h>

char * timestamp(){
   time_t now = time(NULL); 
   char * time = asctime(gmtime(&now));
   time[strlen(time)-1] = '\0';    // Remove \n
   return time;
}

int epoch() {
   return (int)time(NULL);
}

int main() {
   
   printf("%d\n", epoch());

   printf("%s\n", timestamp());

   return 0;
}
