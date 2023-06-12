
package modelo;
/**
 * @author Julio
 */
public class Pago {
    private double tarifa;
    private double metroTrabajado;
    
    //METODO CONSTRUCTOR
    public Pago() {
        this.tarifa = 200;
        this.metroTrabajado = 0;
    }
    //METODOS GETTER
    public double getTarifa() {
        return tarifa;
    }
    public double getMetroTrabajado() {
        return metroTrabajado;
    }
    //METODOS SETTER
    public void setTarifa(double tarifa) {
        this.tarifa = tarifa;
    }
    public void setMetroTrabajado(double metroTrabajado) {
        this.metroTrabajado = metroTrabajado;
    }
    //METODOS
    public double calcularPago(){
        return this.tarifa*this.metroTrabajado;
    }   
}
