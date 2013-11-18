# List all source files the application uses.
APPLICATION_SRCS = main.c retarget.c  nrf_delay.c simple_uart.c 

# Use shell to find name of root folder. Possible but horrible to do in make.
PROJECT_NAME = $(shell basename "$(realpath ../)")

DEVICE = NRF51
BOARD = BOARD_PCA10000
#USE_SOFTDEVICE = S110

SDK_PATH = ../../../../
CFLAGS = -O0 -g
LDFLAGS = --specs=nano.specs -u _printf_float

GDB_PORT_NUMBER = 2331

include $(SDK_PATH)Source/templates/pure-gcc/Makefile
