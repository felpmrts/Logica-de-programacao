package applications1;

import java.util.Scanner;

public class Triangulos {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the measures of triangle X:\n");
        double xa = sc.nextDouble();
        double xb = sc.nextDouble();
        double xc = sc.nextDouble();
        System.out.print("Enter the measures of triangle Y:\n");
        double ya = sc.nextDouble();
        double yb = sc.nextDouble();
        double yc = sc.nextDouble();

        double px = (xa + xb +xc) / 2.0;
        double areaX = Math.sqrt(px * (px - xa) * (px - xb) * (px - xc));

        double py = (ya + yb +yc) / 2.0;
        double areaY = Math.sqrt(py * (py - ya) * (py - yb) * (py - yc));

        System.out.printf("Triangle X area: %.4f\n", areaX);
        System.out.printf("Triangle Y area: %.4f\n", areaY);

        System.out.print((areaX > areaY) ? "Larger area: X":"Larger area: Y");

        sc.close();
    }

}
