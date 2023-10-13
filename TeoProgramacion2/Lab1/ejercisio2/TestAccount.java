public class TestAccount {
    public static void main(String[] args) {
        Account account = new Account(100);
        account.deposit(50);
        account.withdraw(147);
        System.out.println("Balance: " + account.getBalance());
    }
}
