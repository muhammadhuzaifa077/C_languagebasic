//assignment operators//

#include <stdio.h>

int main(){
    int x = 5;
    x += 3;
    int y = 5;
    y -= 3;
    int z = 5;
    z *= 3;
    int a = 50;
    a /= 5;
    int b = 51;
    b %= 5;

    int c = 5;
    c %= 5;
    int d = 6;
    d %= 5;

    int e = 7;
    e |= 6;

    int f = 7;
    f ^= 9;


    int g = 554;
    g >>= 533;
    int h = 602;
    h >>= 602;


    int i = 6;
    i <<= 6;

    printf("%d\n" , x);
    printf("%d\n" , y);
    printf("%d\n" , z);
    printf("%d\n" , a);
    printf("%d\n" , b);
    printf("%d\n" , c);
    printf("%d\n" , d);
    printf("%d\n" , e);
    printf("%d\n" , f);
    printf("%d\n" , g);
    printf("%d\n" , h);
    printf("%d\n" , i);
    return 0;
}
