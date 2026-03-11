import java.util.Scanner;
public class problem9 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int deliveries=scan.nextInt();
        int payout=scan.nextInt();
        int incentive=scan.nextInt();
        int fuelCost=scan.nextInt();
        int earnings=(deliveries*payout)+incentive;
        int Netearnings=earnings-fuelCost;
        System.out.println("Driver Earnings="+Netearnings);
        scan.close();

    }
}
