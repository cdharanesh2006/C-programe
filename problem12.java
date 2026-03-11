import java.util.Scanner;
public class problem12{
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int ticketRevenue=scan.nextInt();
        int snackRevenue=scan.nextInt();
        int maintainence=scan.nextInt();
        int electricity=scan.nextInt();
        int total=(ticketRevenue+snackRevenue)-maintainence;
        int NetProfit=total-electricity;
        System.out.println("Net Profit="+NetProfit);
        scan.close();
    }
}