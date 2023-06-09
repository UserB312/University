
package modelo;

public abstract class Vehiculo {
    
    private String placa;
    private boolean estado; // true - > alquilado , false -> disponible

    public Vehiculo() {
    }

    public Vehiculo(String placa, boolean estado) {
        this.placa = placa;
        this.estado = estado;
    }

    /**
     * @return the placa
     */
    public String getPlaca() {
        return placa;
    }

    /**
     * @param placa the placa to set
     */
    public void setPlaca(String placa) {
        this.placa = placa;
    }

    /**
     * @return the estado
     */
    public boolean isEstado() {
        return estado;
    }

    /**
     * @param estado the estado to set
     */
    public void setEstado(boolean estado) {
        this.estado = estado;
    }
    
    
    public abstract double calcularImporteRenta();
    public abstract String getInfo();

    @Override
    public String toString() {
        return  "placa=" + placa + this.getInfo();
    }
    
    
}
