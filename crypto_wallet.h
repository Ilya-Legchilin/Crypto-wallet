#ifndef CRYPTO_WALLET_CRYPTO_WALLET_H
#define CRYPTO_WALLET_CRYPTO_WALLET_H


#include <stdio.h>
#include "misc.h"
#include "stdint.h"


#define COMMAND_LENGTH 32
#define OPTION_LENGTH 32
#define ARGUMENT_LENGTH 32
#define USERNAME_LENGHT 32
#define PASSWORD_LENGHT 32
#define USERS_NUMBER 32
#define HASH_SUM_LEGNTH 32
#define SIGN_KEY_LEGNTH 32

typedef enum{
    ACCESS_ALLOWED,
    ACCESS_DENIED
} Access_StatusTypeDef;

typedef enum{
    CW_OK,
    CW_ERROR,
    CW_TIMEOT
} CW_StatusTypeDef;


typedef enum{
    PARSE_ERROR,
    PARSE_OK
} Parsing_StatusTypeDef;


typedef struct {
    char username[USERNAME_LENGHT];
    char password[PASSWORD_LENGHT];
} user_t;


typedef struct {
    uint8_t buffer[HASH_SUM_LEGNTH];
} hash_sum_t;


typedef struct {
    uint8_t buffer[SIGN_KEY_LEGNTH];
} signature_key_t;


typedef struct {
    signature_key_t sign_key;
    hash_sum_t hash_sum;
    user_t user;
} cw_t; //initial crypto_wallet structure. Some fields will be certainly added

user_t users_list[USERS_NUMBER];
char command[COMMAND_LENGTH];
char option[OPTION_LENGTH];
char argument[ARGUMENT_LENGTH];
uint8_t id;


CW_StatusTypeDef Wallet_Init(cw_t* new_cw);
CW_StatusTypeDef Identificate_User();
CW_StatusTypeDef Get_String();
CW_StatusTypeDef Parse_String(char * command, char * option, char * argument);
CW_StatusTypeDef Show_Allowed_Users();
CW_StatusTypeDef  Edit_Allowed_Users();
CW_StatusTypeDef Get_Hash_Sums();
CW_StatusTypeDef Get_Signature_Key();
CW_StatusTypeDef Delete_Signature_Key(uint8_t id);
CW_StatusTypeDef Wrong_User_Handler();


#endif //CRYPTO_WALLET_CRYPTO_WALLET_H
