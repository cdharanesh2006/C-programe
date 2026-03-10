import java.util.Scanner;
public class problem2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        float baseCost = scan.nextFloat();
        int extraGB = scan.nextInt();
        int ratePerGB = scan.nextInt();
        float tax = scan.nextFloat();
        float extraCharge = extraGB * ratePerGB;
        float taxAmount = (baseCost + extraCharge) * tax / 100;
        float totalBill = baseCost + extraCharge + taxAmount;
        System.out.println("Total Bill = " + totalBill);
        scan.close();
    }
}