//Encryption...............................

#include<stdio.h>

void encrypt(char *message);

int main(){
    char message[100];
    printf("Enter Your Message: ");
    fgets(message, 100,stdin );
    encrypt(message);
    printf("Your Encrypted Message is : %s", message);
    return 0;
}

void encrypt(char *message){
    char *ptr;
    ptr = message;
    for(int i = 0; *ptr != '\0'; i++){
        *ptr += 1;
        ptr++;
        
    }
}
// //Decryption...............
// #include<stdio.h>

// void decrypt(char *message);

// int main(){
//     char message[100];
//     printf("Enter Your Encrypted Message: ");
//     fgets(message, 100,stdin );
//     decrypt(message);
//     printf("Your Decrypted Message is : %s", message);
//     return 0;
// }

// void decrypt(char *message){
//     char *ptr;
//     ptr = message;
//     for(int i = 0; *ptr != '\0'; i++){
//         *ptr -= 1;
//         ptr++;
        
//     }
// }