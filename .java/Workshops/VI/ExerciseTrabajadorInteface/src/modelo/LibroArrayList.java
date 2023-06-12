
package modelo;

import java.util.ArrayList;

public class LibroArrayList implements ILibro {
    
    private ArrayList<ITrabajador> libro;

    public LibroArrayList() {
        this.libro = new ArrayList();
    }
    
    
    @Override
    public void adicionar(ITrabajador t) {
        if(this.getLibro().size()<ILibro.MAX_TRABAJADORES){
            this.getLibro().add(t);
        }
    }
    
    @Override
    public ArrayList<ITrabajador> leer() {
       
        return new ArrayList(this.libro);
    }
    
    @Override
    public ArrayList<ITrabajador> buscar(double monto) {
        ArrayList<ITrabajador> resultado = new ArrayList();
       for(ITrabajador t: this.getLibro()){
           
           double total = t.getBonificacion() + t.getSueldo();
           if(total>monto){
               resultado.add(t);
           }
       }
       return resultado;
    }

    /**
     * @return the libro
     */
    public ArrayList<ITrabajador> getLibro() {
        return libro;
    }

    /**
     * @param libro the libro to set
     */
    public void setLibro(ArrayList<ITrabajador> libro) {
        this.libro = libro;
    }
    
}
