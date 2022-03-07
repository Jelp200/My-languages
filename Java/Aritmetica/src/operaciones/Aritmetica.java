package operaciones;

public class Aritmetica {
    // Atributos
    int a, b;
    
    // Constructor vacio (default)
    public Aritmetica(){
        System.out.println("Ejecutando constructor");
    }
    
    // Sobrecarga de constructores (dos o más contructores)
    public Aritmetica(int a, int b){
        this.a = a;                                                             // Apuntador
        this.b = b;
        System.out.println("Ejecutando constructor con argumento.");
    }
    
    // Meotodos
    public void sumar(){
        int R = a + b;
        System.out.println("Resultado: " + R);
    }
    
    public int sumarConRetorno(){
        /* int R = a + b;
        return R; */
        return a + b;
    }
    
    public int sumarConArgumentos(int arg1, int arg2){
        a = arg1;
        b = arg2;
        // return a + b;
        return sumarConRetorno();
    }
}
