
package Exercise01;

public class ProductoNoRefrigerado extends Producto{
    
    public ProductoNoRefrigerado(String nombre, String id, double temperatura, double valorBase){
        super(nombre, id, temperatura, valorBase);
    }
    public ProductoNoRefrigerado(){    
    }
            
    @Override
    public double calcularCostoDeAlmacenamiento(){
        return getValorBase()*1.10;
    }    
}
/*OTRA FORMA DE REALIZAR DE SOBREESCRIBIR EL METODO
//  public double calcularCostoDeAlmacenamiento(){
//      double totalCosto=0;
//      if(this.getTemperatura()>=21){
//          totalCosto=this.getValorBase()*1.10;
//      }
//      return totalCosto;
//   }
}*/