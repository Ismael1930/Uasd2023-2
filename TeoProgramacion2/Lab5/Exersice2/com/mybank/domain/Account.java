package com.mybank.domain;

public class Account {

    private double Balance;

    public Account(double Balance) {
        this.Balance = Balance;
    }

    public Boolean deposit(double amt) {
        Balance = Balance + amt;
        return true;
    }
    
    public Boolean withdraw(double amt) {
        if (amt <= Balance) {
            Balance = Balance - amt;
            return true;
        }
        return false;
    }
    
    public double getBalance() {
        return Balance;
    }
}
