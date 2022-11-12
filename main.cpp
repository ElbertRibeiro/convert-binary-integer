#include <iostream>
#include <cstdio>

#define MAX 50

void binario(int num) {
    int vet_bin[MAX];
    int i = 0, j;
    int aux_num = num;

    while (num > 0) {
        vet_bin[i] = num % 2;
        i++;
        num = num / 2;
    }

    printf("%d em binario: ", aux_num);

    for (j = i - 1; j >= 0; j--)
        printf("%d", vet_bin[j]);
    printf("\n");
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    std::cin >> num;
    binario(num);

    return 0;
}