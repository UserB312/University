
package Repaso_H57;

public class TRM {
    private int pesos;
    
    //CONSTRUCTOR
    public TRM(int pesos){
        this.pesos=pesos;
    }
    //METODOS HABITUALES
    public float convertirEUROS(){
        return pesos/4323.90f;
    }
    
    public float convertirDOLAR(){
        return pesos/4108.56f;
    }
    
    public float convertirYEN(){
        return pesos/30.19f;
    }

}
