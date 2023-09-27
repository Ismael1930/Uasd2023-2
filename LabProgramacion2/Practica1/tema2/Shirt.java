package Practica1.tema2;

public class Shirt {
    
    //Properties
    public int shirtID = 15;
    public String description = "description required";
    public char colorCode = 'U';
    public double price = 25.0;
    public int quantityInStock = 0;

    //Methods
    public void displayShirtInformation() {
        System.out.println("Shirt ID: " + shirtID);
        System.out.println("description: " + description);
        System.out.println("Color Code: " + colorCode);
        System.out.println("Shirt price: " + price);
        System.out.println("Quantity in stock: " + quantityInStock);
    } 
}
