#include "crypto_wallet.h"

cw_t *cw;
/**
 * @brief Initializes wallet
 * @param user_id
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef Wallet_Init(cw_t* new_cw)
{
    cw = new_cw;
    return CW_OK;
}

/**
 * @brief Function gets username and password and checks whether this user is registered
 * @param None
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef Identificate_User()
{
    return CW_OK;
}

/**
 * @brief Gets string from command line
 * @param None
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef Get_String()
{
    return CW_OK;
}

/**
 * @brief Parses string *command* to *option* and *argument*
 * @param user_id
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef Parse_String(char * command, char * option, char * argument)
{
    return CW_OK;
}

/**
 * @brief Shows the list of allowed users
 * @param None
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef Show_Allowed_Users()
{
    return CW_OK;
}

/**
 * @brief Call the editor for list of users
 * @param None
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef  Edit_Allowed_Users()
{
    return CW_OK;
}

/**
 * @brief Gets a hash sum from mcu
 * @param None
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef Get_Hash_Sums()
{
    return CW_OK;
}

/**
 * @brief Gets a sugnature key from mcu
 * @param None
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef Get_Signature_Key()
{
    return CW_OK;
}

/**
 * @brief Deletes signature key identificated via id
 * @param None
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef Delete_Signature_Key(uint8_t id)
{
    return CW_OK;
}

/**
 * @brief Prints that the user was wrong and restarts the program
 * @param None
 * @return CW_StatusTypeDef
 */
CW_StatusTypeDef Wrong_User_Handler()
{
    return CW_OK;
}

