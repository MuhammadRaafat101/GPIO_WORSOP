################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.2.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./tm4c1231h6pm_startup_ccs.obj" \
"./tm4c123_firmware/appl/lab_00_dio.obj" \
"./tm4c123_firmware/appl/lab_01_spi.obj" \
"./tm4c123_firmware/config/i2c_lcfg.obj" \
"./tm4c123_firmware/config/port_lcfg.obj" \
"./tm4c123_firmware/config/spi_lcfg.obj" \
"./tm4c123_firmware/hal/accelerometer/accelerometer.obj" \
"./tm4c123_firmware/mcal/dio/dio.obj" \
"./tm4c123_firmware/mcal/i2c/i2c.obj" \
"./tm4c123_firmware/mcal/nvic/nvic.obj" \
"./tm4c123_firmware/mcal/port_driver/port.obj" \
"./tm4c123_firmware/mcal/spi/spi.obj" \
"./tm4c123_firmware/mcal/sys_ctr/SysCtr.obj" \
"../tm4c1231h6pm.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include tm4c123_firmware/appl/subdir_vars.mk
-include tm4c123_firmware/config/subdir_vars.mk
-include tm4c123_firmware/hal/accelerometer/subdir_vars.mk
-include tm4c123_firmware/mcal/dio/subdir_vars.mk
-include tm4c123_firmware/mcal/i2c/subdir_vars.mk
-include tm4c123_firmware/mcal/nvic/subdir_vars.mk
-include tm4c123_firmware/mcal/port_driver/subdir_vars.mk
-include tm4c123_firmware/mcal/spi/subdir_vars.mk
-include tm4c123_firmware/mcal/sys_ctr/subdir_vars.mk
-include subdir_rules.mk
-include tm4c123_firmware/appl/subdir_rules.mk
-include tm4c123_firmware/config/subdir_rules.mk
-include tm4c123_firmware/hal/accelerometer/subdir_rules.mk
-include tm4c123_firmware/mcal/dio/subdir_rules.mk
-include tm4c123_firmware/mcal/i2c/subdir_rules.mk
-include tm4c123_firmware/mcal/nvic/subdir_rules.mk
-include tm4c123_firmware/mcal/port_driver/subdir_rules.mk
-include tm4c123_firmware/mcal/spi/subdir_rules.mk
-include tm4c123_firmware/mcal/sys_ctr/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
GPIO_Driver.out \

EXE_OUTPUTS__QUOTED += \
"GPIO_Driver.out" \

BIN_OUTPUTS += \
GPIO_Driver.hex \

BIN_OUTPUTS__QUOTED += \
"GPIO_Driver.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "GPIO_Driver.out"

# Tool invocations
GPIO_Driver.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O2 --define=ccs="ccs" --define=PART_TM4C1231H6PM --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"GPIO_Driver.map" --heap_size=0 --stack_size=512 -i"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.2.LTS/lib" -i"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.2.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="GPIO_Driver_linkInfo.xml" --rom_model -o "GPIO_Driver.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

GPIO_Driver.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.2.LTS/bin/armhex"  -o "GPIO_Driver.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "tm4c1231h6pm_startup_ccs.obj" "tm4c123_firmware\appl\lab_00_dio.obj" "tm4c123_firmware\appl\lab_01_spi.obj" "tm4c123_firmware\config\i2c_lcfg.obj" "tm4c123_firmware\config\port_lcfg.obj" "tm4c123_firmware\config\spi_lcfg.obj" "tm4c123_firmware\hal\accelerometer\accelerometer.obj" "tm4c123_firmware\mcal\dio\dio.obj" "tm4c123_firmware\mcal\i2c\i2c.obj" "tm4c123_firmware\mcal\nvic\nvic.obj" "tm4c123_firmware\mcal\port_driver\port.obj" "tm4c123_firmware\mcal\spi\spi.obj" "tm4c123_firmware\mcal\sys_ctr\SysCtr.obj" 
	-$(RM) "main.d" "tm4c1231h6pm_startup_ccs.d" "tm4c123_firmware\appl\lab_00_dio.d" "tm4c123_firmware\appl\lab_01_spi.d" "tm4c123_firmware\config\i2c_lcfg.d" "tm4c123_firmware\config\port_lcfg.d" "tm4c123_firmware\config\spi_lcfg.d" "tm4c123_firmware\hal\accelerometer\accelerometer.d" "tm4c123_firmware\mcal\dio\dio.d" "tm4c123_firmware\mcal\i2c\i2c.d" "tm4c123_firmware\mcal\nvic\nvic.d" "tm4c123_firmware\mcal\port_driver\port.d" "tm4c123_firmware\mcal\spi\spi.d" "tm4c123_firmware\mcal\sys_ctr\SysCtr.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

