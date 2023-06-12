
package modelo;

import java.time.LocalDate;


/**
 * @author Julio
 */
public class Buque {
    
    /*DECLARACION DE ATRIBUTOS*/
    private double areaPlataforma;
    private double limitePeso;
    private String estado;
    private int numContenedores;
    private double valorTotalCargado;
    private LocalDate fechaArribo;
    private LocalDate fechaZarpado;
    
    /*METODO POR DEFAULT*/
    public Buque(){
        this.areaPlataforma = 0;
        this.limitePeso = 0;
        this.estado = "Arribado";
        this.numContenedores = 0;
        this.valorTotalCargado = 0;
        this.fechaZarpado = null;
        this.fechaArribo = null;
    }
    
    /*METODO SOBRECARGADO*/
    public Buque(double areaPlataforma, double limitePeso, LocalDate fechaArribo, LocalDate fechaZarpado){
        this.areaPlataforma = areaPlataforma;
        this.limitePeso = limitePeso;
        this.estado = "Arribado";
        this.numContenedores = numContenedores;
        this.valorTotalCargado = valorTotalCargado;
        this.fechaZarpado = fechaZarpado;
        this.fechaArribo = fechaArribo;
    }
    
    /*METODOS GETTERS AND SETTERS*/

    public double getAreaPlataforma() {
        return this.areaPlataforma;
    }
    public void setAreaPlataforma(double areaPlataforma) {
        this.areaPlataforma = areaPlataforma;
    }
    public double getLimitePeso() {
        return this.limitePeso;
    }
    public void setLimitePeso(double limitePeso) {
        this.limitePeso = limitePeso;
    }
    public String getEstado() {
        return this.estado;
    }
    public void setEstado(String estado) {
        this.estado = estado;
    }
    public int getNumContenedores() {
        return this.numContenedores;
    }
    public void setNumContenedores(int numContenedores) {
        this.numContenedores = numContenedores;
    }
    public double getValorTotalCargado() {
        return this.valorTotalCargado;
    }
    public void setValorTotalCargado(double valorTotalCargado) {
        this.valorTotalCargado = valorTotalCargado;
    }
    public LocalDate getFechaArribo() {
        return this.fechaArribo;
    }
    public void setFechaArribo(LocalDate fechaArribo) {
        this.fechaArribo = fechaArribo;
    }
    public LocalDate getFechaZarpado() {
        return this.fechaZarpado;
    }
    public void setFechaZarpado(LocalDate fechaZarpado) {
        this.fechaZarpado = fechaZarpado;
    }
    
    public String cargarContenedor(double area, double peso, double valor){
        if (estado.equalsIgnoreCase("Zarpado")) {         /*.equals Compara la cadena con el objeto especificado ignorando mayus y minis*/
            return "NO ES POSIBLE CARGAR CONTENEDORES, EL BUQUE ESTA NAVEGANDO";
        }else{
            if(this.areaPlataforma - area < 0){
                return "NO HAY AREA DISPONIBLE PARA CARGAR CONTENEDORES";
            }else{  
                if(this.limitePeso - peso < 0){
                    return "NO ES POSIBLE CARGAR EL CONTENEDOR, PESO MAXIMO EXCEDIDO";
                }else{
                    this.areaPlataforma = this.areaPlataforma - area;
                    this.limitePeso = this.limitePeso - peso;
                    this.valorTotalCargado = this.valorTotalCargado + valor;
                    this.numContenedores = this.numContenedores + 1;
                    return "\nEL CONTENEDOR SE CARGO CORRECTAMENTE\n";
                }
            }
        }    
    }
    /*METODO SOBRECARGADO CARGAR CONTENEDOR*/        
    public String cargarContenedor(Contenedor x){
        return this.cargarContenedor(x.getArea(),x.getPeso(),x.getValor()) ;
    }
    
    public double areaDisponible(){
        return this.areaPlataforma;
    }
    
    public double pesoPermitido(){
        return this.limitePeso;
    }
    
    public double valorCarga(){
        return this.valorTotalCargado;
    }
    
    public int contenedoresCargados(){
        return this.numContenedores;
    }
    
    public LocalDate duracionViaje(){
        return this.fechaZarpado;
    }
}
