package Practica5;

import java.util.Scanner;

public class PrestamoTest {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.println("Ingrese la cantida de dinero a solicitar:");
        float capital = input.nextFloat();
        System.out.println("Ingrese a cuantos anos desea pagar el prestamo:");
        int anos = input.nextInt();
        System.out.println("Ingrese la Tasa de Interes Anual:");
        float Interes = input.nextFloat();
        input.close();

        ImprimirTablaAmortizacion(capital, anos, Interes, calcularCuotas(capital, anos, Interes));

    }

    public static double calcularCuotas(float capital, int anos, float Interes) {
        var cuotas = ((capital * Interes) / (100 * (1 - (1 + Math.pow((Interes / 100),anos) )))) * -1;
        return cuotas;
    }

    public static void ImprimirTablaAmortizacion(float capital, int anos, float Interes, double cuotas) {
        System.out.println("-------------------------------------------------------");
        System.out.print("Capital");
        System.out.print("        Plazo");
        System.out.print("              Cuotas");
        System.out.println("                   Interes:");
        System.out.println("--------------------------------------------------------");
        System.out.print(capital);
        System.out.print("         "+ anos*12 + " meses");
        System.out.print("              "+cuotas);
        System.out.println("                   " + (capital*(Interes/100)/12)+ " mensuales");
        System.out.print("-----------------------------------------------------------");


    }

}
