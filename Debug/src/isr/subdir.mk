################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/isr/ISR.c 

OBJS += \
./src/isr/ISR.o 

C_DEPS += \
./src/isr/ISR.d 


# Each subdirectory must supply rules for building sources it contributes
src/isr/%.o: ../src/isr/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -I"B:\Facultad\informtica 2\Proyecto final\Robot Explorador\explorer_robot\src\include" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


