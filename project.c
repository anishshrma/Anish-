#include <stdio.h>

//Function decalartion//

int registation();
int rule();
int issue();


int main()
{


    printf("Enter 1 to register vehicle\n");
    printf("Enter 2 to see traffic rule\n");
    printf("Enter 3 to report any issue\n");

    int a;
    printf("enter any number");
    scanf("%d", &a);
    if (a == 1)
        registation();
    else if (a == 2)
        rule();
    else if (a == 3)
        issue();
    else
        printf("back");
}
int registation()
{
    //for vehical registation//

    int vehicleNumber, phoneNumber;
    char ownerName[20], vehicalType[10];
    printf("enter vehical number:\n");
    scanf("%d", &vehicleNumber);
    printf("Enter Vehicle Owner's Name:\n");
    scanf(" %s", &ownerName);
    printf("enter phone number:\n");
    scanf("%d", &phoneNumber);
    printf("enter vehical type:\n");
    scanf(" %s", &vehicalType);
    printf("vehical number: %d\n", vehicleNumber);
    printf("owener name: %s\n", ownerName);
    printf("phone number :%d\n", phoneNumber);
    printf("vehical type: %s\n", vehicalType);
    return 0;
}
int rule()
{
    //Traffic rules//

    printf("1.If a vehicle is being looked into by the police, it will be updated on the online portal.\n");
    printf("2.No physical verification of documents is required. If the police need to suspend your driver's license, they can do so through the available online portals.\n");
    printf("3.According to the new traffic regulations, the driver's behaviour will be recorded and updated by the authorities in an online portal.\n");
    printf("4.Electronic challans will be issued for those who violate the traffic rules.\n");
    printf("5.According to the new traffic regulations, it is not mandatory to have copies of documents. You can carry a digital copy of all documents related to your vehicle.\n");
    return 0;
}
int issue()
{
    //Report any issue//

    printf("Call on the number 91499920\n");
    printf("email at abc@gmail.com\n");
    return 0;
}