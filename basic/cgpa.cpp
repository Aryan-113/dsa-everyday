//  SS=96(9),OB=91(10),CS=90(9),EC=94(10),FPGA=87(9),IE=74(9)

#include<iostream>
using namespace std;

// ======= LAB COURSE FUNCTIONS =======

double CE_lab(int classtest, int sessional, int assignment){
    double CT = classtest;
    double SE = sessional * 1.2;
    double as = assignment;
    return (CT + SE + as) * 0.3;
}

double lpw(int file, int practical){
    double files = file * 0.6;
    return (files + practical) * 0.3;
}

// ======= TUTORIAL COURSE FUNCTIONS =======

double CE_tut(int classtest, int sessional, int assignment){
    double CT = classtest * 1.5;   // out of 20 → converted to 30
    double SE = sessional * 0.8;   // out of 50 → converted to 40
    double as = assignment;        // out of 30 → stays 30
    return (CT + SE + as) * 0.6;
}

// ======= COMMON FUNCTIONS =======

double SEE(int endsem){
    return endsem * 0.4;
}

void CGPA(double final_marks){
    if(final_marks >= 90)       cout << "your cgpa is 10" << endl;
    else if(final_marks >= 80)  cout << "your cgpa is 9" << endl;
    else if(final_marks >= 70)  cout << "your cgpa is 8" << endl;
    else if(final_marks >= 60)  cout << "your cgpa is 7" << endl;
    else                        cout << "your cgpa is below 7" << endl;
}

// ======= MAIN =======

int main(){
    int course_type;
    cout << "choose course type:\n";
    cout << "1. Lab course\n";
    cout << "2. Tutorial course\n";
    cin >> course_type;

    double CT, SE, AS, FILE, LPW, ENDSEM;
    double ce_val, lpw_val;

    if(course_type == 1){

        cout << "enter marks of class test: ";
        cin >> CT;
        cout << "enter marks of sessional: ";
        cin >> SE;
        cout << "enter marks of assignment: ";
        cin >> AS;
        cout << "enter marks of file: ";
        cin >> FILE;
        cout << "enter marks of practical: ";
        cin >> LPW;

        ce_val  = CE_lab(CT, SE, AS);
        lpw_val = lpw(FILE, LPW);

        cout << "ce component: "  << ce_val  << endl;
        cout << "lpw component: " << lpw_val << endl;

    }
    else if(course_type == 2){

        cout << "enter marks of class test (out of 20): ";
        cin >> CT;
        cout << "enter marks of sessional (out of 50): ";
        cin >> SE;
        cout << "enter marks of assignment (out of 30): ";
        cin >> AS;

        ce_val  = CE_tut(CT, SE, AS);
        lpw_val = 0;   // no lpw for tutorial

        cout << "ce component: " << ce_val << endl;

    }
    else{
        cout << "invalid course type\n";
        return 0;
    }

    int option;
    cout << "\nchoose option 1(for cgpa) and option 2(to calculate endsem marks)\n";
    cin >> option;

    if(option == 1){
        cout << "enter marks of endsem: ";
        cin >> ENDSEM;
        cout << "endsem: " << SEE(ENDSEM) << endl;

        double marks = ce_val + lpw_val + SEE(ENDSEM);
        cout << "the final marks: " << marks << endl;
        CGPA(marks);
    }

    else if(option == 2){
        double min_marks;
        double marks_req;
        int gpa;

        cout << "how much gpa you want? " << endl;
        cin >> gpa;

        switch(gpa)
        {
        case 7:
            min_marks = 60.01;
            marks_req = 2.5*(min_marks-ce_val-lpw_val);
            if(marks_req > 100)     cout << "Not achievable for 7 gpa\n";
            else if(marks_req < 0)  cout << "Already achieved 7 gpa!\n";
            else                    cout << "you need " << marks_req << " marks to score 7 gpa\n";

            min_marks = 70.01;
            marks_req = 2.5*(min_marks-ce_val-lpw_val);
            if(marks_req > 100)     cout << "Not achievable for 8 gpa\n";
            else if(marks_req < 0)  cout << "Already achieved 8 gpa!\n";
            else                    cout << "you need " << marks_req << " marks to score 8 gpa\n";
            break;

        case 8:
            min_marks = 70.01;
            marks_req = 2.5*(min_marks-ce_val-lpw_val);
            if(marks_req > 100)     cout << "Not achievable for 8 gpa\n";
            else if(marks_req < 0)  cout << "Already achieved 8 gpa!\n";
            else                    cout << "you need " << marks_req << " marks to score 8 gpa\n";

            min_marks = 80.01;
            marks_req = 2.5*(min_marks-ce_val-lpw_val);
            if(marks_req > 100)     cout << "Not achievable for 9 gpa\n";
            else if(marks_req < 0)  cout << "Already achieved 9 gpa!\n";
            else                    cout << "you need " << marks_req << " marks to score 9 gpa\n";
            break;

        case 9:
            min_marks = 80.01;
            marks_req = 2.5*(min_marks-ce_val-lpw_val);
            if(marks_req > 100)     cout << "Not achievable for 9 gpa\n";
            else if(marks_req < 0)  cout << "Already achieved 9 gpa!\n";
            else                    cout << "you need " << marks_req << " marks to score 9 gpa\n";

            min_marks = 90.01;
            marks_req = 2.5*(min_marks-ce_val-lpw_val);
            if(marks_req > 100)     cout << "you need " << marks_req << " marks to score 10 gpa\n";
            else if(marks_req < 0)  cout << "Already achieved 10 gpa!\n";
            else                    cout << "you need " << marks_req << " marks to score 10 gpa\n";
            break;

        case 10:
            min_marks = 90.01;
            marks_req = 2.5*(min_marks-ce_val-lpw_val);
            if(marks_req > 100)     cout << "Not achievable for 10 gpa\n";
            else if(marks_req < 0)  cout << "Already achieved 10 gpa!\n";
            else                    cout << "you need " << marks_req << " marks to score 10 gpa\n";
            cout << "10 is the highest gpa, no next gpa\n";
            break;

        default:
            cout << "enter correct gpa\n";
            break;
        }
    }

    else{
        cout << "invalid option entered\n";
    }

    return 0;
}