
package model;
/**
 * @author Julio
 */
public class ProfesorInterino extends Profesor{
    
    //CONSTRUCTOR POR DEFAULT
    public ProfesorInterino(){
    }
    //CONSTRUCTOR SOBRECARGADO
    public ProfesorInterino(int id, String Nombre){
        super(id, Nombre);
    }

    @Override
    public String toString() {
        return "El profesor interino"  ;
    }
    
    
}
