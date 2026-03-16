import java.util.Scanner;

public class problem3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int workingHours = sc.nextInt();
        int attendancePercentage = sc.nextInt();

        String result = (workingHours > 40 && attendancePercentage > 90) 
                        ? "Eligible" 
                        : "Not Eligible";

        System.out.println(result);
    }
}