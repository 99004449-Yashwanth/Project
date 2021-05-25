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

void departmentType()
{
    printf("Select the department : \n");
    printf("1 - Reception\n2 - Pharmacy\n3 - Diagnosis\n0 - Exit\n");
    printf("Department Code : ");
    scanf("%d", &department);
    printf("\n");
    switch (department)
    {
    case 1:
        printf("---------\n");
        printf("Reception\n");
        printf("---------\n");
        reception();
        break;
    case 2:
        printf("---------\n");
        printf("Pharmacy\n");
        printf("---------\n");
        pharmacy();
        break;
    case 3:
        printf("---------\n");
        printf("Diagnosis\n");
        printf("---------\n");
        diagnosis();
        break;
    case 0:
        printf("Exit...");
        exit(1);
        break;
    default:
        printf("Invalid!!! Enter Again...\n");
        departmentType();
    }
}