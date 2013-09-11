################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/timer/timer.c 

OBJS += \
./src/timer/timer.o 

C_DEPS += \
./src/timer/timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/timer/%.o: ../src/timer/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -I"C:\Users\rmiller\Documents\LPCXpresso_5.2.4_2122\workspace\ROBOT EXPLORADOR\explorer_robot\src\include" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


