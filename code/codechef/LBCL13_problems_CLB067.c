#include <stdio.h>

int main() {
    int b, r;
    scanf("%d", &b);
    scanf("%d", &r);
    
    if (r > b) {
        printf("Rob scored higher marks than Bob\n");
    } else if (r == b) {
        printf("Bob & Rob both scored the same");
    }
}
