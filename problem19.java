import java.util.Scanner;
public class problem19 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int rentaldays=scan.nextInt();
        int rent=scan.nextInt();
        int late=scan.nextInt();
        int fuel=scan.nextInt();
        int maintaince=scan.nextInt();
        int cost=(rentaldays*rent)+late;
        int profit=cost-fuel-maintaince;
        System.out.println("Net Profit="+profit);
        scan.close();
    }
}
