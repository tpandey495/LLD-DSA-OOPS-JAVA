package Builder;

public class Person {
    private String firstName;
    private String lastName;
    private int age;
    private String address;

    // Private constructor to enforce the use of Builder
    private Person(Builder builder) {
        this.firstName = builder.firstName;
        this.lastName = builder.lastName;
        this.age = builder.age;
        this.address = builder.address;
    }

    public String getFirstName() {
        return firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public int getAge() {
        return age;
    }

    // Builder class for Person
    public static class Builder {
        private String firstName;
        private String lastName;
        private int age;
        private String address;

        // Mandatory parameters in the constructor
        public Builder(String firstName, String lastName) {
            this.firstName = firstName;
            this.lastName = lastName;
        }

        public Builder age(int age) {
            this.age = age;
            return this;
        }

        public Builder address(String address) {
            this.address = address;
            return this;
        }

        // Build method to create the final Person object
        public Person build() {
            return new Person(this);
        }
    }
}
