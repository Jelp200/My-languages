package Clases;

public class PruebaPersona {
    public static void main(String[] args) {
        // Creamos un objeto
        Persona persona1 = new Persona();                                       // Creamos el objeto y su contructor.
        /*
        Persona persona1;
        persona1 = new Persona();                                               // Contructor
        */
        persona1.nombre = "Jorge";
        persona1.apellido = "Peña";
        
        // Llamamos al metodo
        persona1.desplegarInfo();
        
        Persona persona2 = new Persona();
        persona2.nombre = "Karol";
        persona2.apellido = "Canizal";
        persona2.desplegarInfo();
    }
}
