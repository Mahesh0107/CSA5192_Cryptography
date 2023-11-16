#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ROUNDS 16
#define KEY_SIZE 64

void des_key_schedule(unsigned char key[KEY_SIZE], unsigned char subkeys[NUM_ROUNDS][48]);
void des_encrypt(unsigned char plaintext[8], unsigned char ciphertext[8], unsigned char subkeys[NUM_ROUNDS][48]);
void des_decrypt(unsigned char ciphertext[8], unsigned char plaintext[8], unsigned char subkeys[NUM_ROUNDS][48]);

int main() {

 
  unsigned char plaintext[8] = {0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0};


  unsigned char ciphertext[8]; 

   
  unsigned char key[KEY_SIZE] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef};

  
  unsigned char subkeys[NUM_ROUNDS][48];
  des_key_schedule(key, subkeys);

  
  des_encrypt(plaintext, ciphertext, subkeys);


  printf("Ciphertext: ");
  for(int i=0; i<8; i++) {
    printf("%02x ", ciphertext[i]);
  }

  
  des_decrypt(ciphertext, plaintext, subkeys);
  
  
  printf("\nDecrypted plaintext: ");
  for(int i=0; i<8; i++) {
    printf("%02x ", plaintext[i]);
  }

  return 0;
}


void des_key_schedule(unsigned char key[KEY_SIZE], unsigned char subkeys[NUM_ROUNDS][48]) {


}


void des_encrypt(unsigned char plaintext[8], unsigned char ciphertext[8], unsigned char subkeys[NUM_ROUNDS][48]) {

}

 
void des_decrypt(unsigned char ciphertext[8], unsigned char plaintext[8], unsigned char subkeys[NUM_ROUNDS][48])
 {
 }
