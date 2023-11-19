package com.mybank.domain;

public class Bank {

    private Customer[] customers;
    private int numberOfCustomers;

    public Bank() {
        customers = new Customer[10];
        numberOfCustomers = 0;
    }

    public void addCustomer(String firstName, String lastName) {
        int i = numberOfCustomers++;
        customers[i] = new Customer(firstName, lastName);
    }

    public int getNumOfCustomers() {
        return numberOfCustomers;
    }

    public Customer getCustomer(int customerIndex) {
        return customers[customerIndex];
    }

}
