package com.uis;

//Cree un programa que indique si un numero digitado por el usuario es un numero primo
import java.util.Scanner;

public class E011 {

    public static boolean esPrimo(int numero) {
        if (numero == 0 || numero == 1 || numero == 4) {
            return false;
        }
        for (int i = 2; i < numero / 2; i++) {
            if (numero % i == 0)
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("De un número: ");
        int numero = scanner.nextInt();

        if (esPrimo(numero)) {
            System.out.println("El " + numero + " es primo");
        } else {
            System.out.println("El " + numero + " no es primo");
        }
    }
}
