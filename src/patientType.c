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

void patientType()
{
    printf("1 - Old Patient\n2 - New Patient\n0 - Exit\n");
    printf("Patient Type : ");
    scanf("%d", &type);

    if (type == 1)
    {
        printf("Old Patient\n");

        search_record();
        //display all the details based on the unique ID
        //edit whatever needs to be edited like Doctor Appointment, Medical Record, Diagnosis
    }
    else if (type == 2)
    {
        printf("New Patient\n");
        printf("Generating New UniqueID..........\n");
        uniqueID();

        //take all details
        //name
        //adhaar number
        //emergency contact
    }
    else if (type == 0)
    {
        printf("Exit...\n");
        exit(1);
    }
    else
    {
        printf("Invalid!!! Enter Again...\n");
        patientType();
    }
}