include $(CURDIR)/../config/EcuM.mk

#CFG+=VLE
MOD_USE+= DET ECUM MCU KERNEL RAMLOG

def-y += CFG_RAMLOG_SIZE=1024
def-y += HEAPSIZE=512