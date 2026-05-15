import java.util.Scanner;
public class program2 {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your marks:");
        int mark=sc.nextInt();
        if (mark>=90){
            System.out.println("Grade A");
        }else if(mark>=80){
            System.out.println("Garde B");
        }else if (mark>=60){
            System.out.println("Grade C");
        }else if (mark>=50){
            System.out.println("Fail");
        }else {
            System.out.println("Invalid");
        }
        sc.close();
    }
}
