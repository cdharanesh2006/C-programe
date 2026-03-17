
    import java.util.*;

public class problem9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int usernameMatch = sc.nextInt();
        int passwordMatch = sc.nextInt();
        int accountLocked = sc.nextInt();

        System.out.println((usernameMatch == 1 && passwordMatch == 1 && accountLocked != 1) ? 
        "Login Success" : "Login Failed");
    }
}

