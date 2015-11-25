################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cell.cpp \
../src/CellGroup.cpp \
../src/Row.cpp \
../src/Sudoku.cpp 

OBJS += \
./src/Cell.o \
./src/CellGroup.o \
./src/Row.o \
./src/Sudoku.o 

CPP_DEPS += \
./src/Cell.d \
./src/CellGroup.d \
./src/Row.d \
./src/Sudoku.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


