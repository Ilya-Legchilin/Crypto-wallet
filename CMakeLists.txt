cmake_minimum_required(VERSION 3.17)
project(Crypto_Wallet C)

set(CMAKE_C_STANDARD 11)

add_executable(Crypto_Wallet main.c crypto_wallet.h crypto_wallet.c misc.h misc.c log.h)