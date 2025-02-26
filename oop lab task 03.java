/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.mavenproject1;

/**
 *
 * @author HP
 */
import java.util.Scanner;

class Department {
    private String departmentName;
    private String departmentHead;

    public Department() {
        System.out.println("hello, this is department class");
    }

    public Department(String departmentName, String departmentHead) {
        this.departmentName = departmentName;
        this.departmentHead = departmentHead;
    }

    public Department(Department dept) {
        this.departmentName = dept.departmentName;
        this.departmentHead = dept.departmentHead;
    }

    public void display(Student student) {
        System.out.println("\n--- Department Details ---");
        System.out.println("Department Name: " + departmentName);
        System.out.println("Department Head: " + departmentHead);
        System.out.println("\n--- Student Details ---");
        student.display();
    }
}

class Student {
    private String name;
    private int rollNumber;
    private Department department; 

    public Student() {
        System.out.println("hello, this is student class");
    }

    public Student(String name, int rollNumber, Department department) {
        this.name = name;
        this.rollNumber = rollNumber;
        this.department = new Department(department);
    }

    public Student(Student student) {
        this.name = student.name;
        this.rollNumber = student.rollNumber;
        this.department = new Department(student.department);
    }

    public void display() {
        System.out.println("Student Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
    }
}

public class Mavenproject1 { 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter Department Name: ");
        String deptName = scanner.nextLine();
        System.out.print("Enter Department Head: ");
        String deptHead = scanner.nextLine();

        Department department = new Department(deptName, deptHead);
        Department copiedDepartment = new Department(department);

        System.out.print("\nEnter Student Name: ");
        String studentName = scanner.nextLine();
        System.out.print("Enter Roll Number: ");
        int rollNumber = scanner.nextInt();
        scanner.nextLine(); 

        Student student = new Student(studentName, rollNumber, department);
        Student copiedStudent = new Student(student);

        copiedDepartment.display(copiedStudent);

        scanner.close();
    }
}
