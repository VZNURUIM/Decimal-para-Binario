#include <iostream>

// Função para converter decimal para binário
void decimalToBinary(int decimalNumber) {
    int binaryNumber[32]; // Armazenar os dígitos binários
    int index = 0;

    // Converte para binário
    while (decimalNumber > 0) {
        binaryNumber[index] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        index++;
    }

    // Imprime o número binário
    std::cout << "O numero binario é: ";
    for (int i = index - 1; i >= 0; i--) {
        std::cout << binaryNumber[i];
    }
    std::cout << std::endl;
}

int main() {
    int decimalNumber;

    // Solicita ao usuário que insira um número decimal
    std::cout << "Digite um numero decimal: ";
    std::cin >> decimalNumber;

    // Chama a função para converter e imprimir o número binário
    decimalToBinary(decimalNumber);

    return 0;
}
