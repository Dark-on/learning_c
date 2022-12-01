#include <stdio.h>
#include <stdint.h>


union Packet {
	uint32_t packetValue;
	struct{
		uint32_t crc      :2;
		uint32_t status   :1;
		uint32_t payload :12;
		uint32_t bat      :3;
		uint32_t sensor   :3;
		uint32_t longAddr :8;
		uint32_t shortAddr:2;
		uint32_t addrMode :1;
	} packetField;
};


void wait_user_input(void);


int main(void){
	union Packet packet;
	printf("Enter the 32bit packet value:");
	scanf("%X", &packet.packetValue);

	printf("crc       :%#X\n", packet.packetField.crc);
	printf("status    :%#X\n", packet.packetField.status);
	printf("payload   :%#X\n", packet.packetField.payload);
	printf("bat       :%#X\n", packet.packetField.bat);
	printf("sensor    :%#X\n", packet.packetField.sensor);
	printf("longAddr  :%#X\n", packet.packetField.longAddr);
	printf("shortAddr :%#X\n", packet.packetField.shortAddr);
	printf("addrMode  :%#X\n", packet.packetField.addrMode);

	wait_user_input();
	return 1;
}


void wait_user_input(void){
	printf("\nPress enter key to exit the application");
	while(getchar() != '\n'){
		// wait for user input
	}
	getchar();
}
