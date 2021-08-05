class Student {
    int roll = 0;
    String name = "";
    public Student(int roll, String name) {
        this.roll = roll;
        this.name = name;
    }
}
public class HelloWorld{
     public static void main(String []args){
        Student[] arr;
        
        arr = new Student[2];
        
        arr[0] = new Student(1,"ash");
        arr[1] = new Student(2,"fode");

        for(int i = 0; i<2; i++) {
            System.out.println(arr[i].roll+arr[i].name);
        }

     }
}
