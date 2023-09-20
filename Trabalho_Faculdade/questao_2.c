#include <iostream>
#include <chrono>

int main() {
    
// 1 até  1.000.000.000 >> long long int max_value = 1000000000LL;
// 1 até 10.000.000 >> long long int max_value = 10000000LL; 
// 1 até 1.000.000 >> long long int max_value = 1000000LL; 
// 1 até 100.000.000 >> long long int max_value = 100000000LL;
    long long int valor = 100000000LL;
    
    long long int soma = 0;

    auto inicio_tempo = std::chrono::high_resolution_clock::now();

    for (long long int i = 1; i <= valor; ++i) {
        soma += i;
    }

    auto tempo_final = std::chrono::high_resolution_clock::now();

    auto tempo_execucao = std::chrono::duration_cast<std::chrono::milliseconds>(tempo_final - inicio_tempo);

    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Tempo de execução: " << tempo_execucao.count() << " ms" << std::endl;

    return 0;
}
