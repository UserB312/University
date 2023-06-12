package com.uis;

import java.util.Scanner;

//CALCULAR UN PROGRAMA QUE LE SOLICITE AL USUARIO DOS NUMEROS Y MUESTRE POR CONSOLA TODOS LOS NUMEROS PARES INTERNOS QUE CONTENGA ESTOS NUMEROS
public class E012 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("De un número: ");
        int numero1 = scanner.nextInt();

        System.out.println("De un número: ");
        int numero2 = scanner.nextInt();

        for (int i = 1; i <= numero1 ; i++) {
            if(i % 2==0){
                System.out.println(i);
            }
        }

        for (int i = 1; i <= numero2 ; i++) {
            if(i % 2==0){
                System.out.println(i);
            }
        }
    }
}
