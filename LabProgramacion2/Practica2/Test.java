package Practica2;

import java.util.Scanner;

public class Test {
    
    /**
     * @param args
     */
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        
        System.out.println("cateto 1: ");
        String cateto1Str = scanner.next();
        System.out.println("cateto 2: ");
        String cateto2Str = scanner.next();
        scanner.close();

        Double cateto1 = Double.parseDouble(cateto1Str);
        Double cateto2 = Double.parseDouble(cateto2Str);
        
        Triangulo triangulo = new Triangulo(cateto1,cateto2);
        System.out.println("La Hipotenusa es: " + triangulo.hipotenusa());
    }
}
