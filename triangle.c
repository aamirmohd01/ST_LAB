#include <stdio.h>

int main() {
    int a, b, c;
    char istriangle;
    
    printf("Enter 3 integers which are sides of triangle\n");
    scanf("%d%d%d", &a, &b, &c);
    
    printf("a=%d\tb=%d\tc=%d\n", a, b, c);
    
    if (a < b + c && b < a + c && c < a + b) {
        istriangle = 'y';
    } else {
        istriangle = 'n';
    }
    
    if (istriangle == 'y') {
        if ((a == b) && (b == c)) {
            printf("Equilateral Triangle\n");
        } else if ((a != b) && (a != c) && (b != c)) {
            printf("Scalene Triangle\n");
        } else {
            printf("Isosceles Triangle\n");
        }
    } else {
        printf("Not a Triangle\n");
    }
    
    return 0;
}
