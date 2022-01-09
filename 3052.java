//https://www.acmicpc.net/problem/3052
//3052번
import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    int count = 0;
    int[] numberSet = new int[42];

    int[] numArray = new int[10];
    for (int i=0 ; i<10 ; i++) {
      numArray[i] = sc.nextInt();
      numArray[i] = numArray[i]%42;
      numberSet[numArray[i]]++;
    }

    for (Integer i:numberSet) {if (i!=0) {count++;}}

    System.out.println(count);
    sc.close();
  }
}
