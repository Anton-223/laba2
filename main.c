#include <stdio.h>

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

int main() {
    int n;

    printf("Введіть кількість чисел p: ");
    scanf("%d", &n);

    if (n < 2 || n > 20) {
        printf("Кількість чисел має бути в межах від 2 до 20.\n");
        return 1;
    }

    int numbers[n];

    printf("Введіть %d натуральних чисел: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Найменше спільне кратне: %d\n", result);

    return 0;
}
