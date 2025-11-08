package Tests;

public class MathFunction {

    public static void main(String[] args) {

    double x = 3.0;
    double y = 4.0;
    double z = -5.0;
    double A, B, C;

    System.out.printf("A raiz de %.0f eh: ", y);
    A = Math.sqrt(y);
    System.out.println(A);

    System.out.printf("A potenciacao de %.0f elevado a 2 eh: ", x);
    B = Math.pow(x, 2);
    System.out.println(B);

    System.out.printf("O valor absoluto de %.0f eh: ", z);
    C = Math.abs(z);
    System.out.println(C);


    }

}
