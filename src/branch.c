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

// int bill;
// int branch_code = 0;
// char branchName[40] = " ";

void branch()
{
    bill = 0;
    
    printf("Select a Branch >>>\n");
    printf("_______________\n");
    printf("1 - Jubliee Hills\n2 - Ring Road\n3 - Mehdipatnam\n4 - Secundrabad\n5 - Tirumalgiri\n0 - Exit\n");

    printf("Branch Code : ");
    scanf("%d", &branch_code);
    printf("\n");

    switch (branch_code)
    {
    case 1:
        strcpy(branchName, "Jubliee Hills");
        break;
    case 2:
        strcpy(branchName, "Ring Road");
        break;
    case 3:
        strcpy(branchName, "Mehdipatnam");
        break;
    case 4:
        strcpy(branchName, "Secundrabad");
        break;
    case 5:
        strcpy(branchName, "Tirumalagiri");
        break;
    case 0:
        printf("Exit...\n");
        exit(1);
        break;
    default:
        printf("Invalid!!! Enter Again...\n");
        branch();
        break;
    }

    printf("%s", branchName);
    printf("\n-----------------------------------------\n");
    departmentType();
}