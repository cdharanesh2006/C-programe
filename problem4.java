import java.util.Scanner;

public class problem4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int creditLimit = sc.nextInt();
        int purchaseAmount = sc.nextInt();
        int cardBlocked = sc.nextInt();

        System.out.println(
            ((purchaseAmount <= creditLimit) && (cardBlocked == 0)) 
            ? "Approved" 
            : "Declined"
        );

        sc.close();
    }
}