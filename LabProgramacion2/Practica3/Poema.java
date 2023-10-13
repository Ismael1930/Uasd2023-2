package Practica3;

public class Poema {
    public static void main(String[] args) {
        
        System.out.println("Escriba el nombre de la persona que ama");
        String name = System.console().readLine();
        System.out.println("Querido(a) " + name + " A veces tengo ganas de ser cursi\r\n" + //
                "para decir: La amo a usted con locura.\r\n" + //
                "A veces tengo ganas de ser tonto\r\n" + //
                "para gritar: ¡La quiero tanto!\r\n" + //
                "\r\n" + //
                "A veces tengo ganas de ser niño\r\n" + //
                "para llorar acurrucado en su seno.\r\n" + //
                "\r\n" + //
                "A veces tengo ganas de estar muerto\r\n" + //
                "para sentir,\r\n" + //
                "bajo la tierra húmeda de mis jugos,\r\n" + //
                "que me crece una flor\r\n" + //
                "rompiéndome el pecho,\r\n" + //
                "una flor, y decir:\r\n" + //
                "Esta flor, para usted.");
    }
}
