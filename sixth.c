//logical operators//

#include <stdio.h>
int main(){

    int a=4;
    int b=5;


    printf("%d\n" , a>10 && b<5);//false
    printf("%d\n\n" , a<10 && b<6);//true

    printf("%d\n" , b>5 || a>2);//true
    printf("%d\n\n" , b>5 || a>5);//false


    printf("%d\n" , !(b>5 || a>2));//false
    printf("%d\n\n" , !(a>10 && b<5));//true

   return 0;
}

// logical operators//

