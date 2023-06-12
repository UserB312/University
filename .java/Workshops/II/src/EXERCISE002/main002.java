
package EXERCISE002;
/**
 * @author Julio
 */
public class main002 {

    public static void main(String[] args) {
         /*Escriba una aplicación que defina tres variables numéricas, con sus valores iniciales, y muestre la suma, promedio, 
        producto, cociente y modulo. Los resultados se deben imprimir en formato decimal con dos cifras significativas.*/
         int u = 40, y = 20, z = 18;
        double suma = u + y + z;
        double promedio = suma / 3;
        double producto = u * y * z;
        double cociente = u / y / z;
        double modulo = u % y % z;
        System.out.printf("La suma es %.2f\n", suma);
        System.out.printf("El promedio es %.2f\n", promedio);
        System.out.printf("El producto es %.2f\n", producto);
        System.out.printf("El cociente es %.2f\n", cociente);
        System.out.printf("El modulo es %.2f\n", modulo);
    }
    
}
