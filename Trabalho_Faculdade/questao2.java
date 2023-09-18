public class Questao2 {
  public static void main(String[] args) {
      // Faixas de números
      int[] faixas = { 1000000, 10000000, 100000000, 1000000000 };

      for (int max_value : faixas) {
          long start_time = System.currentTimeMillis();
          long sum = 0;

          // Calcule a soma
          for (long i = 1; i <= max_value; i++) {
              sum += i;
          }

          long end_time = System.currentTimeMillis();

          // Calcule o tempo de execução em milissegundos
          long execution_time = end_time - start_time;

          System.out.println("Soma dos números de 1 até " + max_value + ": " + sum);
          System.out.println("Tempo de execução: " + execution_time + " ms");
          System.out.println();
      }
  }
}
