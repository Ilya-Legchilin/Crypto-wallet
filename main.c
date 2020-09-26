#include <stdio.h>
#include "crypto_wallet.h"
#include "misc.h"
#include "log.h"


int main() {
    user_t current_user;
    cw_t cw_instance;
    if (Identificate_User(&current_user) != CW_OK){
        Wrong_User_Handler();
        return 0;
    }
    cw_instance.user = current_user;
    Wallet_Init(&cw_instance);
    while (1){
        Get_String();
        if (Parse_String(command, option, argument) != CW_ERROR){
            if (str_str(command, "show allowed users")){
                Show_Allowed_Users();
                continue;
            }
            if (str_str(command, "edit allowed users")){
                Edit_Allowed_Users();
                continue;
            }
            if (str_str(command, "get hash sums")){
                Get_Hash_Sums();
                continue;
            }
            if (str_str(command, "get signature key")){
                Get_Signature_Key();
                continue;
            }
            if (str_str(command, "delete")){
                id = str_to_int(argument);
                Delete_Signature_Key(id);
                continue;
            }
            if (str_str(command, "quit")){
                return 0;
            }
        }

    }
    return 0;
}
