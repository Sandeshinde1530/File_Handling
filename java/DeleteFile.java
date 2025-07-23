import java.io.File;
import java.io.IOException;
import java.util.*;

class ReadFile
{
    public static void main(String Args[])
    {
        File fobj = new File("Demo.txt");

        if(fobj.delete())
        {
            System.out.println("I have deleted : " + fobj.getName());
        }
        else
        {
            System.out.println("Unable to perform  this operation");
        }
    }
}