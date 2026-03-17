import java.util.*;

public class problem7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int cartValue = sc.nextInt();
        int premiumMember = sc.nextInt();

        System.out.println((cartValue > 999 || premiumMember == 1) ? 
        "Free Shipping" : "Shipping Charges Applied");
    }
}
