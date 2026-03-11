import java.util.Scanner;
public class problem14 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int baseSalry=scan.nextInt();
        int sessions=scan.nextInt();
        int payPerSession=scan.nextInt();
        int Bonus=scan.nextInt();
        int maintainfee=scan.nextInt();
        int calculate=baseSalry+(sessions*payPerSession);
        int Salary=calculate+Bonus-maintainfee;
        System.out.println("Final Salary="+Salary);
        scan.close();

    }
}
