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

FILE *fp, *ft;

// struct contact
// {
//     long long ph;
//     long uID;
//     int age;
//     long long adhaar;
//     int delete;

//     char name[20], branch[30], diagnosis[50], medicine[100], appointment[100];

// } list;

void delete_record(int unique_ID)
{
    fflush(stdin);

    fp = fopen("contact.dll", "r");

    ft = fopen("temp.dat", "w");

    while (fread(&list, sizeof(list), 1, fp) != 0)

        if (unique_ID == list.uID)

            list.delete = 1;
    printf("%d\n", list.delete);

    fwrite(&list, sizeof(list), 1, ft);

    fclose(fp);

    fclose(ft);

    remove("contact.dll");

    rename("temp.dat", "contact.dll");
}