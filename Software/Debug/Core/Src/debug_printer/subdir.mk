################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/debug_printer/debug_printer.c 

C_DEPS += \
./Core/Src/debug_printer/debug_printer.d 

OBJS += \
./Core/Src/debug_printer/debug_printer.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/debug_printer/%.o Core/Src/debug_printer/%.su Core/Src/debug_printer/%.cyclo: ../Core/Src/debug_printer/%.c Core/Src/debug_printer/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-debug_printer

clean-Core-2f-Src-2f-debug_printer:
	-$(RM) ./Core/Src/debug_printer/debug_printer.cyclo ./Core/Src/debug_printer/debug_printer.d ./Core/Src/debug_printer/debug_printer.o ./Core/Src/debug_printer/debug_printer.su

.PHONY: clean-Core-2f-Src-2f-debug_printer

