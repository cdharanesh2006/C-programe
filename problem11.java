import java.util.Scanner;
public class problem11 {
    public static void main(String []args){
        Scanner scan=new Scanner(System.in);
        int distance=scan.nextInt();
        int ratePerKm=scan.nextInt();
        int maintainence=scan.nextInt();
        int driverAllowence=scan.nextInt();
        int subsidy=scan.nextInt();
        int total=(distance*ratePerKm)+maintainence;
        int TransportFee=total+driverAllowence-subsidy;
        System.out.println("Total Transport Fee="+TransportFee);
        scan.close();
    }
}
