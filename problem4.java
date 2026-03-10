import java.util.Scanner;

public class GrocerySales {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double sales = sc.nextDouble();
        double discount = sc.nextDouble();
        double gst = sc.nextDouble();
        double discountAmount = (sales * discount) / 100;
        double afterDiscount = sales - discountAmount;
        double gstAmount = (afterDiscount * gst) / 100;
        double finalRevenue = afterDiscount + gstAmount;
        System.out.println("Final Revenue = " + finalRevenue);
        sc.close();
    }
}