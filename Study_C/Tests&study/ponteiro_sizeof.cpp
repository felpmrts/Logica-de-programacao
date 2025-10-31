#include <stdio.h>

/*
int main() {

    printf("int = %d\n", sizeof(int));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
    printf("char = %d\n", sizeof(char));

    int *p;
    int x;

    p = &x;

    printf("%d\n", p);
    printf("%d\n", p+1);

    return 0;
}
*/

 int main() {

    int *p;
    int x = 17;

    p = &x;

    printf("%d\n", *p);
    x = 78;
    printf("%d\n", *p);

    return 0;
 }