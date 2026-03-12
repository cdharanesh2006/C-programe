import java.util.Scanner;
public class problem21 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int maintain=scan.nextInt();
        int parking=scan.nextInt();
        int hall=scan.nextInt();
        int security=scan.nextInt();
        int electricity=scan.nextInt();
        int cleaning=scan.nextInt();
        int Balence=maintain+parking+hall-security;
        int Remain=Balence-electricity-cleaning;
        System.out.println("Rmaining Balence="+Remain);
        scan.close();
    }
}
