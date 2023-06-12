
package modelo;

public class EmpleadoBasico {
    
    protected int horasTrabajadasMes;
    private double valorHora;

    public EmpleadoBasico() {
    }

    public EmpleadoBasico(int horasTrabajadasMes, double valorHora) {
        this.horasTrabajadasMes = horasTrabajadasMes;
        this.valorHora = valorHora;
    }


    public int getHorasTrabajadasMes() {
        return horasTrabajadasMes;
    }

    public void setHorasTrabajadasMes(int horasTrabajadasMes) {
        this.horasTrabajadasMes = horasTrabajadasMes;
    }

    public double getValorHora() {
        return valorHora;
    }
    
    public void setValorHora(double valorHora) {
        this.valorHora = valorHora;
    }

    @Override
    public String toString() {
        return "EmpleadoBasico{" + "horasTrabajadasMes=" + horasTrabajadasMes + 
                ", valorHora=" + valorHora + 
                ", Sueldo= " + this.calcularSueldo() +
                '}';
    }
    
    public double calcularSueldo(){
        
        return this.horasTrabajadasMes * this.valorHora;
        
    }
    
}
