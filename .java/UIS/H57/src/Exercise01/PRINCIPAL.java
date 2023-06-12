
package Exercise01;

public class PRINCIPAL {

    public static void main(String[] args) {
        ProductoNoRefrigerado p1= new ProductoNoRefrigerado();
        p1.setValorBase(1000);
        System.out.println(p1.calcularCostoDeAlmacenamiento());
    }
    
}
