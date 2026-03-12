import java.util.Scanner;
public class problem25 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int resUsage=scan.nextInt();
        int resRate=scan.nextInt();
        int comUsage=scan.nextInt();
        int comRate=scan.nextInt();
        int connection=scan.nextInt();
        int penalty=scan.nextInt();
        int maintainence=scan.nextInt();
        int treatment=scan.nextInt();
        int Revnue=(resUsage*resRate)+(comUsage*comRate)+connection;
        int Water=Revnue+penalty-maintainence-treatment;
        System.out.println("Net Water Revenue="+Water);
        scan.close();
    }
}
