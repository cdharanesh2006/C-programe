import java.util.Scanner;
public class problem22 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int copies=scan.nextInt();
        int cost=scan.nextInt();
        int editing=scan.nextInt();
        int design=scan.nextInt();
        int commision=scan.nextInt();
        int marketing=scan.nextInt();
        int Public=(copies*cost)+editing+design;
        int Profit=Public-commision-marketing;
        System.out.println("Publishing Profit="+Profit);
        scan.close();
    }
}
