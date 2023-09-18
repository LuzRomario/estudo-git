import time

# Função para somar os números de 1 até o valor especificado e medir o tempo de execução
def somar_numeros(max_value):
    start_time = time.time()
    soma = sum(range(1, max_value + 1))
    end_time = time.time()
    tempo_execucao = end_time - start_time
    return soma, tempo_execucao

# Faixas de números
faixas = [1000000, 10000000, 100000000, 1000000000]

# Loop através das faixas e calcular a soma e o tempo de execução
for max_value in faixas:
    soma_result, tempo_execucao = somar_numeros(max_value)
    print(f"Soma dos números de 1 até {max_value}: {soma_result}")
    print(f"Tempo de execução: {tempo_execucao} segundos")
    print()
