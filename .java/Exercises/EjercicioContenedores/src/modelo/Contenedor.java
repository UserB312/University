
package modelo;
/**
 * @author Julio
 */
public class Contenedor {
    private double area;
    private double peso;
    private double valor;
    
    /*METODO CONSTRUCTOR POR DEFAULT*/
    public Contenedor(){
        this.area = 90;
        this.peso = 700;
        this.valor = 15000;
    }
    
    /*METODO CONSTRUCTOR SOBRECARGADO*/
    public Contenedor(double area, double peso, double valor){
        this.area = area;
        this.peso = peso;
        this.valor = valor;
    }
    
    
    /*GETTERS AND SETTER*/
    public double getArea(){
        return this.area;
    }
    public double getPeso(){
        return this.peso;
    }
    public double getValor(){
        return this.valor;
    }
    public void setArea(double area){
        this.area = area;
    }
    public void setPeso(double peso){
        this.peso = peso;
    }
    public void setValor(double valor){
        this.valor = valor;
    }
}
