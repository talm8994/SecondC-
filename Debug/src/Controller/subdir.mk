################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Controller/SecondContoller.cpp \
../src/Controller/SecondRunner.cpp 

OBJS += \
./src/Controller/SecondContoller.o \
./src/Controller/SecondRunner.o 

CPP_DEPS += \
./src/Controller/SecondContoller.d \
./src/Controller/SecondRunner.d 


# Each subdirectory must supply rules for building sources it contributes
src/Controller/%.o: ../src/Controller/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


