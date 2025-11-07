import java.util.Scanner;

public class CalculadoraIncompleta {

    public static void abertura() {
        System.out.print("=====================\n");
        System.out.print("|    CALCULADORA    |\n");
        System.out.print("=====================\n");
    }

    public static double operacaoSoma(double x, double y) {

        double soma;

        soma = x + y;

        return soma;

    }

    public  static void menu() {

        Scanner sc = new Scanner(System.in);
        int option;

        do {
            System.out.print("1. Soma\n");
            System.out.print("0. Sair\n");
            System.out.print(">> ");

            option = sc.nextInt();

            switch (option) {
                case 1:

                    System.out.print("Digite o primeiro número: ");
                    int aS = sc.nextInt();
                    System.out.print("Digite o segundo número: ");
                    int bS = sc.nextInt();

                    double resultadoSoma = operacaoSoma(aS, bS);

                    System.out.printf(">> %f\n", resultadoSoma);

                    break;
            }

        } while(option != 0);

        sc.close();
    }

    public static void main(String[] args) {
        abertura();
        menu();
    }

}
