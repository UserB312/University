
package modelo;

import java.time.LocalDate;
/**
 * @author Julio
 */
public class Persona {
    
    private String id;
    private String nombre;
    private int edad;
    private LocalDate fechaVinculacion;
    private Direccion domicilio;
    private Empresa empresa;

    public Persona() {
        this("77","Jairo Seoanes",25, LocalDate.now(),new Direccion(),new Empresa());
    }

    public Persona(String id, String nombre, int edad, LocalDate fechaVinculacion, Direccion domicilio, Empresa empresa) {
        this.id = id;
        this.nombre = nombre;
        this.edad = edad;
        this.fechaVinculacion = fechaVinculacion;
        this.domicilio = domicilio;
        this.empresa = empresa;
    }

    public String getId() {
        return id;
    }
    public void setId(String id) {
        this.id = id;
    }
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public int getEdad() {
        return edad;
    }
    public void setEdad(int edad) {
        this.edad = edad;
    }
    public LocalDate getFechaVinculacion() {
        return fechaVinculacion;
    }
    public void setFechaVinculacion(LocalDate fechaVinculacion) {
        this.fechaVinculacion = fechaVinculacion;
    }
    public Direccion getDomicilio() {
        return domicilio;
    }
    public void setDomicilio(Direccion domicilio) {
        this.domicilio = domicilio;
    }
    public Empresa getEmpresa() {
        return empresa;
    }
    public void setEmpresa(Empresa empresa) {
        this.empresa = empresa;
    }

    @Override
    public String toString() {
        return "Persona{" + "id=" + id + ", nombre=" + nombre + ", edad=" + edad + ", fechaVinculacion=" + fechaVinculacion + ", domicilio=" + domicilio + ", empresa=" + empresa + '}';
    }
    
}
