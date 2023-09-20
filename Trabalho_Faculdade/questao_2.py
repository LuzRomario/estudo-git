import time

def somar_numeros(valor):
    tempo_inicio = time.time()
    soma = sum(range(1, valor + 1))
    tempo_final = time.time()
    tempo_execucao = tempo_final - tempo_inicio
    return soma, tempo_execucao

valores = [1000000, 10000000, 100000000, 1000000000]

for valor in valores:
    soma_result, tempo_execucao = somar_numeros(valor)
    print(f"Soma dos números de 1 até {valor}: {soma_result}")
    print(f"Tempo de execução: {tempo_execucao} segundos")
    print()
