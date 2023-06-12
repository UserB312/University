
package modelo;
/**
 * @author Julio
 */
public class Direccion {
    private String numero;
    private String ciudad;
    private String pais;

    public Direccion() {
        this("Salon n401-i", "Valledupar", "Cesar");
    }

    public Direccion(String numero, String ciudad, String pais) {
        this.numero = numero;
        this.ciudad = ciudad;
        this.pais = pais;
    }

    public String getNumero() {
        return numero;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }

    public String getCiudad() {
        return ciudad;
    }
    public void setCiudad(String ciudad) {
        this.ciudad = ciudad;
    }
    
    public String getPais() {
        return pais;
    }
    public void setPais(String pais) {
        this.pais = pais;
    }
    
    @Override
    public String toString() {
        return "Direccion{" + "numero=" + numero + ", ciudad=" + ciudad + ", pais=" + pais + '}';
    }
    
    
    
}
