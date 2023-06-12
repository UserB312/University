package com.uis;

import java.util.Scanner;

//CREAR UN PROGRAMA QUE SOLICITE AL USUARIO UN NUMERO Y CALCULE SU FACTORIAL

public class E010 {
    //FACTORIAL DE UN NUMERO X
    public static int factorial(double numero) {
        if (numero == 0)
            return 1;
        else
            return (int) (numero * factorial(numero -1));
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.println("De un nro:");
        int numero = scanner.nextInt();

        int fact = factorial(numero);
        System.out.println("El factorial de "+ numero + " es: " + fact);

    }
}
