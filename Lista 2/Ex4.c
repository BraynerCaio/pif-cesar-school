#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4;

    printf("Valores iniciais: a=%d, b=%d, c=%d, d=%d\n\n", a, b, c, d);

  
    a += b + c;
    printf("1) a += b + c;      -> a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

   
    b *= c = d + 2;
    printf("2) b *= c = d + 2;  -> a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    d %= a + a + a;
    printf("3) d %%= a+a+a;      -> a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

  
    d -= c -= b -= a;
    printf("4) d -= c -= b -= a;-> a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    a += b += c += 7;
    printf("5) a += b += c += 7;-> a=%d, b=%d, c=%d, d=%d\n\n", a, b, c, d);

    printf("Valores finais: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    return 0;
}