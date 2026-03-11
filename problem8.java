import java.util.Scanner;
public class problem8 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in); 
        int roomCharge=scan.nextInt();
        int days=scan.nextInt();
        int medicineCost=scan.nextInt();
        int labFess=scan.nextInt();
        int insuranceCoverage=scan.nextInt();
        int total=(roomCharge * days) + medicineCost;
        int total2=total+labFess-insuranceCoverage;
        System.out.println("Payble Amount="+total2);
        scan.close(); 
    }
}
