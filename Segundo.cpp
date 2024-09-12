#include <iostream>

using namespace std;

bool pertenceFibonacci(int num) {
    int a = 0, b = 1, proximo = 0;

    if (num == 0 || num == 1) {
        return true; // 0 e 1 pertencem à sequência
    }

    // Calcula a sequência até que o próximo número seja maior ou igual ao informado
    while (proximo < num) {
        proximo = a + b;
        a = b;
        b = proximo;
    }

    return proximo == num; // Verifica se o número pertence à sequência
}

int main() {
    int numero;

    cout << "Informe um número: ";
    cin >> numero;

    if (pertenceFibonacci(numero)) {
        cout << "O número " << numero << " pertence à sequência de Fibonacci.\n";
    } else {
        cout << "O número " << numero << " NÃO pertence à sequência de Fibonacci.\n";
    }

    return 0;
}

