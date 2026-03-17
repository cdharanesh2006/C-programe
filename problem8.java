import java.util.*;

public class problem8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int age = sc.nextInt();
        int idProof = sc.nextInt();

        System.out.println((age >= 18 && idProof == 1) ? 
        "Entry Allowed" : "Entry Denied");
    }
}