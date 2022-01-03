import java.util.Scanner;

class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    int loopNum = sc.nextInt();
    
    for (int i=0 ; i<loopNum ; i++){
      for(int j=i ; j<(loopNum-1); j++) {System.out.print(" ");}
      for(int k=0 ; k<=i ; k++) {System.out.print("*");}
      System.out.print("\n");
    }

    sc.close();
  }
}
