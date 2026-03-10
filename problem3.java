import java.util.Scanner;
public class problem3 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int tuitionFees = scan.nextInt();
        int scholarship = scan.nextInt();
        int examFee = scan.nextInt();
        int libraryFee = scan.nextInt();
        int studentscholership=(scholarship*tuitionFees)/100;
        int finalFee = tuitionFees - studentscholership+ examFee + libraryFee;
        System.out.println("Final Payble Fee="+finalFee);
        scan.close();
    }
}