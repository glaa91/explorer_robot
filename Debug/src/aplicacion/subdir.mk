################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/aplicacion/main.c 

OBJS += \
./src/aplicacion/main.o 

C_DEPS += \
./src/aplicacion/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/aplicacion/%.o: ../src/aplicacion/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -I"B:\Facultad\informtica 2\Proyecto final\Robot Explorador\explorer_robot\src\include" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


