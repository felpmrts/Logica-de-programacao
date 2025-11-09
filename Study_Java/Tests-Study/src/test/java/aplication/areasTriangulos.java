package aplication;

import entities.Triangle;
import java.util.Scanner;

public class areasTriangulos {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Triangle x, y;
        x = new Triangle();
        y = new Triangle();

        System.out.print("Enter the measures of triangle X:\n");
        x.a = sc.nextDouble();
        x.b = sc.nextDouble();
        x.c = sc.nextDouble();
        System.out.print("Enter the measures of triangle Y:\n");
        y.a = sc.nextDouble();
        y.b = sc.nextDouble();
        y.c = sc.nextDouble();

        double areaX = x.area();
        double areaY = y.area();

        System.out.printf("Triangle X area: %.4f\n", areaX);
        System.out.printf("Triangle Y area: %.4f\n", areaY);

        System.out.print((areaX > areaY) ? "Larger area: X":"Larger area: Y");

        sc.close();
    }

}

