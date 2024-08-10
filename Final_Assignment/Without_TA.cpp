#include<iostream>
using namespace std;

class Person{ //creating a class for person;
protected: //members of the class are in protected access modifier;
    string name;
    int age;
    string gender;

public:
    Person(){ //empty constructor for person class;
        name = "Invalid name."; //declaring the default values of variables;
        age=0;
        gender="Invalid gender.";
        cout<<"Person Class."<<endl;}
    Person(string n,int a,string g){ //parameterized constructor for person class
    name = n;
    age = a;
    gender = g;

    }
    void setName(string n){ //setter method for name;
          name = n;
    }
    string getName(){return name;} //getter method for name;

    void setAge(int a){ //setter method for age;
       if(a>0){age = a;}
       else {a = 0;}
    }
    int getAge(){return age;} //getter method for age;

    void setGender(string g){ //setter method for gender;
        gender = g;
    }
    string getGender(){return gender;} //getter method for gender;

    void personGetInfo(){ //method for inputing the variables;
        string n;
        int a;
        string g,bg;
        cout<<"What is your name? ";
        cin>>n;
        cout<<"What is your age? ";
        cin>>a;
        cout<<"What is your gender? ";
        cin>>g;

        setName(n); //initializing the inputed variables within setter method;
        setAge(a);
        setGender(g);
    }
    void personShowInfo(){ //method for showing the inputed variables;
       cout<<"Name: "<<getName()<<endl; //the variables are displayed from getter method;
       cout<<"Age: "<<getAge()<<endl;
       cout<<"Gender: "<<getGender()<<endl;
    }
};

class Student:virtual public Person{//creating a Student class which will inherit the public person class;
protected:  //the new variables of student class are declared in protected access modifier;
    string id;
    int totalcredit;
    string subject;
public:
    Student(){ //empty constructor for student which have also have access;
    id = "Invalid id";  //to empty constructor of person;
    totalcredit= 0;
    subject = "Invalid subject";
    cout<<"Student class."<<endl;
    }
    Student(string n,int a,string g, string i,int credit,string sub): Person(n,a,g){//parameterized constructor of student which
    id = i;                                         //will inherit the parameterized constructor of student
    totalcredit = credit;
    subject = sub;
    }

    void setId(string i){ //setter method for id;
    id = i;
    }
    string getId(){return id;} //getter method for id;

    void setTotalcredit(int credit){ //setter method for credit;
       if(credit>=0) {totalcredit = credit;}
       else cout<<"Invalid Credit.";
    }
    int getTotalcredit(){return totalcredit;} //getter method for credit;

    void setSubject(string sub){ //setter method for subject;
        subject = sub;
    }
    string getSubject(){return subject;} //getter method for subject;

    void studentGetInfo(){ //method for inputing the variables of Student class;
        string i;
        int credit;
        string sub;
        personGetInfo();
        cout<<"What is your ID: ";
        cin>>i;
        cout<<"What is your completed credit : ";
        cin>>credit;
        cout<<"What is your subject : ";
        cin>>sub;

        setId(i);//initializing the variables of student class in setter method
        setTotalcredit(credit);
        setSubject(sub);
    }

    void studentShowInfo(){ //method for displaying the inputed variables

        personShowInfo();
        cout<<"ID: "<<getId()<<endl; //the variables will be displayed from getter method;
        cout<<"Credit Completed : "<<getTotalcredit()<<endl;
        cout<<"Subject : "<<getSubject()<<endl;
}

};

class Graduated: public Student{ //creating a graduated class which will inherit the public student class;
protected: //the new variables of graduated class are declared in protected access modifier
    float cgpa;
public: //public access modifier for graduated class
    Graduated():Student(){
        cgpa=0;
        cout<<"Graduated class."<<endl;
        }
    Graduated(string n,int a,string g, string i,int credit,string sub,float cg):Student(n,a,g,i,credit,sub),Person(n,a,g){ //parameterized constructor for graduated class
    cgpa = cg;
    }

    void setCgpa(float cg){ //setter method for cgpa;
       cgpa = cg;
    }
    float getCgpa(){return cgpa;} //getter method for cgpa;

    void graduatedGetInfo(){ //method for initializing the variables of graduated class;
        float cg;
        studentGetInfo(); //calling the method for initializing the variables from student class;
        cout<<"What is your Cgpa? : ";
        cin>>cg;
        setCgpa(cg); //initializing the inputed variables in setter method;
    }
    void gradutedShowInfo(){ //method for showing the inputed variables;
    studentShowInfo(); //calling the method for displaying the variables from student class
    cout<<"Cgpa : "<<getCgpa(); //displaying the variables from getter method;
        }
};

class Employee:virtual public Person{ //creating a Employee class which will inherit the person class

protected: //New variables of Employee class declared within protected access modifier
    int salary;
    int workhour;
public:
    Employee():Person(){ //empty constructor of Employee class also have access to empty constructor
    salary =0;            //of person class and declaring the default values of the variables;
    workhour = 0;
    cout<<"Employee class."<<endl;
    }
    Employee(string n,int a,string g,int sal,int hour):Person(n,a,g){ //parameterized constructor for the Employee class which will
    salary = sal;                    //have access to parameterized constructor of Person class;
    workhour = hour;
    }

   void setSalary(int sal){ //setter method for Salary;
      salary = sal;
   }
   int getSalary(){return salary;} //getter method for salary;

   void setWorkhour(int hour){ //setter method for hour;
   workhour=hour;
   }
   int getWorkhour(){return workhour;} //getter method for hour;


    void employeeGetInfo(){ //method for initializing the variables of Employee class;
        int sal,hour;
        personGetInfo(); //method of initializing the variables from Person class;
        cout<<"What is your salary in TK? :";
        cin>>sal;
        cout<<"How many hours do you work:? ";
        cin>>hour;

        setSalary(sal);  //taking the inputed variables within setter method;
        setWorkhour(hour);
     }

    void employeeShowInfo(){ //method for displaying the variables of Employee class;
        personShowInfo(); //method for displaying the variables from Person class;
        cout<<"Salary : "<<getSalary()<<" TK"<<endl;
        cout<<"Working Time : "<<getWorkhour()<<" Hours."<<endl;
    }
};

class Officer:public Employee{ //Creating a Officer class which will inherit the Employee class;

protected: //declaring the new variables of Employee class within protected access modifier
    string raank;
public:
    Officer():Employee(){//Empty constructor for Officer class which will inherit the
       raank = "Invalid Rank."; // declaring the default value of variable;
        cout<<"Officer class."<<endl;
         }
    Officer(string n,int a,string g,int sal,int hour,string r):Employee(n,a,g,sal,hour),Person(n,a,g){ //Parameterized constructor of the Officer class.
     raank = r;
    }

    void setRaank(string r){ //Setter method for raank variable;
         raank = r;
    }
    string getRaank(){ //getter method for raank variable;
       return raank;
    }

    void officerGetInfo(){ // method for initializing the values of variables;
       string r;
       employeeGetInfo(); // method of initializing the values from employee class;
       cout<<"What is your rank : ";
       cin>>r;
       setRaank(r);
    }
    void officerShowInfo(){ //method for displaying the variables;
      employeeShowInfo();
      cout<<"Rank: "<<getRaank();
    }

};

class Faculty: public Employee{ // creating a Faculty which will inherit the Employee class;

protected: // declaring the variables within protected access modifier;
    string department;
    string position;
public:
    Faculty():Employee(){ // Empty constructor for the Employee class;
       department = "Invalid department.";
       position = "Invalid position.";
       cout<<"Faculty class."<<endl;
    }
    Faculty(string n,int a,string g,int sal,int hour, string d,string p):Employee(n,a,g,sal,hour),Person(n,a,g){ // Parameterized constructor for the Employee class;
    department = d;
    position = p;
    }

    void setDepartment(string d){ //setter method for department variable;
        department = d;
    }
    string getDepartment(){ //getter method for department variable;
       return department;
    }

    void setPosition(string p){ //setter method for position variable;
        position = p;
    }
      string getPosition(){ //getter method for position variable;
          return position;
    }

    void facultyGetInfo(){ // method for initializing the variables;
        string d,p;
        employeeGetInfo(); //method for initializing the variables from Employee class;
        cout<<"What is your department: ";
        cin>>d;
        cout<<"What is your position: ";
        cin>>p;
        setDepartment(d);
        setPosition(p);
    }

    void facultyShowInfo(){ //method for displaying the variables;
       employeeShowInfo();
       cout<<"Department: "<<getDepartment()<<endl;
       cout<<"Position: "<<getPosition()<<endl;
    }

};





int main(){

/*This main function mainly contains creating the objects
for each class and calling the methods of inputing the info
    and displaying the info*/


Person p1;
p1.personGetInfo();
p1.personShowInfo();


Student s1;
s1.studentGetInfo();
s1.studentShowInfo();
Student s2;
s2.setName("Touhid");
s2.setAge(22);
s2.setGender("Male");
s2.studentShowInfo();
Officer o1;
o1.officerGetInfo();
o1.officerShowInfo();


Graduated g1;
g1.graduatedGetInfo();
g1.gradutedShowInfo();


Faculty f1;
f1.facultyGetInfo();
f1.facultyShowInfo();

return 0;
}

