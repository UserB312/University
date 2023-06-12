package modelo;

public interface ISensor {
    public abstract void activarSensor();
    double leerMedicion();
    void desactivarSensor();
}
