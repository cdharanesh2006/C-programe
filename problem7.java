import java.util.Scanner;
public class problem7 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        double rodsPerHour=scan.nextDouble();
        int hoursWorked=scan.nextInt();
        double overtimeRods=scan.nextDouble();
        double rejectRods=scan.nextDouble();
        double production=(rodsPerHour * hoursWorked)+overtimeRods;
        double Finalproduction=production-rejectRods;
        System.out.println("Usable Rods="+(int)Finalproduction);
        scan.close();
    }
}
