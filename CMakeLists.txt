cmake_minimum_required(VERSION 3.17)
project(AssginmentOne_CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(Account.cppp)
include_directories(CarbonFootPrint.cpp)
include_directories(RationalNumber.cppp)

add_executable(AssginmentOne_CPP
        "Account.cppp/Account Inheritance main.cpp"
        Account.cppp/Account.cpp
        Account.cppp/Account.h
        Account.cppp/CheckingAccount.cpp
        Account.cppp/CheckingAccount.h
        Account.cppp/SavingsAccount.cpp
        Account.cppp/SavingsAccount.h
        CarbonFootPrint.cpp/Bicycle.cpp
        CarbonFootPrint.cpp/Bicycle.h
        CarbonFootPrint.cpp/Building.cpp
        CarbonFootPrint.cpp/Building.h
        CarbonFootPrint.cpp/Car.cpp
        CarbonFootPrint.cpp/Car.h
        "CarbonFootPrint.cpp/CarbonFootprint main.cpp"
        CarbonFootPrint.cpp/CarbonFootprint.h
        "RationalNumber.cppp/Rational main.cpp"
        RationalNumber.cppp/RationalNumber.cpp
        RationalNumber.cppp/RationalNumber.h)
