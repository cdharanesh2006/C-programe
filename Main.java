import java.util.Scanner;
public class Main{
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int basic=scan.nextInt();
        int hra=scan.nextInt();
        int bonus=scan.nextInt();
        int tax=scan.nextInt();
        int pf=scan.nextInt();
        int takehomesalary=basic+hra+bonus-tax-pf;
        System.out.println("Take Home Salary="+takehomesalary);
        scan.close();        
    }

}