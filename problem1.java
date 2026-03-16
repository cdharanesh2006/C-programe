import java.util.Scanner;

public class OnlineExamPass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int theory = sc.nextInt();
        int practical = sc.nextInt();
        double avg = (theory + practical) / 2.0;
        System.out.println("Result = " + 
            (((theory >= 50) && (practical >= 50) && (avg >= 60)) ? "PASS" : "FAIL"));
        sc.close();
    }
}