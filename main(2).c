#include <stdio.h>

int main() {
    int n;

    printf("Введіть кількість чисел: ");
    scanf("%d", &n);
    
    int numbers[n];

    printf("Введіть числа: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }

    int result = numbers[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }
    
    printf("Найменше спільне кратне: %d\n", result);
    
    return 0;
}
