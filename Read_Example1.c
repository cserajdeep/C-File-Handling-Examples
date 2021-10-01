#include <stdio.h>
int main() {
   FILE *f = fopen("file1.txt", "r");
   char ch = getc(f);
   while (ch != EOF) {
      putchar(ch);
      ch = getc(f);
   }
   fclose(f);
   return 0;
}