################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/builtin_led/BuiltinLed.cpp 

OBJS += \
./Core/Src/builtin_led/BuiltinLed.o 

CPP_DEPS += \
./Core/Src/builtin_led/BuiltinLed.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/builtin_led/%.o Core/Src/builtin_led/%.su Core/Src/builtin_led/%.cyclo: ../Core/Src/builtin_led/%.cpp Core/Src/builtin_led/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-builtin_led

clean-Core-2f-Src-2f-builtin_led:
	-$(RM) ./Core/Src/builtin_led/BuiltinLed.cyclo ./Core/Src/builtin_led/BuiltinLed.d ./Core/Src/builtin_led/BuiltinLed.o ./Core/Src/builtin_led/BuiltinLed.su

.PHONY: clean-Core-2f-Src-2f-builtin_led

