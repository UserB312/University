
package ExerciseComposicion;

public class Vehiculo {
    private String marca;
    private int modelo;
    private String matricula;
    private int tarifaDia;

    public Vehiculo(String marca, int modelo, String matricula, int tarifaDia) {
        this.marca = marca;
        this.modelo = modelo;
        this.matricula = matricula;
        this.tarifaDia = tarifaDia;
    }

    public String getMarca() {
        return marca;
    }
    public int getModelo() {
        return modelo;
    }
    public String getMatricula() {
        return matricula;
    }
    public int getTarifaDia() {
        return tarifaDia;
    }
    
    
}
