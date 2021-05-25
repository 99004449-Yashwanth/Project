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


void addDiagnosisFees(int test_code)
{
    switch (test_code)
    {
    case 1:
        bill = bill + 1500;
        break;
    case 2:
        bill += 10000;
        break;
    case 3:
        bill = bill + 1500;
        break;
    case 4:
        bill += 10000;
        break;
    case 5:
        bill = bill + 1500;
        break;
    case 6:
        bill += 10000;
        break;
    default:
        bill = 0;
        break;
    }
}