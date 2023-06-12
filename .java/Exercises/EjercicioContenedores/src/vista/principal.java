
package vista;
import modelo.*;
import java.util.Scanner;
import java.time.LocalDate;

/**
 * @author Julio
 */
public class principal {

    public static void main(String[] args) {
        /*INSTANCIAMOS LA CLASE SCANNER*/
        Scanner entrada = new Scanner(System.in);
        int  ano = 0,mes = 0, dia = 0;
        
        System.out.println("__________DATOS DEL BUQUE__________");
        System.out.print("DIGITE EL AREA MAXIMA DEL BUQUE : ");
        double areaPlataforma = entrada.nextDouble();
        System.out.print("DIGITE EL PESO MAXIMO DEL BUQUE : ");
        double limPeso = entrada.nextDouble();
        /*System.out.println("\nFECHA DE ARRIBO");
        System.out.print("DIGITE EL AÑOS : ");
        ano = entrada.nextInt();
        System.out.print("DIGITE EL MES : ");
        mes = entrada.nextInt();
        System.out.print("DIGITE EL DIA: ");
        dia = entrada.nextInt();
        LocalDate fechaZarpado = LocalDate.of(ano, mes, dia);*/
        LocalDate fechaArribo = LocalDate.now();
        System.out.println("\nFECHA DE ARRIBO : " + fechaArribo);
        System.out.println("\nFECHA DE ZARPADO");
        System.out.print("DIGITE EL AÑOS : ");
        ano = entrada.nextInt();
        System.out.print("DIGITE EL MES :  ");
        mes = entrada.nextInt();
        System.out.print("DIGITE EL DIA :  ");
        dia = entrada.nextInt();
        LocalDate fechaZarpado = LocalDate.of(ano, mes, dia);
        Buque buque = new Buque(areaPlataforma, limPeso, fechaArribo, fechaZarpado);
        
        System.out.println("\n__________DATOS DEL PRIMER CONTENEDOR__________");
        System.out.print("DIGITE EL AREA DEL CONTENEDOR : ");
        double area = entrada.nextDouble();
        System.out.print("DIGITE EL PESO DEL CONTENEDOR : ");
        double peso = entrada.nextDouble();
        System.out.print("DIGITE EL VALOR DEL CONTENEDOR : ");
        double valor = entrada.nextDouble();
        Contenedor contenedor1 = new Contenedor(area, peso, valor);
        System.out.println(buque.cargarContenedor(contenedor1));
        mostrarInfo(contenedor1, buque);
        System.out.println("\n__________DATOS DEL SEGUNDO CONTENEDOR__________");
        System.out.print("DIGITE EL AREA DEL CONTENEDOR : ");
        double area2 = entrada.nextDouble();
        System.out.print("DIGITE EL PESO DEL CONTENEDOR : ");
        double peso2 = entrada.nextDouble();
        System.out.print("DIGITE EL VALOR DEL CONTENEDOR : ");
        double valor2 = entrada.nextDouble();
        Contenedor contenedor2 = new Contenedor(area2, peso2, valor2);
        System.out.println(buque.cargarContenedor(contenedor2));
        mostrarInfo(contenedor2, buque);
        
        /*IDEA DE SINTAXIS DE COMO SE DEBERIA CARGAR EL CONTENEDOR*/
    }  
    public static void mostrarInfo(Contenedor contenedor, Buque buque) {
        System.out.println("*****************************INFO**************************");
        System.out.println("AREA PLATAFORMA DISPONIBLE : " + buque.areaDisponible());
        System.out.println("PESO DISPONIBLE : " + buque.pesoPermitido());
        System.out.println("FECHA DE ARRIBO : " + buque.getFechaArribo());
        System.out.println("FECHA DE ZARPADO : " + buque.duracionViaje() );
        System.out.println("VALOR TOTAL CARGA : " + buque.valorCarga());
        System.out.println("CONTENEDORES CARGADOS : " + buque.contenedoresCargados());
    }
}

