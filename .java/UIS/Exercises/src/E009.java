
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.text.DecimalFormat;
import java.util.Scanner;

public class E009 {

    public static void main(String[] args) {
        double num = 10.23657485;
        //Redondeo sin decimales aproximando
        System.out.println(Math.round(num));
        //Redondeo con dos decimales clase Math
        System.out.println(Math.round(num * 100.0) / 100.0);
        //Redondeo con dos decimales clase BigDecimal
        BigDecimal bd = new BigDecimal(num).setScale(2, RoundingMode.HALF_UP);
        System.out.println(bd.doubleValue());
        //Redondeo con dos decimales utilizando DecimalFormat
        DecimalFormat df = new DecimalFormat("###.##");
        System.out.println(df.format(num));

        double cantidad = num;

        System.out.println();
        System.out.println("Ejemplo para mostrar un mismo valor con varios formatos");

        // El simbolo %n es un salto de linea
        // Formato normal double y float
        System.out.printf("%nEl valor de la variable cantidad es %f", cantidad);

        // Formato notación científica
        System.out.printf("%nEl valor de la variable cantidad es %e", cantidad);

        // Formato con 2 decimales
        System.out.printf("%nEl valor de la variable cantidad es %.2f", cantidad);

        // Formato con 6 decimales
        System.out.printf("%nEl valor de la variable cantidad es %.6f", cantidad);

        // Formato con simbolo + y 2 decimales
        System.out.printf("%nEl valor de la variable cantidad es %+.2f", cantidad);

        // Formato con espacios en blanco (suman 11 todas las cifras) con 2 decimales
        System.out.printf("%nEl valor de la variable cantidad es %11.2f", cantidad);

        // Formato con espacios en blanco (suman 11 todas las cifras) con símbolo + y 2 decimales
        System.out.printf("%nEl valor de la variable cantidad es %+11.2f", cantidad);

        // Formato con ceros delante (suman 11 todas las cifras) con 2 decimales
        System.out.printf("%nEl valor de la variable cantidad es %011.2f", cantidad);

        // Formato con ceros delante (suman 11 todas las cifras) con símbolo + y 2 decimales
        System.out.printf("%nEl valor de la variable cantidad es %+011.2f", cantidad);

        // Formato separando los miles (71,283.567811 en lugar de 71283.567811) 
        System.out.printf("%nEl valor de la variable cantidad es %,f", cantidad);

    }

}
