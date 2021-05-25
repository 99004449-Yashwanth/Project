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

const char *diagnosisType()
{
    printf("_______________________\n");
    printf("Select a Diagnosis Test\n");
    printf("_______________________\n");
    printf("1 - CT Scan\n2 - Eye Test\n3 - X-Ray\n4 - Hearing Test\n5 - MRI Scan\n6 - Covid Test\n7 - Nil\n");
    printf("_______________________\n");
    int x;
    printf("Diagnosis Test Code : ");
    scanf("%d", &x);
    addDiagnosisFees(x);
    switch (x)
    {
    case 1:
        return "CT Scan";
        break;

    case 2:
        return "Eye Test";
        break;

    case 3:
        return "X-Ray";
        break;

    case 4:
        return "Hearing Test";
        break;

    case 5:
        return "MRI Scan";
        break;

    case 6:
        return "Covid Test";
        break;

    case 7:
        return "Nil";
        break;

    default:
        printf("Invalid!!! Enter Again...\n");
        diagnosisType();
        break;
    }
}
