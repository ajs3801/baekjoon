import java.util.Scanner;

class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    int initNum = sc.nextInt();
    int num = initNum;
    int firstNum = gettens(initNum);
    int secondNum = getunits(initNum);

    int sum=firstNum+secondNum;
    int newnum = -1;
    int newnumleft = 0;
    int newnumright = 0;

    int count = 0;

    while (compare(initNum,newnum)){
      if (num>=10){
        firstNum = gettens(num);
        secondNum = getunits(num);
      }

      else{
        firstNum = 0;
        secondNum = num;
      }
      sum = firstNum + secondNum;
      newnumleft = secondNum;
      newnumright = getunits(sum);
      newnum = makeInteger(newnumleft, newnumright);
      num = newnum;

      count++;
    }
    System.out.println(count);
    
    sc.close();
  }
  
  public static int makeInteger(int tens, int units){
    return (tens*10 + units);
  }
  public static int gettens(int Num){
    return (Num/10);
  }

  public static int getunits(int Num){
    return (Num%10);
  }

  public static boolean compare(int initNum, int newnum){
    if (initNum == newnum) {return false;}
    else {return true;}
  }
}
