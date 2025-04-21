/* task1.c */
#include <stdio.h>
#include <stdbool.h>

// Функция для проверки, является ли число простым
bool isPrime(int num) {
		if (num <= 1) {
				return false;
		}
		if (num == 2) {
				return true;
		}
		if (num % 2 == 0) {
				return false;
		}
		for (int i = 3; i * i <= num; i += 2) {
				if (num % i == 0) {
						return false;
				}
		}
		return true;
}

// Функция для печати всех пар близнецов, не превышающих a
void printTwinPrimes(int a) {
		if (a < 5) {
				printf("Нет пар близнецов для a = %d\n", a);
				return;
		}

		printf("Пары близнецов, не превышающие %d:\n", a);
		for (int i = 2; i <= a - 2; i++) {
				if (isPrime(i) && isPrime(i + 2)) {
						printf("(%d, %d)\n", i, i + 2);
				}
		}
}

int main() {
		int a;
		printf("Введите значение a: ");
		scanf("%d", &a);

		printTwinPrimes(a);

		return 0;
}