import java.util.Scanner;

public class ScannerTest2 {

    public static void main(String[] args) {

        Scanner primeiro = new Scanner(System.in);

        String a, b, c;
        int i;

        i = primeiro.nextInt();
        primeiro.nextLine(); // Consumir o \n -> limpar o buffer de leitura
        a = primeiro.nextLine();
        b = primeiro.nextLine();
        c = primeiro.nextLine();

        System.out.println("Dados digitados:");
        System.out.println(i);
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);

    }

}
