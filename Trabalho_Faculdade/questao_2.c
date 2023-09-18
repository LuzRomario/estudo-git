#include <iostream>
#include <chrono>

int main() {
    
// 1 até  1.000.000.000 >> long long int max_value = 1000000000LL;
// 1 até 10.000.000 >> long long int max_value = 10000000LL; 
// 1 até 1.000.000 >> long long int max_value = 1000000LL; 
// 1 até 100.000.000 >> long long int max_value = 100000000LL;
    long long int max_value = 100000000LL;
    
    // Inicialize a variável para armazenar a soma
    long long int sum = 0;

    // Registre o horário de início
    auto start_time = std::chrono::high_resolution_clock::now();

    // Calcule a soma
    for (long long int i = 1; i <= max_value; ++i) {
        sum += i;
    }

    // Registre o horário de término
    auto end_time = std::chrono::high_resolution_clock::now();

    // Calcule o tempo de execução em milissegundos
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

    // Imprima a soma e o tempo de execução
    std::cout << "Soma: " << sum << std::endl;
    std::cout << "Tempo de execução: " << duration.count() << " ms" << std::endl;

    return 0;
}
