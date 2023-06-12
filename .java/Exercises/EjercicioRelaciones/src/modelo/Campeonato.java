
package modelo;
/**
 * @author 
 */
public class Campeonato {
    private final int N_MAX_EQUIPOS = 5;
    private Equipo equiposInscritos[ ];
    private int n;
    
    public Campeonato(){
        this.equiposInscritos = new Equipo[this.N_MAX_EQUIPOS];
        this.n=0;
    }

    
    public int getN_MAX_EQUIPOS() {
        return N_MAX_EQUIPOS;
    }
    public Equipo[ ] getEquiposInscritos() {
        return equiposInscritos;
    }
    public void setEquiposInscritos(Equipo[ ] equiposInscritos) {
        this.equiposInscritos = equiposInscritos;
    }
    public int getN() {
        return n;
    }
    public void setN(int n) {
        this.n = n;
    }
    
    public boolean inscribirEquipo(Equipo e){
        if(this.n<this.N_MAX_EQUIPOS){
            this.equiposInscritos[this.n]=e;
            this.n++;
            return true;
        }
        return false;
    }
    
    public Equipo buscarEquipoInscrito(int nInscripcion){
        for(int i=0; i<this.n;i++){
            if(this.equiposInscritos[i].getnInscripcion()==nInscripcion){
               return  this.equiposInscritos[i];
            }
        }
        return null;
    }
    
}
