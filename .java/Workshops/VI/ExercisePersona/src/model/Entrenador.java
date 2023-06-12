
package model;
/**
 * @author Julio
 */
public class Entrenador extends Persona{
    private String idFederacion;
    
    //CONSTRUCTOR POR DEFAULT
    public Entrenador(){
    }
    //CONSTRUCTOR SOBRECARGADO
    public Entrenador(int id, String Nombre,String Apellidos, int Edad, String idFederacion){
        super(id,Nombre,Apellidos,Edad);
        this.idFederacion = idFederacion;
    }
    public String getIdFederacion(){
        return idFederacion;
    }
    public void setIdFederacion(String idFederacion){
        this.idFederacion = idFederacion;
    }

    @Override
    public void Concentrarse(){
        System.out.println("Debe concentrarse para el proximo partido");
    }
    @Override
    public void Viajar(){
        System.out.println("Puede viajar");
    }
    public void dirigirPartido(){
        System.out.println("Puede dirigir un partido");
    }
    public void dirigirEntrenamiento(){
        System.out.println("Puede dirigir un entrenamiento");
    }

}
