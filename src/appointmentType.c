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

// char d[][20] = {"Diarrheal - ", "Ear - ", "Eyes - ", "Dental - ", "Skin - ", "COVID - ", "Nil"};
// char e[][30] = {"Dr. Satish", "Dr. Kumar", "Dr. Reddy", "Dr. Singh", "Dr. Patel", "Dr. Khanna", "Nil"};

const char *appointmentType()
{
    printf("________________\n");
    printf("Select Appointment\n");
    printf("________________\n");
    printf("1 - Diarrheal\n2 - Ear\n3 - Eyes\n4 - Dental\n5 - Skin\n6 - COVID\n7 - Nil\n0 - Exit\n");
    printf("________________\n");
    int x, i ;

    printf("Purpose Code : ");
    scanf("%d", &x);
    addDoctorFees(x);

    if (x != 0)
    {

        x = x - 1;

        strcat(d[x], e[x]);

        return d[x];
    }

    if (x == 0)
    {
        printf("Exit...\n");
        return "Nil";
        //i = 0;
    }

    if (x < 0 || x > 7)
    {
        printf("Invalid!!! Enter Again...\n");
        appointmentType();
    }
}