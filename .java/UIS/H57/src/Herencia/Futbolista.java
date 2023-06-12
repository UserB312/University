
package Herencia;
//CON LA SENTENCIA extends HEREDAMOS LOS ATRIBUTOS DE LA CLASE PADRE SeleccionFutbol
public class Futbolista extends SeleccionFutbol {
    private int dorsal;
    private String posicion;

    public Futbolista(int dorsal, String posicion, int dni, String nombre, String apellido, int edad) {
        super(dni, nombre, apellido, edad);
        this.dorsal = dorsal;
        this.posicion = posicion;
    }
    //GETTER AND SETTER
    public int getDorsal(){
        return dorsal;
    }
    public void setDorsal(int dorsal){
        this.dorsal=dorsal;
    }
    public String getPosicion(){
        return posicion;
    }
    public void setPosicion(String posicion){
        this.posicion=posicion;
    }
    //METODOS
    public void jugarPartido(){
        System.out.println("Puede jugar partido de futbol");
    }
    public void entrenar(){
        System.out.println("Puede entrenar");
    }
    //REALIZAMOS POLIFORMISMO SOBREESCRIBIENDO EL METODO concentrarse HEREDADO DE LA CLASE SeleccionFutbol
    @Override
    public void concentrarse(){
        System.out.println("Debe estar en el hotel minimo 12 horas antes del partido");
    }
    

}
