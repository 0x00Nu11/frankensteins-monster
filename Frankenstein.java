import java.io.IOException;
import java.io.InputStream;
import java.util.Scanner;

public class Frankenstein {
    public static void main(String[] args) {
        try {
            String[] shellCommand = {"python", "frank.py"};
            InputStream shellIn = Runtime.getRuntime().exec(shellCommand).getInputStream();
            try (Scanner scanner = new Scanner(shellIn).useDelimiter("\\A")) {
                String shellOut = scanner.hasNext()?scanner.next():"";
                System.out.println(shellOut);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}