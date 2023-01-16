#include <stdio.h>

#define MAX_STUDENTS 10


typedef struct{
	int rollNumber;
	char name[100];
	char branch[50];
	char dob[15];
	int semister;

} STUDENT_INFO_t;

STUDENT_INFO_t students[MAX_STUDENTS];

int main(void){
	return 0;
}

void display_all(STUDENT_INFO_t const * pStudent, int const maxStudents){
	int isntAnyRecords = 0;
	printf("**********************");
	for(unsigned int i = 0; i < maxStudents; i++, pStudent++){
		if (pStudent){
			isntAnyRecords++;
		}else{
			printf("\nrollNumber  : %d\n", pStudent->rollNumber);
			printf("studentSemister : %d\n", pStudent->semister);
			printf("studentDOB      : %s\n", pStudent->dob);
			printf("studentBranch   : %s\n", pStudent->branch);
			printf("studentName     : %s\n", pStudent->name);
		}
	}
	if (isntAnyRecords == maxStudents){
		printf("No records found");
	}
	printf("**********************");
}

void add_record(
		STUDENT_INFO_t * const pStudents,
		int const maxStudents,
		int const freeCellIndex){
	printf("Add a new record\n");
	printf("Enter the rollNumber : ");
	/*TODO: Maybe better push the address of free cell, not the index*/

	int rollNumberBuffer = 0;
	scanf("%d", &rollNumberBuffer);
	/*Avoid dublication of a record*/
	for(unsigned int i = 0; i < maxStudents; i++){
		if(rollNumberBuffer == pStudents[i]){
			printf("Dublication of a record");
			return;
		}
	}
	pStudents[freeCellIndex].rollNumber = rollNumberBuffer;

	printf("\nEnter the studentSemister : ");
	scanf("%d", &(pStudents[freeCellIndex].semister));

	printf("\nEnter the DOB(mm/dd/yyyy) : ");
	scanf("%d", &(pStudents[freeCellIndex].dob));

	/*TODO add ablility of scan few words*/
	printf("\nEnter the studentBranch : ");
	scanf("%s", &(pStudents[freeCellIndex].branch));

	printf("\nEnter the studentName : ");
	scanf("%s", &(pStudents[freeCellIndex].name));
	printf("\nRecord added successfully\n");
}
