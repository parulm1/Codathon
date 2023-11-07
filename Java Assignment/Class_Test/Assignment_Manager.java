package Class_Test;

import java.util.*;
import java.time.LocalDate;

class Student
{
    public String name;
    public int prnNo;

    public Student(String name,int prnNo)
    {
        this.name = name;
        this.prnNo = prnNo;
    } 
    void Student_Info()
    {
        System.out.println("Student Name : "+name);
        System.out.println("Student PRN no. : "+prnNo);
    }
}
class Trainer
{
    private final String name;
    
    public Trainer(String name)
    {
        this.name = name;
    }
    void Trainer_Name()
    {
        System.out.println("Trainer Name : "+name);
    }
}
class Assignee 
{
    String name;
    int prn ;
    
    public Assignee()
    {
        this.name=name;
        this.prn=prn;           
    }

    @Override
    public String toString() 
    {
        return "Student Name = " + name + ", Student PRN = " + prn ;
    }   
}
class Assignment 
{
    private String Title;
    LocalDate Date=LocalDate.now();
    private String Description;
    private Assignee assiggnee;
    
    public Assignment(String Title,int Date,String Description,Assignee assignee)
    {
        this.Title = Title;
        this.Description = Description;
        this.assiggnee = assignee;
    }
    void Assignment_Details()
    {
        System.out.println("Title : "+Title);
        System.out.println("Date : "+Date);
        System.out.println("Description : "+Description);
        System.out.println("Assignee : "+assiggnee);
    }    
}
public class Assignment_Manager 
{
    public static void main(String[] args) 
    {
        Map<String, Integer> Assignment = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter Student Name And PRN ");
        Student stud=new Student(sc.next(),sc.nextInt());
        stud.Student_Info();
        
        System.out.println("\nEnter Trainer Name ");
        Trainer T=new Trainer(sc.next());
        T.Trainer_Name();
        
        Assignee ass=new Assignee();
        System.out.println("\nEnter Title  And Description");
        Assignment A=new Assignment(sc.next(), 0, sc.next(),ass);
        A.Assignment_Details();
        
        while (true)
        {
            System.out.println("\nAssignment Management System");
            System.out.println("1. Create Assignment");
            System.out.println("2. Add Assignment To Collection");
            System.out.println("3. Show Assignments");
            System.out.println("4. Save Assignments To File");
            System.out.println("5. Load Assignment To File");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");

            int choice = sc.nextInt();
            sc.nextLine();

            switch (choice) 
            {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    System.out.println("Exiting the program.");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}
