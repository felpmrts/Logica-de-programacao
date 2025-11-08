package Tests.ExEstruturaSequencial;
import java.util.Scanner;

public class ex_1 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int A, B, SOMA;

        A = sc.nextInt();
        B = sc.nextInt();

        sc.close();

        SOMA = A + B;
        System.out.printf("SOMA = %d\n", SOMA);

    }

}
