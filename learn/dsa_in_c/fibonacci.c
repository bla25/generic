#include <stdio.h>
int main() {
    int n , x=0, y=1, nextterm;
    printf("enter a number: \n");
    scanf("%d", &n);
    printf("the fibonacci sequence: %d , %d," , x, y);
    for(int i = 1; i <= n; i++){
        nextterm=x+y;
        printf("%d, \n" , nextterm);
        x=y;
        y=nextterm;
        
    }
    

    return 0;

}