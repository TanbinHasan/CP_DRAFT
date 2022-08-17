import java.io.ByteArrayInputStream;
import java.io.CharArrayReader;
import java.io.IOException;
import java.util.*;

import javax.swing.text.html.HTMLDocument.RunElement;

public class Test {
  // main method
  public static void main(String[] args) {
    String obj = "csesec14thbatch";
    byte b[] = obj.getBytes();
    ByteArrayInputStream obj1 = new ByteArrayInputStream(b);
    for (int i = 0; i < 2; ++i) {
      int c;
      while ((c = obj1.read()) != -1) {
        if (i == 0) {
          System.out.print(Character.toUpperCase((char)c));
        }
      }
    }
    System.out.println(obj);
  }
}