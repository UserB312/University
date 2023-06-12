
package Exercise01;

public class ProductoRefrigerado extends Producto{
    
    public ProductoRefrigerado(String nombre, String id, double temperatura, double valorBase){
        super(nombre, id, temperatura, valorBase);
    }
    public ProductoRefrigerado(){
        
    }
    
    @Override
    public double calcularCostoDeAlmacenamiento(){
        return getValorBase()*1.20;
    }
}
//OTRA FORMA DE REALIZAR DE SOBREESCRIBIR EL METODO calcularCosto de Almacenamiento
//  public double calcularCostoDeAlmacenamiento(){
//      double totalCosto=0;
//      if (this.getTemperatura()>=0 & this.getTemperatura()<=20){
//           totalCosto=this.getValorBase()*1.20;
//      }
//      return totalCosto;
//   }
//}