import java.util.Scanner;
public class problem17 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int hours=scan.nextInt();
        int rate=scan.nextInt();
        int design=scan.nextInt();
        int testing=scan.nextInt();
        int advance=scan.nextInt();
        int payble=(hours*rate)+design;
        int Final=payble+testing-advance;
        System.out.println("Final Project Cost="+Final);
        scan.close();
    }
}
