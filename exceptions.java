import java.util.Scanner;

public class ExemploExcecao {

  public static void main(String[] args) {

    Scanner input = new Scanner(System.in);
    
    try {
      System.out.print("Digite um número inteiro: ");
      int numero = input.nextInt();
      int resultado = 100 / numero;
      System.out.println("100 dividido por " + numero + " é igual a " + resultado);
    } catch (ArithmeticException e) {
      System.out.println("Erro: divisão por zero");
    } catch (Exception e) {
      System.out.println("Erro: " + e.getMessage());
    } finally {
      input.close();
    }
  }

}
