
package modelo;
/**
 * @author 
 */
public class Equipo {
    private String nombre, ciudadOrigen, nombreTecnico;
    private int nInscripcion;
    public static final int N_MAX_JUGADORES = 6;
    private Jugador jugadoresInscritos[ ];
    private int n;
    
    public Equipo(){
        this.jugadoresInscritos = new Jugador[Equipo.N_MAX_JUGADORES];
        this.n=0;
    }
    
    public Equipo(String n, String c, String t, int i){
        this();
        this.nombre=n;
        this.ciudadOrigen=c;
        this.nombreTecnico=t;
        this.nInscripcion=i;
    }

    
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public String getCiudadOrigen() {
        return ciudadOrigen;
    }
    public void setCiudadOrigen(String ciudadOrigen) {
        this.ciudadOrigen = ciudadOrigen;
    }
    public String getNombreTecnico() {
        return nombreTecnico;
    }
    public void setNombreTecnico(String nombreTecnico) {
        this.nombreTecnico = nombreTecnico;
    }
    public int getnInscripcion() {
        return nInscripcion;
    }
    public void setnInscripcion(int nInscripcion) {
        this.nInscripcion = nInscripcion;
    }
    public Jugador[] getJugadoresInscritos() {
        return jugadoresInscritos;
    }
    public void setJugadoresInscritos(Jugador[] jugadoresInscritos) {
        this.jugadoresInscritos = jugadoresInscritos;
    }
    public int getN() {
        return n;
    }
    public void setN(int n) {
        this.n = n;
    }
    
    public boolean inscribirJugador(String nombre, String pos, int e){
        if(this.n<Equipo.N_MAX_JUGADORES){
             Jugador j = new Jugador(nombre, pos, e);
             this.jugadoresInscritos[this.n]=j;
             this.n++;
             return true;
        }
        else{
            return false;
        }  
    }
}
