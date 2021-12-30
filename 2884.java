import java.util.Scanner;

class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    int hour;
    int minute;

    hour = sc.nextInt();
    minute = sc.nextInt();

    if (minute - 45 < 0) {
      minute = 60 - (45 - minute);
      hour = hour - 1;

      if (hour < 0) {hour = 24 + hour;}
    }

    else {
      minute = minute - 45;
    }

    System.out.println(hour + " " + minute);
  }
}
