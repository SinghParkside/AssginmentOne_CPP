################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Bicycle.cpp \
../Building.cpp \
../Car.cpp \
../CarbonFootprint\ main.cpp \
../CarbonFootprint.cpp 

OBJS += \
./Bicycle.o \
./Building.o \
./Car.o \
./CarbonFootprint\ main.o \
./CarbonFootprint.o 

CPP_DEPS += \
./Bicycle.d \
./Building.d \
./Car.d \
./CarbonFootprint\ main.d \
./CarbonFootprint.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

CarbonFootprint\ main.o: ../CarbonFootprint\ main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"CarbonFootprint main.d" -MT"CarbonFootprint\ main.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


