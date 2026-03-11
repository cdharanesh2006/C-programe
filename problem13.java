import java.util.Scanner;
public class problem13 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int yieldPerAcre=scan.nextInt();
        int Acress=scan.nextInt();
        int extraYield=scan.nextInt();
        int damageCrops=scan.nextInt();
        int value=(yieldPerAcre * Acress)+extraYield;
        int Marketable=value-damageCrops;
        System.out.println("Marketable Yield="+Marketable);
        scan.close(); 

    }
}
