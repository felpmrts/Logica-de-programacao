import java.util.Scanner;

public class ScannerTest {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String z;
        int x;
        double y;
        char w;

        z = sc.next();
        x = sc.nextInt();
        y = sc.nextDouble();
        w = sc.next().charAt(0);

        System.out.println("Nome: " + z);
        System.out.println("Valor inteiro: " + x);
        System.out.println("Valor double: " + y);
        System.out.println("Uma letra: " + w);

        sc.close();


    }

}
