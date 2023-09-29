

public class Triangulo {

    private Double cateto1;
    private Double cateto2;

    public Triangulo(Double cateto1 , Double cateto2) {
        this.cateto1 = cateto1;
        this.cateto2 = cateto2;
    }

    public Double hipotenusa(){
        Double hipo = Math.pow(this.cateto1,2) + Math.pow(this.cateto2,2);
        return Math.sqrt(hipo); 
    }
}