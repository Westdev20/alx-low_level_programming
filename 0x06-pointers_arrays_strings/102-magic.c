#include <stdio.h>
int a =48;
char* charhack;
char chack;
void* hackptr;

int main() {
     hackptr = &a;
     printf("hackptr contains address of a %p\n", hackptr );
     charhack = (char*) hackptr;
  
    printf("charhack contains address of hackptr %p\n", charhack );  
     chack= *charhack;
    printf("charhack now has character of %c", *charhack);
    return 0;
}
