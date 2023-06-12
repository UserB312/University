
package modelo;


public class EmpleadoComision extends EmpleadoBasico{
    
    private double valorComision;
    public EmpleadoComision() {
        
    }

    public EmpleadoComision(int horasTrabajadasMes, double valorHora, double valorComision) {
        super(horasTrabajadasMes, valorHora);
        this.valorComision = valorComision;
    }

    public double getValorComision() {
        return valorComision;
    }

    public void setValorComision(double valorComision) {
        this.valorComision = valorComision;
    }

    @Override
    public String toString() {
        return "EmpleadoComision{horasTrabajadasMes=" + this.horasTrabajadasMes + 
                ", valorHora=" + this.getValorHora() + 
                ", valorComision=" + valorComision + 
                ", Sueldo mes="+this.calcularSueldo()+'}';
    }
    
    @Override
    public double calcularSueldo(){
        
        return super.calcularSueldo() + this.valorComision;
    }
    
}
