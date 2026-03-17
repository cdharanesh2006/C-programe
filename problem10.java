import java.util.*;

public class problem10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int unitsConsumed = sc.nextInt();
        int voltageFluctuation = sc.nextInt();

        System.out.println((unitsConsumed > 500 || voltageFluctuation == 1) ? 
        "Alert Triggered" : "Normal Usage");
    }
}