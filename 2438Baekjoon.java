import java.util.Scanner;

class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    int loopNum = sc.nextInt();

    for (int i=1 ; i<=loopNum ; i++){
      for (int j=0 ; j<i ; j++){
        System.out.print("*");
      }
      System.out.print('\n');
    }

    sc.close();
  }
}
