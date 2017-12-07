################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Events.c" \
"../Sources/balle.c" \
"../Sources/bsp.c" \
"../Sources/intro.c" \
"../Sources/main.c" \
"../Sources/move.c" \
"../Sources/raquette.c" \

C_SRCS += \
../Sources/Events.c \
../Sources/balle.c \
../Sources/bsp.c \
../Sources/intro.c \
../Sources/main.c \
../Sources/move.c \
../Sources/raquette.c \

OBJS += \
./Sources/Events_c.obj \
./Sources/balle_c.obj \
./Sources/bsp_c.obj \
./Sources/intro_c.obj \
./Sources/main_c.obj \
./Sources/move_c.obj \
./Sources/raquette_c.obj \

OBJS_QUOTED += \
"./Sources/Events_c.obj" \
"./Sources/balle_c.obj" \
"./Sources/bsp_c.obj" \
"./Sources/intro_c.obj" \
"./Sources/main_c.obj" \
"./Sources/move_c.obj" \
"./Sources/raquette_c.obj" \

C_DEPS += \
./Sources/Events_c.d \
./Sources/balle_c.d \
./Sources/bsp_c.d \
./Sources/intro_c.d \
./Sources/main_c.d \
./Sources/move_c.d \
./Sources/raquette_c.d \

C_DEPS_QUOTED += \
"./Sources/Events_c.d" \
"./Sources/balle_c.d" \
"./Sources/bsp_c.d" \
"./Sources/intro_c.d" \
"./Sources/main_c.d" \
"./Sources/move_c.d" \
"./Sources/raquette_c.d" \

OBJS_OS_FORMAT += \
./Sources/Events_c.obj \
./Sources/balle_c.obj \
./Sources/bsp_c.obj \
./Sources/intro_c.obj \
./Sources/main_c.obj \
./Sources/move_c.obj \
./Sources/raquette_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/Events_c.obj: ../Sources/Events.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/Events.args" -ObjN="Sources/Events_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/%.d: ../Sources/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/balle_c.obj: ../Sources/balle.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/balle.args" -ObjN="Sources/balle_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/bsp_c.obj: ../Sources/bsp.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/bsp.args" -ObjN="Sources/bsp_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/intro_c.obj: ../Sources/intro.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/intro.args" -ObjN="Sources/intro_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/main.args" -ObjN="Sources/main_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/move_c.obj: ../Sources/move.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/move.args" -ObjN="Sources/move_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/raquette_c.obj: ../Sources/raquette.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/raquette.args" -ObjN="Sources/raquette_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '


