import java.util.Scanner;
public class problem5 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int totalBill=scan.nextInt();
        int service=scan.nextInt();
        int gst=scan.nextInt();
        int numberOfPeople=scan.nextInt();
        int total=totalBill+service+gst;
        int splitbill=total/numberOfPeople;
        System.out.println("Amount Per Person:"+splitbill);
        scan.close();
    }
}
