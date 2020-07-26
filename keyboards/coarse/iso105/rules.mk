# MCU name
MCU = STM32F072

# Layout support
LAYOUTS = fullsize_iso

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
