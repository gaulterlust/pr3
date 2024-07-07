#include <stdio.h>
#include <math.h>
unsigned long long count_numbers(int p) {
    if (p == 1) return 2; 
    if (p == 2) return 4;  
    if (p == 3) return 8; 
    unsigned long long total = pow(2, p); // Загальна кількість чисел без обмежень
    unsigned long long exclude = (p - 2) * pow(2, p - 3); 
    return total - exclude;
}
int main() {
    int p;
    printf("Введіть кількість розрядів p (p ≤ 30): ");
    scanf("%d", &p);
    if (p < 1 || p > 30) {
        printf("Кількість розрядів повинна бути в межах від 1 до 30\n");
        return 1;
    }
    unsigned long long result = count_numbers(p);
    printf("Кількість чисел із %d розрядів, де три однакові цифри не стоять поруч: %llu\n", p, result);
    return 0;
}