package ExEstruturaSequencial;
import java.util.Scanner;
import java.util.Locale;

public class ex_5 {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int code1, quant1, code2, quant2;
        double price1, price2, total;

        code1 = sc.nextInt();
        quant1 = sc.nextInt();
        price1 = sc.nextDouble();

        code2 = sc.nextInt();
        quant2 = sc.nextInt();
        price2 = sc.nextDouble();

        total = (quant1 * price1 + quant2 * price2);

        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);

        sc.close();

    }

}
