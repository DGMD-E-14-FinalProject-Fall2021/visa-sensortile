################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Middlewares/X-CUBE-BLE1_BlueNRG-MS/utils/subdir.mk
-include Middlewares/X-CUBE-BLE1_BlueNRG-MS/hci/hci_tl_patterns/subdir.mk
-include Middlewares/X-CUBE-BLE1_BlueNRG-MS/hci/controller/subdir.mk
-include Middlewares/X-CUBE-BLE1_BlueNRG-MS/hci/subdir.mk
-include Middlewares/STM32_USBD_Library/Core/Src/subdir.mk
-include Middlewares/STM32_USBD_Library/Class/Src/subdir.mk
-include Drivers/STM32L4xx_HAL_Driver/Src/subdir.mk
-include Drivers/BSP/US100/Src/subdir.mk
-include Drivers/BSP/SensorTile/Src/subdir.mk
-include Drivers/BSP/Components/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := visa_sensortile
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
visa_sensortile.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
visa_sensortile.list \

OBJCOPY_BIN += \
visa_sensortile.bin \


# All Target
all: main-build

# Main-build Target
main-build: visa_sensortile.elf secondary-outputs

# Tool invocations
visa_sensortile.elf: $(OBJS) $(USER_OBJS) /Users/stephensheldon/STM32CubeIDE/visa_sensortile/visa_sensortile/STM32L476JGYX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "visa_sensortile.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/Users/stephensheldon/STM32CubeIDE/visa_sensortile/visa_sensortile/STM32L476JGYX_FLASH.ld" --specs=nosys.specs -Wl,-Map="visa_sensortile.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

visa_sensortile.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "visa_sensortile.list"
	@echo 'Finished building: $@'
	@echo ' '

visa_sensortile.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "visa_sensortile.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(SIZE_OUTPUT)$(OBJDUMP_LIST)$(EXECUTABLES)$(OBJS)$(S_DEPS)$(S_UPPER_DEPS)$(C_DEPS)$(OBJCOPY_BIN) visa_sensortile.elf
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
