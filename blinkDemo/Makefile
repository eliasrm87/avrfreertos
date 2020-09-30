# WinAVR Sample makefile written by Eric B. Weddington, Jörg Wunsch, et al.
# Released to the Public Domain
# Please read the make user manual!
#
# Additional material for this makefile was submitted by:
#  Tim Henigan
#  Peter Fleury
#  Reiner Patommel
#  Sander Pool
#  Frederik Rouleau
#  Markus Pfaff
#
# On command line:
#
# make all = Make software.
#
# make clean = Clean out built project files.
#
# make coff = Convert ELF to AVR COFF (for use with AVR Studio 3.x or VMLAB).
#
# make extcoff = Convert ELF to AVR Extended COFF (for use with AVR Studio
#                4.07 or greater).
#
# make program = Download the hex file to the device, using avrdude.  Please
#                customize the avrdude settings below first!
#
# make filename.s = Just compile filename.c into the assembler code only
#
# To rebuild project do "make clean" then "make all".
#


# MCU name
MCU = atmega328p

# Programmer connected to serial device
AVRDUDE_PORT = /dev/ttyUSB0

# Output format. (can be srec, ihex, binary)
FORMAT = ihex

# Target file name (without extension).
TARGET = rtosBlinkDemo

# Optimization level, can be [0, 1, 2, 3, s]. 0 turns off optimization.
# (Note: 3 is not always the best optimization level. See avr-libc FAQ.)
OPT = s

# List your source files here
SRC = \
main.c

# List C source files here. (C dependencies are automatically generated.)
SOURCE_DIR = ../freeRTOS10xx

# You may want to change HEAP configuration. See heap_1.c, heap_2.c, heap_3.c and heap_4.c
SRC += \
$(SOURCE_DIR)/MemMang/heap_4.c

SRC += \
$(SOURCE_DIR)/croutine.c \
$(SOURCE_DIR)/event_groups.c \
$(SOURCE_DIR)/hooks.c \
$(SOURCE_DIR)/list.c \
$(SOURCE_DIR)/portable/port.c \
$(SOURCE_DIR)/queue.c \
$(SOURCE_DIR)/stream_buffer.c \
$(SOURCE_DIR)/tasks.c \
$(SOURCE_DIR)/timers.c

SRC += \
$(SOURCE_DIR)/lib_io/buttonDebounce.c \
$(SOURCE_DIR)/lib_io/digitalAnalog.c \
$(SOURCE_DIR)/lib_io/i2cMultiMaster.c \
$(SOURCE_DIR)/lib_io/serial.c \
$(SOURCE_DIR)/lib_io/servoPWM.c \
$(SOURCE_DIR)/lib_io/spi.c

SRC += \
$(SOURCE_DIR)/lib_util/crc.c \
$(SOURCE_DIR)/lib_util/g711.c \
$(SOURCE_DIR)/lib_util/swap.c

# SRC += \
# $(SOURCE_DIR)/lib_eefs/eefs_avrspi.c \
# $(SOURCE_DIR)/lib_eefs/eefs_fileapi.c \
# $(SOURCE_DIR)/lib_eefs/eefs_filesys.c \
# $(SOURCE_DIR)/lib_ext_ram/ext_ram.c \
# $(SOURCE_DIR)/lib_ext_ram/ramfs.c

# SRC += \
# $(SOURCE_DIR)/lib_fatf/diskio.c \
# $(SOURCE_DIR)/lib_fatf/ff.c \
# $(SOURCE_DIR)/lib_fatf/ffunicode.c

# SRC += \
# $(SOURCE_DIR)/lib_ft800/FT_API.c \
# $(SOURCE_DIR)/lib_ft800/FT_CoPro_Cmds.c \
# $(SOURCE_DIR)/lib_ft800/FT_Gpu_Hal.c \
# $(SOURCE_DIR)/lib_ft800/FT_X11_RGB.c

# SRC += \
# $(SOURCE_DIR)/lib_hd44780/hd44780.c

# SRC += \
# $(SOURCE_DIR)/lib_iinchip/md5.c \
# $(SOURCE_DIR)/lib_iinchip/PPPoE.c \
# $(SOURCE_DIR)/lib_iinchip/socket.c \
# $(SOURCE_DIR)/lib_iinchip/socket_util.c \
# $(SOURCE_DIR)/lib_iinchip/w5100.c \
# $(SOURCE_DIR)/lib_iinchip/w5200.c \
# $(SOURCE_DIR)/lib_iinchip/w5500.c \
# $(SOURCE_DIR)/lib_iinchip/wizchip_conf.c

# SRC += \
# $(SOURCE_DIR)/lib_inet/dhcp.c \
# $(SOURCE_DIR)/lib_inet/http.c \
# $(SOURCE_DIR)/lib_inet/ntp.c \
# $(SOURCE_DIR)/lib_inet/ping.c

# SRC += \
# $(SOURCE_DIR)/lib_rtc/rtc.c

# SRC += \
# $(SOURCE_DIR)/lib_time/asc_store.c \
# $(SOURCE_DIR)/lib_time/asctime.c \
# $(SOURCE_DIR)/lib_time/asctime_r.c \
# $(SOURCE_DIR)/lib_time/ctime.c \
# $(SOURCE_DIR)/lib_time/ctime_r.c \
# $(SOURCE_DIR)/lib_time/daylight_seconds.c \
# $(SOURCE_DIR)/lib_time/difftime.c \
# $(SOURCE_DIR)/lib_time/dst_pointer.c \
# $(SOURCE_DIR)/lib_time/equation_of_time.c \
# $(SOURCE_DIR)/lib_time/fatfs_time.c \
# $(SOURCE_DIR)/lib_time/geo_location.c \
# $(SOURCE_DIR)/lib_time/gm_sidereal.c \
# $(SOURCE_DIR)/lib_time/gmtime.c \
# $(SOURCE_DIR)/lib_time/gmtime_r.c \
# $(SOURCE_DIR)/lib_time/isLeap.c \
# $(SOURCE_DIR)/lib_time/isotime.c \
# $(SOURCE_DIR)/lib_time/isotime_r.c \
# $(SOURCE_DIR)/lib_time/iso_week_date.c \
# $(SOURCE_DIR)/lib_time/iso_week_date_r.c \
# $(SOURCE_DIR)/lib_time/lm_sidereal.c \
# $(SOURCE_DIR)/lib_time/localtime.c \
# $(SOURCE_DIR)/lib_time/localtime_r.c \
# $(SOURCE_DIR)/lib_time/mk_gmtime.c \
# $(SOURCE_DIR)/lib_time/mktime.c \
# $(SOURCE_DIR)/lib_time/month_length.c \
# $(SOURCE_DIR)/lib_time/moon_phase.c \
# $(SOURCE_DIR)/lib_time/print_lz.c \
# $(SOURCE_DIR)/lib_time/set_dst.c \
# $(SOURCE_DIR)/lib_time/set_position.c \
# $(SOURCE_DIR)/lib_time/set_system_time.c \
# $(SOURCE_DIR)/lib_time/set_zone.c \
# $(SOURCE_DIR)/lib_time/solar_declination.c \
# $(SOURCE_DIR)/lib_time/solar_noon.c \
# $(SOURCE_DIR)/lib_time/strftime.c \
# $(SOURCE_DIR)/lib_time/sun_rise.c \
# $(SOURCE_DIR)/lib_time/sun_set.c \
# $(SOURCE_DIR)/lib_time/system_time.c \
# $(SOURCE_DIR)/lib_time/time.c \
# $(SOURCE_DIR)/lib_time/tm_store.c \
# $(SOURCE_DIR)/lib_time/utc_offset.c \
# $(SOURCE_DIR)/lib_time/week_of_month.c \
# $(SOURCE_DIR)/lib_time/week_of_year.c

# SRC += \
# $(SOURCE_DIR)/lib-uIP/apps/dhcpc.c \
# $(SOURCE_DIR)/lib-uIP/apps/simple-httpd.c \
# $(SOURCE_DIR)/lib-uIP/apps/tcp-apps.c \
# $(SOURCE_DIR)/lib-uIP/apps/udp-apps.c \
# $(SOURCE_DIR)/lib-uIP/lib/list.c \
# $(SOURCE_DIR)/lib-uIP/lib/memb.c \
# $(SOURCE_DIR)/lib-uIP/lib/random.c \
# $(SOURCE_DIR)/lib-uIP/network.c \
# $(SOURCE_DIR)/lib-uIP/psock.c \
# $(SOURCE_DIR)/lib-uIP/slipdev.c \
# $(SOURCE_DIR)/lib-uIP/sys/stimer.c \
# $(SOURCE_DIR)/lib-uIP/sys/ttimer.c \
# $(SOURCE_DIR)/lib-uIP/uip6.c \
# $(SOURCE_DIR)/lib-uIP/uip-arp.c \
# $(SOURCE_DIR)/lib-uIP/uip.c \
# $(SOURCE_DIR)/lib-uIP/uip-ds6.c \
# $(SOURCE_DIR)/lib-uIP/uip-ds6-route.c \
# $(SOURCE_DIR)/lib-uIP/uip-fw.c \
# $(SOURCE_DIR)/lib-uIP/uip-icmp6.c \
# $(SOURCE_DIR)/lib-uIP/uiplib.c \
# $(SOURCE_DIR)/lib-uIP/uip-nd6.c \
# $(SOURCE_DIR)/lib-uIP/uip-neighbor.c \
# $(SOURCE_DIR)/lib-uIP/uip-split.c

# SRC += \
# $(SOURCE_DIR)/lib_wave/wave.c

# SRC += \
# $(SOURCE_DIR)/lib_xbee/jslong.c \
# $(SOURCE_DIR)/lib_xbee/wpan_types.c \
# $(SOURCE_DIR)/lib_xbee/xbee_atcmd.c \
# $(SOURCE_DIR)/lib_xbee/xbee_device.c \
# $(SOURCE_DIR)/lib_xbee/xbee_hexdump.c \
# $(SOURCE_DIR)/lib_xbee/xbee_platform_avr.c \
# $(SOURCE_DIR)/lib_xbee/xbee_serial_avr.c \
# $(SOURCE_DIR)/lib_xbee/xbee_wpan.c \
# $(SOURCE_DIR)/lib_xbee/xbee_xmodem.c


# If there is more than one source file, append them above, or modify and
# uncomment the following:
#SRC += foo.c bar.c

# You can also wrap lines by appending a backslash to the end of the line:
#SRC += baz.c \
#xyzzy.c



# List Assembler source files here.
# Make them always end in a capital .S.  Files ending in a lowercase .s
# will not be considered source files but generated files (assembler
# output from the compiler), and will be deleted upon "make clean"!
# Even though the DOS/Win* filesystem matches both .s and .S the same,
# it will preserve the spelling of the filenames, and gcc itself does
# care about how the name is spelled on its command-line.
ASRC = 


# List any extra directories to look for include files here.
#     Each directory must be seperated by a space.
EXTRAINCDIRS = 


# Optional compiler flags.
#  -g:        generate debugging information (for GDB, or for COFF conversion)
#  -O*:       optimization level
#  -f...:     tuning, see gcc manual and avr-libc documentation
#  -Wall...:  warning level
#  -Wa,...:   tell GCC to pass this to the assembler.
#    -ahlms:  create assembler listing

DEBUG_LEVEL=-g
WARNINGS=-Wall -Wextra -Wshadow -Wpointer-arith -Wbad-function-cast -Wcast-align -Wsign-compare \
		-Waggregate-return -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wunused

CFLAGS = -D GCC_MEGA_AVR -I. -I../freeRTOS10xx/include -I../freeRTOS10xx/include/uIP -I../freeRTOS10xx/include/uIP/apps -I../freeRTOS10xx/include/uIP/sys -I../freeRTOS10xx/include/xbee  \
$(DEBUG_LEVEL) -O$(OPT) \
-fsigned-char -funsigned-bitfields -fpack-struct -fshort-enums \
$(WARNINGS) \
-Wa,-adhlns=$(<:.c=.lst) \
$(patsubst %,-I%,$(EXTRAINCDIRS))


# Set a "language standard" compiler flag.
#   Unremark just one line below to set the language standard to use.
#   gnu99 = C99 + GNU extensions. See GCC manual for more information.
#CFLAGS += -std=c89
#CFLAGS += -std=gnu89
#CFLAGS += -std=c99
CFLAGS += -std=gnu99



# Optional assembler flags.
#  -Wa,...:   tell GCC to pass this to the assembler.
#  -ahlms:    create listing
#  -gstabs:   have the assembler create line number information; note that
#             for use in COFF files, additional information about filenames
#             and function names needs to be present in the assembler source
#             files -- see avr-libc docs [FIXME: not yet described there]
ASFLAGS = -Wa,-adhlns=$(<:.S=.lst),-gstabs 



# Optional linker flags.
#  -Wl,...:   tell GCC to pass this to linker.
#  -Map:      create map file
#  --cref:    add cross reference to  map file
LDFLAGS = -Wl,-Map=$(TARGET).map,--cref



# Additional libraries

# Minimalistic printf version
#LDFLAGS += -Wl,-u,vfprintf -lprintf_min

# Floating point printf version (requires -lm below)
#LDFLAGS += -Wl,-u,vfprintf -lprintf_flt

# -lm = math library
LDFLAGS += -lm




# Programming support using avrdude. Settings and variables.

# Programming hardware: alf avr910 avrisp bascom bsd 
# dt006 pavr picoweb pony-stk200 sp12 stk200 stk500
#
# Type: avrdude -c ?
# to get a full listing.
#
AVRDUDE_PROGRAMMER = arduino

AVRDUDE_WRITE_FLASH = -U flash:w:$(TARGET).hex
#AVRDUDE_WRITE_EEPROM = -U eeprom:w:$(TARGET).eep

AVRDUDE_FLAGS = -p $(MCU) -P $(AVRDUDE_PORT) -c $(AVRDUDE_PROGRAMMER)

# Uncomment the following if you want avrdude's erase cycle counter.
# Note that this counter needs to be initialized first using -Yn,
# see avrdude manual.
#AVRDUDE_ERASE += -y

# Uncomment the following if you do /not/ wish a verification to be
# performed after programming the device.
#AVRDUDE_FLAGS += -V

# Increase verbosity level.  Please use this when submitting bug
# reports about avrdude. See <http://savannah.nongnu.org/projects/avrdude> 
# to submit bug reports.
#AVRDUDE_FLAGS += -v -v




# ---------------------------------------------------------------------------

# Define directories, if needed.
DIRAVR = c:/winavr
DIRAVRBIN = $(DIRAVR)/bin
DIRAVRUTILS = $(DIRAVR)/utils/bin
DIRINC = .
DIRLIB = $(DIRAVR)/avr/lib


# Define programs and commands.
SHELL = sh

CC = avr-gcc

OBJCOPY = avr-objcopy
OBJDUMP = avr-objdump
SIZE = avr-size


# Programming support using avrdude.
AVRDUDE = avrdude


REMOVE = rm -f
COPY = cp

HEXSIZE = $(SIZE) --target=$(FORMAT) $(TARGET).hex
ELFSIZE = $(SIZE) -A $(TARGET).elf



# Define Messages
# English
MSG_ERRORS_NONE = Errors: none
MSG_BEGIN = -------- begin --------
MSG_END = --------  end  --------
MSG_SIZE_BEFORE = Size before: 
MSG_SIZE_AFTER = Size after:
MSG_COFF = Converting to AVR COFF:
MSG_EXTENDED_COFF = Converting to AVR Extended COFF:
MSG_FLASH = Creating load file for Flash:
MSG_EEPROM = Creating load file for EEPROM:
MSG_EXTENDED_LISTING = Creating Extended Listing:
MSG_SYMBOL_TABLE = Creating Symbol Table:
MSG_LINKING = Linking:
MSG_COMPILING = Compiling:
MSG_ASSEMBLING = Assembling:
MSG_CLEANING = Cleaning project:




# Define all object files.
OBJ = $(SRC:.c=.o) $(ASRC:.S=.o) 

# Define all listing files.
LST = $(ASRC:.S=.lst) $(SRC:.c=.lst)

# Combine all necessary flags and optional flags.
# Add target processor to flags.
ALL_CFLAGS = -mmcu=$(MCU) -I. $(CFLAGS)
ALL_ASFLAGS = -mmcu=$(MCU) -I. -x assembler-with-cpp $(ASFLAGS)



# Default target.
all: begin gccversion sizebefore $(TARGET).elf $(TARGET).hex $(TARGET).eep \
	$(TARGET).lss $(TARGET).sym sizeafter finished end


# Eye candy.
# AVR Studio 3.x does not check make's exit code but relies on
# the following magic strings to be generated by the compile job.
begin:
	@echo
	@echo $(MSG_BEGIN)

finished:
	@echo $(MSG_ERRORS_NONE)

end:
	@echo $(MSG_END)
	@echo


# Display size of file.
sizebefore:
	@if [ -f $(TARGET).elf ]; then echo; echo $(MSG_SIZE_BEFORE); $(ELFSIZE); echo; fi

sizeafter:
	@if [ -f $(TARGET).elf ]; then echo; echo $(MSG_SIZE_AFTER); $(ELFSIZE); echo; fi



# Display compiler version information.
gccversion : 
	@$(CC) --version




# Convert ELF to COFF for use in debugging / simulating in
# AVR Studio or VMLAB.
COFFCONVERT=$(OBJCOPY) --debugging \
	--change-section-address .data-0x800000 \
	--change-section-address .bss-0x800000 \
	--change-section-address .noinit-0x800000 \
	--change-section-address .eeprom-0x810000 


coff: $(TARGET).elf
	@echo
	@echo $(MSG_COFF) $(TARGET).cof
	$(COFFCONVERT) -O coff-avr $< $(TARGET).cof


extcoff: $(TARGET).elf
	@echo
	@echo $(MSG_EXTENDED_COFF) $(TARGET).cof
	$(COFFCONVERT) -O coff-ext-avr $< $(TARGET).cof




# Program the device.  
program: $(TARGET).hex $(TARGET).eep
	$(AVRDUDE) $(AVRDUDE_FLAGS) $(AVRDUDE_WRITE_FLASH) $(AVRDUDE_WRITE_EEPROM)




# Create final output files (.hex, .eep) from ELF output file.
%.hex: %.elf
	@echo
	@echo $(MSG_FLASH) $@
	$(OBJCOPY) -O $(FORMAT) -R .eeprom $< $@

%.eep: %.elf
	@echo
	@echo $(MSG_EEPROM) $@
	-$(OBJCOPY) -j .eeprom --set-section-flags=.eeprom="alloc,load" \
	--change-section-lma .eeprom=0 -O $(FORMAT) $< $@

# Create extended listing file from ELF output file.
%.lss: %.elf
	@echo
	@echo $(MSG_EXTENDED_LISTING) $@
	$(OBJDUMP) -h -S $< > $@

# Create a symbol table from ELF output file.
%.sym: %.elf
	@echo
	@echo $(MSG_SYMBOL_TABLE) $@
	avr-nm -n $< > $@



# Link: create ELF output file from object files.
.SECONDARY : $(TARGET).elf
.PRECIOUS : $(OBJ)
%.elf: $(OBJ)
	@echo
	@echo $(MSG_LINKING) $@
	$(CC) $(ALL_CFLAGS) $(OBJ) --output $@ $(LDFLAGS)


# Compile: create object files from C source files.
%.o : %.c
	@echo
	@echo $(MSG_COMPILING) $<
	$(CC) -c $(ALL_CFLAGS) $< -o $@


# Compile: create assembler files from C source files.
%.s : %.c
	$(CC) -S $(ALL_CFLAGS) $< -o $@


# Assemble: create object files from assembler source files.
%.o : %.S
	@echo
	@echo $(MSG_ASSEMBLING) $<
	$(CC) -c $(ALL_ASFLAGS) $< -o $@






# Target: clean project.
clean: begin clean_list finished end

clean_list :
	@echo
	@echo $(MSG_CLEANING)
	$(REMOVE) $(TARGET).hex
	$(REMOVE) $(TARGET).eep
	$(REMOVE) $(TARGET).obj
	$(REMOVE) $(TARGET).cof
	$(REMOVE) $(TARGET).elf
	$(REMOVE) $(TARGET).map
	$(REMOVE) $(TARGET).obj
	$(REMOVE) $(TARGET).a90
	$(REMOVE) $(TARGET).sym
	$(REMOVE) $(TARGET).lnk
	$(REMOVE) $(TARGET).lss
	$(REMOVE) $(OBJ)
	$(REMOVE) $(LST)
	$(REMOVE) $(SRC:.c=.s)
	$(REMOVE) $(SRC:.c=.d)


# Automatically generate C source code dependencies. 
# (Code originally taken from the GNU make user manual and modified 
# (See README.txt Credits).)
#
# Note that this will work with sh (bash) and sed that is shipped with WinAVR
# (see the SHELL variable defined above).
# This may not work with other shells or other seds.
#
%.d: %.c
	set -e; $(CC) -MM $(ALL_CFLAGS) $< \
	| sed 's,\(.*\)\.o[ :]*,\1.o \1.d : ,g' > $@; \
	[ -s $@ ] || rm -f $@


# Remove the '-' if you want to see the dependency files generated.
-include $(SRC:.c=.d)



# Listing of phony targets.
.PHONY : all begin finish end sizebefore sizeafter gccversion coff extcoff \
	clean clean_list program

