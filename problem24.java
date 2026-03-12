import java.util.Scanner;
public class problem24 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int registration=scan.nextInt();
        int broadcast=scan.nextInt();
        int sponsor=scan.nextInt();
        int prize=scan.nextInt();
        int rent=scan.nextInt();
        int advertising=scan.nextInt();
        int Remain=registration+broadcast+sponsor-prize;
        int Tournament=Remain-rent-advertising;
        System.out.println("Remaining Tournament Fund="+Tournament);
        scan.close();
    }
}
