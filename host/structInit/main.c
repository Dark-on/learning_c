#include <stdio.h>
#include <stdint.h>


void wait_for_user_input(void);

struct carModel{
	unsigned int carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void){

	struct carModel carBMW = {2021, 15000, 220, 1330};
	struct carModel carFord = {4031, 35000, 160, 1900.96};
	struct carModel carHonda = {.carPrice=20000, .carWeight=1999};

	printf("Details of car BMW is as follows\n");
	printf("Car Number = %u\n", carBMW.carNumber);
	printf("Car Price = %u\n", carBMW.carPrice);
	printf("Car Max Speed = %u\n", carBMW.carMaxSpeed);
	printf("Car Weight = %f\n", carBMW.carWeight);

	carFord.carWeight = 2000;

	printf("\nDetails of car Ford is as follows\n");
	printf("Car Number = %u\n", carFord.carNumber);
	printf("Car Price = %u\n", carFord.carPrice);
	printf("Car Max Speed = %u\n", carFord.carMaxSpeed);
	printf("Car Weight = %f\n", carFord.carWeight);

	printf("\nSizeof of the struct carModel = %u\n", sizeof(struct carModel));
	printf("\nSizeof of the struct carModel = %u\n", sizeof(carBMW));

	wait_for_user_input();
	return 1;
}

void wait_for_user_input(void){
	printf("\nPress enter key to exit the application");
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
}
