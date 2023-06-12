
package Exercise01;

import java.util.ArrayList;
import java.util.List;

public class Lote {
    
    private List<Producto> productos;
    
    public Lote(){
        productos = new ArrayList<>();
    }
    
    public void agregarProducto(Producto p){
        productos.add(p);
    }
    
    public void mostrarProductos(){
        for (Producto producto : productos) {
            System.out.println(producto);
        }
    }
}
