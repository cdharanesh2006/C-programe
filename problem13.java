import java.util.*;

public class problem13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int connectionValue = sc.nextInt();
        int applianceMask = sc.nextInt();

        int result = connectionValue & applianceMask;

        System.out.println((result > 0) ? "Appliance Active" : "Appliance Inactive");
    }
}