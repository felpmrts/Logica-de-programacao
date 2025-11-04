package ExEstruturaSequencial;
import java.util.Scanner;
import java.util.Locale;

public class ex_4 {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);

        Scanner sc = new Scanner(System.in);

        int numero, horas;
        double recebe_hora, salary;

        numero = sc.nextInt();
        horas = sc.nextInt();
        recebe_hora = sc.nextDouble();

        salary = recebe_hora * horas;

        System.out.printf("NUMBER = %d\n", numero);
        System.out.printf("SALARY = %.2f\n", salary);

        sc.close();

    }

}
