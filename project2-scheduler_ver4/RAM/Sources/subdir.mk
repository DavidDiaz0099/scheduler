################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Exceptions.c" \
"../Sources/INIT.c" \
"../Sources/IntcInterrupts.c" \
"../Sources/PIT_DRIVER.c" \
"../Sources/STM.c" \
"../Sources/application_layer.c" \
"../Sources/ivor_branch_table.c" \
"../Sources/main.c" \
"../Sources/tasks.c" \

C_SRCS += \
../Sources/Exceptions.c \
../Sources/INIT.c \
../Sources/IntcInterrupts.c \
../Sources/PIT_DRIVER.c \
../Sources/STM.c \
../Sources/application_layer.c \
../Sources/ivor_branch_table.c \
../Sources/main.c \
../Sources/tasks.c \

OBJS += \
./Sources/Exceptions_c.obj \
./Sources/INIT_c.obj \
./Sources/IntcInterrupts_c.obj \
./Sources/PIT_DRIVER_c.obj \
./Sources/STM_c.obj \
./Sources/application_layer_c.obj \
./Sources/ivor_branch_table_c.obj \
./Sources/main_c.obj \
./Sources/tasks_c.obj \

OBJS_QUOTED += \
"./Sources/Exceptions_c.obj" \
"./Sources/INIT_c.obj" \
"./Sources/IntcInterrupts_c.obj" \
"./Sources/PIT_DRIVER_c.obj" \
"./Sources/STM_c.obj" \
"./Sources/application_layer_c.obj" \
"./Sources/ivor_branch_table_c.obj" \
"./Sources/main_c.obj" \
"./Sources/tasks_c.obj" \

C_DEPS += \
./Sources/Exceptions_c.d \
./Sources/INIT_c.d \
./Sources/IntcInterrupts_c.d \
./Sources/PIT_DRIVER_c.d \
./Sources/STM_c.d \
./Sources/application_layer_c.d \
./Sources/ivor_branch_table_c.d \
./Sources/main_c.d \
./Sources/tasks_c.d \

OBJS_OS_FORMAT += \
./Sources/Exceptions_c.obj \
./Sources/INIT_c.obj \
./Sources/IntcInterrupts_c.obj \
./Sources/PIT_DRIVER_c.obj \
./Sources/STM_c.obj \
./Sources/application_layer_c.obj \
./Sources/ivor_branch_table_c.obj \
./Sources/main_c.obj \
./Sources/tasks_c.obj \

C_DEPS_QUOTED += \
"./Sources/Exceptions_c.d" \
"./Sources/INIT_c.d" \
"./Sources/IntcInterrupts_c.d" \
"./Sources/PIT_DRIVER_c.d" \
"./Sources/STM_c.d" \
"./Sources/application_layer_c.d" \
"./Sources/ivor_branch_table_c.d" \
"./Sources/main_c.d" \
"./Sources/tasks_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Exceptions_c.obj: ../Sources/Exceptions.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/Exceptions.args" -o "Sources/Exceptions_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/%.d: ../Sources/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/INIT_c.obj: ../Sources/INIT.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/INIT.args" -o "Sources/INIT_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/IntcInterrupts_c.obj: ../Sources/IntcInterrupts.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/IntcInterrupts.args" -o "Sources/IntcInterrupts_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/PIT_DRIVER_c.obj: ../Sources/PIT_DRIVER.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/PIT_DRIVER.args" -o "Sources/PIT_DRIVER_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/STM_c.obj: ../Sources/STM.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/STM.args" -o "Sources/STM_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/application_layer_c.obj: ../Sources/application_layer.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/application_layer.args" -o "Sources/application_layer_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/ivor_branch_table_c.obj: ../Sources/ivor_branch_table.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/ivor_branch_table.args" -o "Sources/ivor_branch_table_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/main.args" -o "Sources/main_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/tasks_c.obj: ../Sources/tasks.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/tasks.args" -o "Sources/tasks_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '


