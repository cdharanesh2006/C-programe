import java.util.Scanner;
public class problem6 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
         double distance = scan.nextDouble();
        double mileage = scan.nextDouble();
        double fuelPrice = scan.nextDouble();
        double tollCharge = scan.nextDouble();
        double fuelNeeded = distance / mileage;
        double fuelCost = fuelNeeded * fuelPrice;
        double totalCost = fuelCost + tollCharge;
        System.out.println("Total Trip Cost = " + (int)totalCost);
        scan.close();
    }
    
}
