import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    int [] array = new int[9];

    for (int i=0 ;i<9 ; i++) {array[i] = sc.nextInt();}
    int biggest = array[0];
    int index = 0;

    for (int i=0 ;i<9 ; i++){
      if (array[i] > biggest){
        biggest = array[i];
        index = i;
      }
    }

    System.out.println(biggest);
    System.out.println(index+1);
    
    sc.close();
  }
}
