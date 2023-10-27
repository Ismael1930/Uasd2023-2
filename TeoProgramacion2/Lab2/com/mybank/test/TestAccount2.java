package com.mybank.test;

import com.mybank.domain.Account;

public class TestAccount2 {
    public static void main(String[] args) {

        Account account = new Account(100);
        account.deposit(47);
        account.withdraw(150);
        System.out.println("Balance: " + account.getBalance());
    }
}
