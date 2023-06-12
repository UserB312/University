
package ExerciseComposicion;

import java.util.Date;

public class Prestamo {
    private Cliente cliente;
    private Vehiculo vehiculo;
    private int diasPrestamo;
    private Date fechaPrestamo;

    public Prestamo(Cliente cliente, Vehiculo vehiculo, int diasPrestamo, Date fechaPrestamo) {
        this.cliente = cliente;
        this.vehiculo = vehiculo;
        this.diasPrestamo = diasPrestamo;
        this.fechaPrestamo = fechaPrestamo;
    }
    
    public int getValorPrestamo(){
        return (diasPrestamo*vehiculo.getTarifaDia());
    }
    public void getInformacionPrestamo(){
        System.out.println("------------INFORMACION-------------");
        System.out.println("Cliente " + cliente.getNombre() + " " + cliente.getIdentificacion());
        System.out.println("-------------VEHICULO----------------");
        System.out.println("Marca  " + vehiculo.getMarca() + " " + vehiculo.getModelo());
        System.out.println("-------------PRESTAM-----------------");
        System.out.println("Fecha requerida " + fechaPrestamo);
        System.out.println("Dias requeridos " + diasPrestamo);
        System.out.println("Costo del prestamo " + getValorPrestamo());
    }
    
    

}
