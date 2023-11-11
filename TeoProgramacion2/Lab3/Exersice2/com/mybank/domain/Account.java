package com.mybank.domain;

public class Account {

    private double Balance;

    public Account(double Balance) {
        this.Balance = Balance;
    }

    public void deposit(double amt) {
        Balance = Balance + amt;
    }
    
    public void withdraw(double amt) {
        if (amt <= Balance) {
            Balance = Balance - amt;
        }
    }
    
    public double getBalance() {
        return Balance;
    }
}
