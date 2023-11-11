package TeoProgramacion2.Lab4.Exercise1;

public class FooBarBaz {
    public static void main(String[] args) {
        
        for(int i = 1; i <= 50; i++ ){
            if(i % 3 == 0 )
                System.out.println(i + " Foo");
            else if(i % 5 == 0) 
                System.out.println(i + " Bar");
            else if(i % 7 == 0)
                System.out.println(i + " Baz");        
            else
                System.out.println(i);
        }   
    }
}
