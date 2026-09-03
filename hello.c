#include <stdio.h>

int main() {
    printf("Hello from c!\n");
    greet("ada");
    return 0;
}
void greet(const char *name) {
 printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);
}
