abstract class Student{
    private int studentId;
    private String studentName;
    private String courseName;
    private int semester;
    abstract int calculateFee();

    Student(int studentId,String studentName,String courseName,int semester){
        this.studentId = studentId;
        this.studentName = studentName;
        this.courseName = courseName;
        this.semester = semester;
    }
};

class UgStudent extends Student {
    UgStudent(int id,String name,String course,int sem){
        super(id,name,course,sem);
    }

    @Override
   int  calculateFee(){
        return 5000;
    }
};

class PgStudent extends Student{

    PgStudent(int id,String name,String course,int sem){
        super(id,name,course,sem);
    }


    @Override
    int calculateFee(){
       return 10000;
    }

};

public class  Main {
    public static void main(String[] args) {
        UgStudent ugs = new UgStudent(1, "Tarun", "Mern", 8);
        System.out.println(ugs.calculateFee());
    }
}
