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
				printf("Add a new record\n");
				add_record(students, MAX_STUDENTS, 0);
				break;
			case 3:
				printf("Delete a record\n");
				delete_record(students, MAX_STUDENTS);
				break;
			case 0:
				run = 0;
				break;
			default:
				printf("Unknown option\n");
		} // switch
	} // while
	return 0;
}

void display_all(STUDENT_INFO_t const * pStudent, int const maxStudents){
	int isRecords = 0;

	for(unsigned int i = 0; i < maxStudents; i++){
		if (pStudent[i].rollNumber){
			isRecords = 1;

			printf("**********************\n");
			printf("rollNumber      : %d\n", pStudent->rollNumber);
			printf("studentSemister : %d\n", pStudent->semister);
			printf("studentDOB      : %s\n", pStudent->dob);
			printf("studentBranch   : %s\n", pStudent->branch);
			printf("studentName     : %s\n", pStudent->name);
			printf("**********************\n");
	}
	if (!isRecords){
		printf("No records found");
	}
}


void add_record(
		STUDENT_INFO_t * const pStudents,
		int const maxStudents){

	printf("Enter the rollNumber : ");
	int rollNumberBuffer = 0;
	scanf("%d", &rollNumberBuffer);

	/*Avoid duplication of a record*/
	if (findCellIndex(pStudents, maxStudents, rollNumberBuffer) >= 0){
		printf("Roll number already exist\n"
				"Record adding failed\n");
		return;
	}
	/*Find free space in array for record*/
	int freeCellIndex = findCellIndex(pStudents, maxStudents, 0);
	if (freeCellIndex < 0){
		printf("No space to add a new record\n");
		return;
	}
	/*Scan and fill structure fields*/
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
	/*Find index of structure in array by given roll number of record*/
	for(unsigned int i = 0; i < maxStudents; i++){
		if (pStudents[i].rollNumber == rollNumber){
			return i;
		}
	}
	/*If did not find*/
	return -1;

}

void delete_record(STUDENT_INFO_t * const pStudents, int const maxStudents){
	/*Scan roll number*/
	int rollNumber;
	printf("Enter the roll number of the student: ");
	scanf("%d", &rollNumber);

	/*Find index of array by roll number of record*/
	int cellIndex = findCellIndex(pStudents, maxStudents, rollNumber);
	if (cellIndex <= 0){
		printf("Record not found\n");
		return;
	}
	/*Empty structure*/
	memset(&pStudents[cellIndex], 0, sizeof(STUDENT_INFO_t));
}
