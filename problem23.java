import java.util.Scanner;
public class problem23 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int weight=scan.nextInt();
        int rate=scan.nextInt();
        int priority=scan.nextInt();
        int insurance=scan.nextInt();
        int handling=scan.nextInt();
        int fuel=scan.nextInt();
        int Revenue=(weight*rate)+priority+insurance;
        int Cargo=Revenue-handling-fuel;
        System.out.println("Cargo Revenue="+Cargo);
        scan.close();
    }
}
