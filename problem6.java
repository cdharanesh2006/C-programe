import java.util.*;

public class problem6 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int familyIncome = scan.nextInt();
        int percentage = scan.nextInt();

        System.out.println((familyIncome < 200000 && percentage >= 75) ? 
        "Scholarship Granted" : "Scholarship Not Granted");
    }
}