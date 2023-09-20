class Questao2 {
  public static void main(String[] args) {
      int[] numeros = { 1000000, 10000000, 100000000, 1000000000 };

      for (int valor : numeros) {
          long inicio_tempo = System.currentTimeMillis();
          long soma = 0;

          for (long i = 1; i <= valor; i++) {
              soma += i;
          }

          long tempo_final = System.currentTimeMillis();
            
          long tempo_execucao = tempo_final - inicio_tempo;

          System.out.println("Soma dos números de 1 até " + valor + ": " + soma);
          System.out.println("Tempo de execução: " + tempo_execucao + " ms");
          System.out.println();
      }
  }
}
