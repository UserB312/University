
package Visibilidad;

public class Vehiculo {
    private String Marca;
    private int Modelo;
    private int Kilometraje;

    public Vehiculo(String Marca, int Modelo, int Kilometraje) {
    
        this.Marca = Marca;
        this.Modelo = Modelo;
        this.Kilometraje = Kilometraje;
    }
    
    public void imprimirInformacionVehiculo(){
        System.out.println("Marca"+Marca+"Modelo"+Modelo+"Kilometraje"+Kilometraje);
        
    }
    
}
