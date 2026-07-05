# College Management System (Scenario Based)

A college wants to develop a software system to manage students enrolled in different courses.

Every student has the following information:

- Student ID
- Student Name
- Course Name
- Semester

There are two types of students in the college:

- Undergraduate Student (UG Student)
- Postgraduate Student (PG Student)

Both student types calculate their tuition fees differently.

The college also wants to ensure that students' personal information cannot be modified directly from outside the class.

---

## (a) Encapsulation (5 Marks)

Explain how **Encapsulation** can be applied in the above system.

Your answer should include:

1. A brief explanation of encapsulation in the context of the College Management System.
2. A Java class that protects student data using:
    - `private` instance variables
    - Public getter methods
    - Public setter methods (where appropriate)

---

## (b) Inheritance (5 Marks)

Show how **Inheritance** can be used in the following class hierarchy.

```text
                Student
                   ▲
        ┌──────────┴──────────┐
        │                     │
    UGStudent            PGStudent
```

Your answer should include:

1. The `Student` base class.
2. `UGStudent` and `PGStudent` classes extending `Student`.
3. A brief explanation of why inheritance is useful in this scenario.

---

## (c) Polymorphism (5 Marks)

Both `UGStudent` and `PGStudent` calculate tuition fees differently.

Demonstrate **Method Overriding** by implementing the `calculateFee()` method in both child classes.

Also explain:

- What is runtime polymorphism?
- How runtime polymorphism works in this College Management System.

---

## (d) Abstraction (5 Marks)

Every student in the system must implement the following operation:

```java
calculateFee();
```

Demonstrate **Abstraction** using **either**:

- An **Abstract Class**, **OR**
- An **Interface**

Your answer should include:

1. The implementation using your chosen approach.
2. A brief explanation of why abstraction is useful in this scenario.