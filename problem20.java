import java.util.Scanner;
public class problem20 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int ads=scan.nextInt();
        int sponser=scan.nextInt();
        int affiate=scan.nextInt();
        int tax=scan.nextInt();
        int production=scan.nextInt();
        int Income=ads+sponser+affiate;
        int Final=Income-tax-production;
        System.out.println("Final Youtube Income="+Final);
        scan.close();
    }
}
