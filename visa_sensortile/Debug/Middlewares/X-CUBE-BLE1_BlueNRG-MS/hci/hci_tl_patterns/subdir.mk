################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/X-CUBE-BLE1_BlueNRG-MS/hci/hci_tl_patterns/hci_tl.c 

OBJS += \
./Middlewares/X-CUBE-BLE1_BlueNRG-MS/hci/hci_tl_patterns/hci_tl.o 

C_DEPS += \
./Middlewares/X-CUBE-BLE1_BlueNRG-MS/hci/hci_tl_patterns/hci_tl.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/X-CUBE-BLE1_BlueNRG-MS/hci/hci_tl_patterns/%.o: ../Middlewares/X-CUBE-BLE1_BlueNRG-MS/hci/hci_tl_patterns/%.c Middlewares/X-CUBE-BLE1_BlueNRG-MS/hci/hci_tl_patterns/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"/Users/stephensheldon/STM32CubeIDE/visa_sensortile/visa_sensortile/Middlewares/X-CUBE-BLE1_BlueNRG-MS/includes" -I"/Users/stephensheldon/STM32CubeIDE/visa_sensortile/visa_sensortile/Drivers/BSP/SensorTile/Inc" -I"/Users/stephensheldon/STM32CubeIDE/visa_sensortile/visa_sensortile/Drivers/BSP/Components/Inc" -I"/Users/stephensheldon/STM32CubeIDE/visa_sensortile/visa_sensortile/Middlewares/STM32_USBD_Library/Class/Inc" -I"/Users/stephensheldon/STM32CubeIDE/visa_sensortile/visa_sensortile/Middlewares/STM32_USBD_Library/Core/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

