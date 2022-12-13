public class Main {
    public static int divide(int A, int B) {
        int negativeCount = 0;
        long A1 = Math.abs(A);
        long B1 = Math.abs(B);
        long temp = 0;
        long quotient = 0;
        for(int i=31; i>0; i--) {
            if(temp +(B1<<i)<=A1) {
                temp = temp + (B1<<i);
                quotient = quotient + (1<<i);
            }
        }
        if(negativeCount==0 || negativeCount==2) {
            return (int)quotient;
        }
        else {
            return -1;
        }
    }
    
    public static void main(String[] args) {
        int A = 37;
        int B = 4;
        System.out.println(divide(A,B));
    }
}