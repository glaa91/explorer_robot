################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/timer/subdir.mk
-include src/sysTick/subdir.mk
-include src/isr/subdir.mk
-include src/inicializacion/subdir.mk
-include src/drivers/subdir.mk
-include src/aplicacion/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: explorer_robot.axf

# Tool invocations
explorer_robot.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -Xlinker -Map="explorer_robot.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "explorer_robot_Debug.ld" -o "explorer_robot.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) explorer_robot.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "explorer_robot.axf"; # arm-none-eabi-objcopy -O binary "explorer_robot.axf" "explorer_robot.bin" ; checksum -p LPC1769 -d "explorer_robot.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
