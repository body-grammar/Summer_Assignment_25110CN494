#include <stdio.h>

struct Patient
{
    int id;
    char name[50];
    int age;
    char disease[50];
    char doctor[50];
    int roomNo;
};

struct Patient patients[100];
int count = 0;

void addPatient() {
    printf("Enter the id of the patient: ");
    scanf("%d", &patients[count].id);

    printf("Enter the patient's name: ");
    scanf("%s", patients[count].name);

    printf("Enter the patient's age: ");
    scanf("%d", &patients[count].age);

    printf("Enter the disease: ");
    scanf("%s", patients[count].disease);

    printf("Enter the doctor's name: ");
    scanf("%s", patients[count].doctor);

    printf("Enter the room number: ");
    scanf("%d", &patients[count].roomNo);

    count++;

    printf("Patient added successfully!\n");
}

void displayPatients() {
    for(int i = 0; i < count; i++) {
        printf("ID: %d\n", &patients[i].id);
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", &patients[i].age);
        printf("Disease: %s\n", patients[i].disease);
        printf("Doctor: %s\n", patients[i].doctor);
        printf("Room: %d\n", &patients[i].roomNo);
    }
}

void searchPatient() {
    int iD;
    int found = 0;

    printf("Enter the id of the patient to be searched: ");
    scanf("%d", &iD);

    for(int i = 0; i < count; i++) {
        if(patients[i].id == iD) {
            printf("Name: %s\n", patients[i].name);
            printf("Age: %d\n", &patients[i].age);
            printf("Disease: %s\n", patients[i].disease);
            printf("Doctor: %s\n", patients[i].doctor);
            printf("Room: %d\n", &patients[i].roomNo);
            found = 1;
        }
    }

    if(found == 0) {
        printf("No record found!\n");
    }
}

void updatePatient() {
    int iD;
    int found = 0;

    printf("Enter the id of the patient to be updated: ");
    scanf("%d", &iD);

    for(int i = 0; i < count; i++) {
        if(patients[i].id == iD) {
            printf("Enter the id of the patient: ");
            scanf("%d", &patients[i].id);

            printf("Enter the patient's name: ");
            scanf("%s", patients[i].name);

            printf("Enter the patient's age: ");
            scanf("%d", &patients[i].age);

            printf("Enter the disease: ");
            scanf("%s", patients[i].disease);

            printf("Enter the doctor's name: ");
            scanf("%s", patients[i].doctor);

            printf("Enter the room number: ");
            scanf("%d", &patients[i].roomNo);

            found = 1;
        }
    }

    if(found = 0) {
        printf("Enter a valid ID.\n");
    }
}

void deletePatient() {
    int found = -1;
    int iD;

    printf("Enter the id of the patient to be deleted: ");
    scanf("%d", &iD);

    for(int i = 0; i < count; i++) {
        if(patients[i].id == iD) {
            found = i;
            break;
        }
    }

    if(found == -1) {
        printf("Record not found!\n");
    } else {
        for(int i = found; i < count; i++) {
            patients[i] = patients[i+1];
        }

        count--;
        printf("Record deleted successfully!\n");
    }
}

void countPatients() {
    printf("Total patients: %d\n", count);
}

void oldestPatient() {
    if(count == 0) {
        printf("No patient records found!\n");
        return;
    }

    int oldest = 0;

    for(int i = 1; i < count; i++) {
        if(patients[i].age > patients[oldest].age) {
            oldest = i;
        }
    }

    printf("\nOldest Patient Details: \n");
    printf("ID: %d\n", &patients[oldest].id);
    printf("Name: %s\n", patients[oldest].name);
    printf("Age: %d\n", &patients[oldest].age);
    printf("Disease: %s\n", patients[oldest].disease);
    printf("Doctor: %s\n", patients[oldest].doctor);
    printf("Room: %d\n", &patients[oldest].roomNo);
}

int main() {
    // Write a program to develop a complete mini project using strings, arrays and functions

    int choice;

    do {
        printf("\nHOSPITAL MANAGEMENT SYSTEM\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patients\n");
        printf("4. Update Patients\n");
        printf("5. Delete Patient\n");
        printf("6. Count Patients\n");
        printf("7. Display Oldest Patient\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addPatient();
            break;

        case 2: 
            displayPatients();
            break;

        case 3: 
            searchPatient();
            break;

        case 4: 
            updatePatient();
            break;

        case 5: 
            deletePatient();
            break;

        case 6: 
            countPatients();
            break;

        case 7:
            oldestPatient();
            break;

        case 8:
            printf("Exiting...\n");
            break;
        
        default:
            break;
        }
    } while(choice != 8);

    return 0;
}