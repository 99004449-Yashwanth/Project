#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>
#include <dos.h>
#include "inc/branch.h"
#include "inc/uniqueID.h"
#include "inc/patientType.h"
#include "inc/departmentType.h"
#include "inc/add_record.h"
#include "inc/edit_record.h"
#include "inc/search_record.h"
#include "inc/delete_record.h"
#include "inc/diagnosisType.h"
#include "inc/medicineType.h"
#include "inc/appointmentType.h"
#include "inc/reception.h"
#include "inc/pharmacy.h"
#include "inc/pharmacy2.h"
#include "inc/pharmacy_search.h"
#include "inc/diagnosis.h"
#include "inc/diagnosis_search.h"
#include "inc/addDoctorFees.h"
#include "inc/addDiagnosisFees.h"
#include "inc/addPharmaFees.h"
#include "inc/del_med.h"

struct contact
{
    long long ph;
    long uID;
    int age;
    long long adhaar;
    int delete;

    char name[20], branch[30], diagnosis[50], medicine[100], appointment[100];

} list;

long query;
long name;

FILE *fp, *ft;

int i, n, ch, l, found;
int x;
int bill;

int branch_code = 0;
long unique_ID = 0;
long long ph_num = 0;
int type = 0;
int department;
char branchName[40] = " ";

char m[][20] = {"Paracetmol - ", "Dolo650 - ", "Vitamin-D - ", "Cetirizine - ", "Amoxicillin - ", "Zincovita - ", "Nil"};
char q[][3] = {"1", "2", "3", "4", "5", "6"};

char d[][20] = {"Diarrheal - ", "Ear - ", "Eyes - ", "Dental - ", "Skin - ", "COVID - ", "Nil"};
char e[][30] = {"Dr. Satish", "Dr. Kumar", "Dr. Reddy", "Dr. Singh", "Dr. Patel", "Dr. Khanna", "Nil"};


//branch function
void branch();

//uniqueID function to generate UniqueID
//this function will be used only incase of new patient
void uniqueID();

void patientType();

void departmentType();

// void menuType();

void add_record();

void list_record();

void edit_record(long);

void search_record();

void delete_record(long);

const char *diagnosisType();

const char *medicineType();

const char *appointmentType();

void reception();

void pharmacy();

int pharmacy2();

void pharmacy_search();

void diagnosis();

void diagnosis_search();

void addDoctorFees(int);

void addDiagnosisFees(int);

void addPharmaFees(int, int);

void del_med();

int main()
{
    printf("\n\n--------------------------------------------------\n");
    printf("*******WWelcome to Hospital Management System******\n");
    printf("--------------------------------------------------\n\n");

    branch();

    return 0;
}