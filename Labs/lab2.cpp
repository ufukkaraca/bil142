#include <iostream>

using namespace std;

class Student{
    private:
    double studentNo, labGrades[6], midterm, final, yeg;

    public:
    void setstudentNo(double s){
        studentNo=s;
        return;
    }
    double getstudentNo(){
        return studentNo;
    }

    void setlabGrades(double labGrade, int labNumber){
        labGrades[labNumber]=labGrade;
        return;
    }
    double getlabGrades(int labNumber){
        return labGrades[labNumber];
    }

    void setMidterm(double grade){
        midterm=grade;
        return;
    }
    double getMidterm(){
        return midterm;
    }

    void setFinal(double grade){
        final=grade;
        return;
    }
    double getFinal(){
        return final;
    }

    double GetAverageLabGrade(){
        double tot=0;
        for(int i=0; i<6; i++)
            tot+=labGrades[i];
        
        double avg=tot/(double)6;
        return avg;
    }

    double ComputeYearEndGrade(){
        double tot=0;
        for(int i=0; i<6; i++)
            tot+=labGrades[i];
        
        double avg=tot/(double)6;

        double yeg= ((25*avg)/100) + ((35*midterm)/100) + ((40*final)/100);
        return yeg;
    }

    friend void compareStudents(Student, Student);
    friend double ComputeYearEndCurve(Student[]);
    
};

void compareStudents(Student std1, Student std2){

    if(std1.getstudentNo()==std2.getstudentNo()){
        cout<<"The two are the same person!";
        return;
    }

    if(std1.ComputeYearEndGrade() > std2.ComputeYearEndGrade())
        cout<<"Student 1 is more successful than Student 2.";
    
    else if(std1.ComputeYearEndGrade()==std2.ComputeYearEndGrade())
        cout<<"They both share the same level of success.";
    
    else
        cout<<"Student 2 is more successful than Student 1";
}

double ComputeYearEndCurve(Student* whole){
    double curve;
    double grade1=whole[0].ComputeYearEndGrade();
    double grade2=whole[1].ComputeYearEndGrade();


    curve= (grade1+grade2)/2;

    
    return curve;
}

int main(){
    Student std1, std2;
    Student curveBuds[] = {std1, std2};

    std1.setstudentNo(1);
    std2.setstudentNo(2);

    for(int i=0; i<6; i++)
        std1.setlabGrades(100, i);

    for(int i=0; i<6; i++)
        std2.setlabGrades(90, i);

    std1.setFinal(100);
    std2.setFinal(90);

    std1.setMidterm(100);
    std2.setMidterm(90);

    compareStudents(std1, std2);

    ComputeYearEndCurve(curveBuds);

    return 0;

}