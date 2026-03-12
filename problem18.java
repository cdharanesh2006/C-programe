import java.util.Scanner;
public class problem18 {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int registration=scan.nextInt();
        int sponsorship=scan.nextInt();
        int stall=scan.nextInt();
        int stage=scan.nextInt();
        int celebrity=scan.nextInt();
        int marketing=scan.nextInt();
        int payble=registration+sponsorship+stall-stage;
        int expense=payble-celebrity-marketing;
        System.out.println("Remaining Fund="+expense);
        scan.close();
    }
}
