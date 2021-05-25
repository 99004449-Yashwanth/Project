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

void edit_record(long unique_ID)
{
    fp = fopen("contact.dll", "r");

    ft = fopen("temp.dat", "w");

    while (fread(&list, sizeof(list), 1, fp) == 1)

    {

        if (unique_ID == list.uID)

            fwrite(&list, sizeof(list), 1, ft);
    }

    //fflush(stdin);

    printf("\n\nEditing '%ld'\n\n", query);

    //fflush(stdin);

    strcpy(list.appointment, appointmentType());

    printf("Appointment Updated : %s\n", list.appointment);

    //fflush(stdin);

    strcpy(list.diagnosis, diagnosisType());

    printf("Diagnosis Updated : %s\n", list.diagnosis);

    //fflush(stdin);

    strcpy(list.medicine, medicineType());

    printf("Medicine Updated : %s\n", list.medicine);

    printf("\nBill Amount = %d\n", bill);

    fwrite(&list, sizeof(list), 1, ft);

    fclose(fp);

    fclose(ft);

    remove("contact.dll");

    rename("temp.dat", "contact.dll");

    branch();
}