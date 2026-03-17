import java.util.*;

public class problem15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int signalValue = sc.nextInt();
        int toggleMask = sc.nextInt();

        int toggled = signalValue ^ toggleMask;

        System.out.println("Toggled Signal = " + toggled);
        sc.close();
    }
}