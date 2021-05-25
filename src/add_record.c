#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>
#include <dos.h>

#include "../inc/branch.h"
#include "../inc/uniqueID.h"
#include "../inc/patientType.h"
#include "../inc/departmentType.h"
#include "../inc/add_record.h"
#include "../inc/edit_record.h"
#include "../inc/search_record.h"
#include "../inc/delete_record.h"
#include "../inc/diagnosisType.h"
#include "../inc/medicineType.h"
#include "../inc/appointmentType.h"
#include "../inc/reception.h"
#include "../inc/pharmacy.h"
#include "../inc/pharmacy2.h"
#include "../inc/pharmacy_search.h"
#include "../inc/diagnosis.h"
#include "../inc/diagnosis_search.h"
#include "../inc/addDoctorFees.h"
#include "../inc/addDiagnosisFees.h"
#include "../inc/addPharmaFees.h"
#include "../inc/del_med.h"
#include "../inc/hms.h"


void add_record()
{
    fp = fopen("contact.dll", "a");

    //fflush(stdin);

    printf("Name : ");

    scanf("%[^\n]", &list.name);

    if (stricmp(list.name, "") == 0 || stricmp(list.name, " ") == 0)

        fflush(stdin);

    list.uID = unique_ID;
    printf("Unique ID : %ld\n", list.uID);

    fflush(stdin);

    printf("Age : ");

    scanf("%d", &list.age);

    fflush(stdin);

    printf("Adhaar : ");

    scanf("%lld", &list.adhaar);

    fflush(stdin);

    printf("Phone : ");

    list.ph = ph_num;
    printf("%lld", list.ph);
    printf("\n");

    fflush(stdin);

    strcpy(list.appointment, appointmentType());

    printf("Appointment : %s\n", list.appointment);

    fflush(stdin);

    strcpy(list.diagnosis, diagnosisType());

    printf("Diagnosis : %s\n", list.diagnosis);

    fflush(stdin);

    strcpy(list.medicine, medicineType());

    printf("Medicine : %s\n", list.medicine);

    fflush(stdin);

    printf("Home Branch : ");

    strcpy(list.branch, branchName);
    printf("%s\n", list.branch);

    printf("\n");

    fwrite(&list, sizeof(list), 1, fp);

    fclose(fp);

    printf("Appointment Booked\n");
    printf("\nBill Amount = %d\n", bill);
    branch();
}
