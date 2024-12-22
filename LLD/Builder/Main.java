package Builder;

public class Main {
    public static void main(String[] args) {
        Person person1=new Person.Builder("John","Doe").age(25).address("123 com.example.myproject.Main st").build();
        //Accessing the attributes of the created Person Object
        System.out.println("First Name"+person1.getFirstName());
        System.out.println("Last Name"+person1.getLastName());
        System.out.println("Age"+person1.getAge());

    }
}
