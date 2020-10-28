public class Fibbo {

    public static long fibonacci(long number) {
        if ((number == 0) || (number == 1))
            return number;
        else
            return fibonacci(number - 1) + fibonacci(number - 2);
    }

    public static void main(String[] args) {
        int counter = 30;
        System.out.printf("Fibonacci of %d is: %d\n",counter, fibonacci(counter));
    }
}
