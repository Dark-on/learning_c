#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10


typedef struct{
	int rollNumber;
	char name[100];
	char branch[50];
	char dob[15];
	int semister;

} STUDENT_INFO_t;


void add_record(
		STUDENT_INFO_t * const pStudents,
		int const maxStudents);

void display_all(STUDENT_INFO_t const * pStudent, int const maxStudents);

int findCellIndex(
		STUDENT_INFO_t * const pStudents,
		int const maxStudents,
		int const rollNumber);

void delete_record(STUDENT_INFO_t * const pStudents, int const maxStudents);


STUDENT_INFO_t students[MAX_STUDENTS];

int main(void){
	printf("Student record management program\n");
	int option, run = 1;
	while (run){
		printf("Display all records -->1\n"
				"Add new record      -->2\n"
				"Delete a record     -->3\n"
				"Exit application    -->0\n"
				"Enter your option here: ");
		scanf("%d", &option);
		switch(option){
			case 1:
				printf("Displaying all students record\n");
				display_all(students, MAX_STUDENTS);
				break;
			case 2:
				add_record(students, MAX_STUDENTS, 0);
				break;
			case 3:
				printf("Delete a record\n");
				delete_record(students, MAX_STUDENTS);
				break;
			case 0:
				run = 0;
		} // switch
	} // while
	return 0;
}

void display_all(STUDENT_INFO_t const * pStudent, int const maxStudents){
	int isntAnyRecords = 0;
	printf("**********************");
	for(unsigned int i = 0; i < maxStudents; i++, pStudent++){
		if (pStudent->rollNumber){
			printf("\nrollNumber  : %d\n", pStudent->rollNumber);
			printf("studentSemister : %d\n", pStudent->semister);
			printf("studentDOB      : %s\n", pStudent->dob);
			printf("studentBranch   : %s\n", pStudent->branch);
			printf("studentName     : %s\n", pStudent->name);
		}else{
			isntAnyRecords++;
		}
	}
	if (isntAnyRecords == maxStudents){
		printf("No records found");
	}
	printf("**********************\n");
}

void add_record(
		STUDENT_INFO_t * const pStudents,
		int const maxStudents){
	printf("Add a new record\n");
	printf("Enter the rollNumber : ");

	int rollNumberBuffer = 0;
	scanf("%d", &rollNumberBuffer);

	/*Avoid duplication of a record*/
	if (findCellIndex(pStudents, maxStudents, rollNumberBuffer) >= 0){
		printf("Roll number already exist\n"
				"Record adding failed\n");
		return;
	}

	int freeCellIndex = findCellIndex(pStudents, maxStudents, 0);
	if (freeCellIndex < 0){
		printf("No space to add a new record\n");
		return;
	}
	pStudents[freeCellIndex].rollNumber = rollNumberBuffer;

	printf("Enter the studentSemister : ");
	scanf("%d", &(pStudents[freeCellIndex].semister));

	getchar();
	printf("Enter the DOB(mm/dd/yyyy) : ");
	scanf("%[^\n]s", pStudents[freeCellIndex].dob);

	getchar();
	printf("Enter the studentBranch : ");
	scanf("%[^\n]s", pStudents[freeCellIndex].branch);

	getchar();
	printf("Enter the studentName : ");
	scanf("%[^\n]s", pStudents[freeCellIndex].name);

	printf("Record added successfully\n");
}

int findCellIndex(
		STUDENT_INFO_t * const pStudents,
		int const maxStudents,
		int const rollNumber){

	for(unsigned int i = 0; i < maxStudents; i++){
		if (pStudents[i].rollNumber == rollNumber){
			return i;
		}
	}
	return -1;

}

void delete_record(STUDENT_INFO_t * const pStudents, int const maxStudents){

	int rollNumber;
	printf("Enter the roll number of the student: ");
	scanf("%d", &rollNumber);

	int cellIndex = findCellIndex(pStudents, maxStudents, rollNumber);
	if (0 <= cellIndex && cellIndex < maxStudents){
		pStudents[cellIndex].rollNumber = 0;
		pStudents[cellIndex].semister = 0;

//
//		for(unsigned int i = 0; i < strlen(pStudents[cellIndex].name); i++){
//			(pStudents[cellIndex].name)[i] = 0;
//			if (i < strlen(pStudents[cellIndex].branch)){
//				(pStudents[cellIndex].branch)[i] = 0;
//				if (i < strlen(pStudents[cellIndex].dob)){
//					(pStudents[cellIndex].dob)[i] = 0;
//				}
//			}
//		}


		unsigned int i;
		for(i = 0; i < strlen(pStudents[cellIndex].dob); i++)
		{
		    (pStudents[cellIndex].name)[i]   = 0;
		    (pStudents[cellIndex].branch)[i] = 0;
		    (pStudents[cellIndex].dob)[i]    = 0;
		}
		for(i = strlen(pStudents[cellIndex].dob); i < strlen(pStudents[cellIndex].branch); i++){
			(pStudents[cellIndex].name)[i]   = 0;
			(pStudents[cellIndex].branch)[i] = 0;
		}
		for(i = strlen(pStudents[cellIndex].branch); i < strlen(pStudents[cellIndex].name); i++){
			(pStudents[cellIndex].name)[i]   = 0;
		}

	}else{
		printf("Record not found\n");
	}
}
