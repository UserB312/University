
package modelo;

/**
 * @author Julio
 */
public class Rectangulo {
    
    // ATRIBUTOS
    private double base;
    private double altura;
    
    // METODO CONSTRUCTOR POR DEFAULT
    public Rectangulo(){
        this.altura=10;
        this.base=5;
    }
    //METODO SOBRECARGADO
    public Rectangulo(double x, double y){
        this.altura = x;
        this.base = y;
    }
    public Rectangulo(double x){
        this(x,5);
        /*this.base = x
          this.altura = 15*/
    }
    
    // GETTERS
    public double getAltura(){
        return this.altura;
    }
    
    public double getBase(){
        return this.base;
    }
    
    //SETTERS
    public void setBase(double base){
        this.base = base;
    }
    
    public void setAltura(double altura){
        this.altura = altura;
    }
    
    // METODOS
    
    public double calcularArea(){
        return this.altura * this.base;
    }
    
    public double calcularPerimetro(){
        return 2 * (this.base + this.altura);
    }
    
    public double areaDiferencia(double area){
        double diferencia = Math.abs(this.calcularArea() - area);
        return diferencia;
    }
    public double areaDiferencia(Rectangulo r){
        return Math.abs(this.calcularArea() - r.calcularArea());
        //return this.areaDiferencia(r.calcularArea());
    }
}
