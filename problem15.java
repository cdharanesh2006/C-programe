import java.util.Scanner;
public class problem15 {
    public static void main(String [] args){
        Scanner scan=new Scanner(System.in);
        int roomsBooked=scan.nextInt();
        int priceOerRoom=scan.nextInt();
        int serviceCharges=scan.nextInt();
        int commission=scan.nextInt();
        int result=(roomsBooked * priceOerRoom)+serviceCharges;
        int TotalRevenue=result-commission;
        System.out.println("Toytal Revenue="+TotalRevenue);
        scan.close();
    }

}
