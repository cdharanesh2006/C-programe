import java.util.Scanner;
public class problem16 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int genPass=scan.nextInt();
        int genFar=scan.nextInt();
        int acPass=scan.nextInt();
        int acFare=scan.nextInt();
        int platform=scan.nextInt();
        int maintainence=scan.nextInt();
        int fuel=scan.nextInt();
        int total=(genPass*genFar)+(acPass*acFare)+platform;
        int railway=total-maintainence-fuel;
        System.out.println("Net Railway Revenue="+railway);
        scan.close();
    }
}
