################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/inicializacion/Oscilador.c \
../src/inicializacion/inicializar_exp1.c \
../src/inicializacion/inicializar_exp2.c \
../src/inicializacion/inicializar_lpc.c \
../src/inicializacion/inicializar_placaBase.c 

OBJS += \
./src/inicializacion/Oscilador.o \
./src/inicializacion/inicializar_exp1.o \
./src/inicializacion/inicializar_exp2.o \
./src/inicializacion/inicializar_lpc.o \
./src/inicializacion/inicializar_placaBase.o 

C_DEPS += \
./src/inicializacion/Oscilador.d \
./src/inicializacion/inicializar_exp1.d \
./src/inicializacion/inicializar_exp2.d \
./src/inicializacion/inicializar_lpc.d \
./src/inicializacion/inicializar_placaBase.d 


# Each subdirectory must supply rules for building sources it contributes
src/inicializacion/%.o: ../src/inicializacion/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -I"C:\Users\rmiller\Documents\LPCXpresso_5.2.4_2122\workspace\ROBOT EXPLORADOR\explorer_robot\src\include" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


