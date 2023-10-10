package Practica4;

import java.util.Scanner;

public class Salario {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.println("Ingrese el nombre del empleado:");
        String nombre = input.nextLine();
        System.out.println("Ingrese la cedula del empleado:");
        String cedula = input.nextLine();
        System.out.println("Ingrese la tarifa del empleado:");
        float tarifa = input.nextFloat();
        System.out.println("Ingrese las horas trabajadas del empleado:");
        float horas = input.nextFloat();
        input.close();

        calcularSalario(nombre, cedula, tarifa, horas);
    }

    public static void calcularSalario(String nombre, String cedula, float tarifa, float horas) {

        double salarioBruto;
        double impuestos = 0;
        double salarioNeto = 0;

        if (horas < 38) {
            salarioBruto = horas * tarifa;
        } else {
            double horasExtra = horas - 38;
            salarioBruto = (tarifa * 38) + (horasExtra * (tarifa * 1.5));
        }

        if (salarioBruto <= 25000) {
            impuestos = 0;
        }
        else {
            impuestos = salarioBruto * 0.1;
        }

        salarioNeto = salarioBruto - impuestos;

        System.out.println("Volante de pago");
        System.out.println("------------------------------------------------");
        System.out.println("Nombre: " + nombre);
        System.out.println("Cédula: " + cedula);
        System.out.println("Tarifa de horas por empleado: " + tarifa);
        System.out.println("Horas trabajadas: " + horas);
        System.out.println("Salario bruto: " + salarioBruto);
        System.out.println("Impuestos: " + impuestos);
        System.out.println("Salario neto: " + salarioNeto);
    }
}
