package ExEstruturaSequencial;
import java.util.Scanner;
import java.util.Locale;

public class ex_2 {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double R, area, pi = 3.14159;

        R = sc.nextDouble();

        area = pi * R * R;

        System.out.printf("A=%.4f\n", area);

        sc.close();

    }

}
