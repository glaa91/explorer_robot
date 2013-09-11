################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/drivers/cr_startup_lpc176x.c \
../src/drivers/funciones_gpio.c 

OBJS += \
./src/drivers/cr_startup_lpc176x.o \
./src/drivers/funciones_gpio.o 

C_DEPS += \
./src/drivers/cr_startup_lpc176x.d \
./src/drivers/funciones_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/%.o: ../src/drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -I"C:\Users\rmiller\Documents\LPCXpresso_5.2.4_2122\workspace\ROBOT EXPLORADOR\explorer_robot\src\include" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


