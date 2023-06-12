package view;

import Excepciones.MyExcepcion;
import java.util.Scanner;
import model.Modelo;

public class main {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        Modelo modelo = new Modelo();
        try {
            System.out.println("REGISTRE UN VALOR: ");
            int dato = entrada.nextInt();
            modelo.ejecutarModelo(dato);

        } catch (MyExcepcion me) {
            System.out.println(me);
        } catch (java.util.InputMismatchException IME) {
            System.out.println("Debe ingresar un valor positivo");
        }

    }

}
