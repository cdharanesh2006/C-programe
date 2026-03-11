import java.util.Scanner;
public class problem10 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int daysWorked=scan.nextInt();
        int wagePerDay=scan.nextInt();
        int overtimeBonus=scan.nextInt();
        int maintenCharge=scan.nextInt();
        int total=(daysWorked*wagePerDay)+overtimeBonus;
        int FinalWeeklyWage=total-maintenCharge;
        System.out.println("Final Weekly Wage="+FinalWeeklyWage);
        scan.close();
    }
}
