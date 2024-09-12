#include <iostream>

using namespace std;

bool pertenceFibonacci(int num) {
    int a = 0, b = 1, proximo = 0;

    if (num == 0 || num == 1) {
        return true; // 0 e 1 pertencem � sequ�ncia
    }

    // Calcula a sequ�ncia at� que o pr�ximo n�mero seja maior ou igual ao informado
    while (proximo < num) {
        proximo = a + b;
        a = b;
        b = proximo;
    }

    return proximo == num; // Verifica se o n�mero pertence � sequ�ncia
}

int main() {
    int numero;

    cout << "Informe um n�mero: ";
    cin >> numero;

    if (pertenceFibonacci(numero)) {
        cout << "O n�mero " << numero << " pertence � sequ�ncia de Fibonacci.\n";
    } else {
        cout << "O n�mero " << numero << " N�O pertence � sequ�ncia de Fibonacci.\n";
    }

    return 0;
}

