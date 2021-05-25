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


void uniqueID()
{
    printf("Phone Number(10 Digit) : ");
    scanf("%lld", &ph_num);
    printf("\n");
    // int count = 0;

    // while(ph_num!=0){
    //     ph_num/=10;
    //     ++count;
    // }


    long temp = 0;

    temp = ph_num % 100000;

    unique_ID = (((long)branch_code * 100000) + temp);
    printf("UniqueID : %ld\n", unique_ID);
    printf("New UniqueID Generated!!!\n");
    add_record();
}