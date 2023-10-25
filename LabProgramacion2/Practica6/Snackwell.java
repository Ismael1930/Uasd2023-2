package Practica6;

import java.util.Scanner;

public class Snackwell {

    private float montoDisponibleCliente;
    private int valorMoneda;
    Scanner input = new Scanner(System.in);

    public void InsertarMoneda() {

        int option = 0;
        while (option < 3) {

            PrintMontoDisponible();

            System.out.println("Inserte algunas monedas");
            System.out.println("1. 25$");
            System.out.println("2. 10$");
            System.out.println("3. Comprar");
            System.out.print("opcion: ");
            option = input.nextInt();

            switch (option) {
                case 1:
                    valorMoneda = 25;
                    break;
                case 2:
                    valorMoneda = 10;
                    break;
            }
            montoDisponibleCliente = montoDisponibleCliente + valorMoneda;
        }

    }

    public void Comprar() {

        int option = 0;
        while (option < 5) {

            PrintMontoDisponible();

            System.out.println("Productos Disponibles:");
            System.out.println("1. Platanitos--------30$");
            System.out.println("2. Yuquitas----------35$");
            System.out.println("3. M&M---------------60$");
            System.out.println("4. MAS MAS-----------25$");
            System.out.println("4. MAS MAS-----------25$");
            System.out.println("opcion:");
            option = input.nextInt();

            switch (option) {
                case 1:
                    if (montoDisponibleCliente < 30) {
                        System.out.print("monto Insufucientes, inserte dinero");
                    } else {

                        montoDisponibleCliente = montoDisponibleCliente - 30;
                    }
                    break;
                case 2:
                    if (montoDisponibleCliente < 30) {
                        System.out.print("monto Insufucientes, inserte dinero");
                    } else {

                        montoDisponibleCliente = montoDisponibleCliente - 35;
                    }

                    break;
                case 3:
                    if (montoDisponibleCliente < 30) {
                        System.out.print("monto Insufucientes, inserte dinero");
                    } else {

                        montoDisponibleCliente = montoDisponibleCliente - 60;
                    }

                    break;
                case 4:
                    if (montoDisponibleCliente < 30) {
                        System.out.print("monto Insufucientes, inserte dinero");
                    } else {

                        montoDisponibleCliente = montoDisponibleCliente - 25;
                    }

                    break;
            }

        }
    }

    public void PrintMontoDisponible() {
        System.out.println("Tu saldo Disponible es:" + montoDisponibleCliente);
    }

}
