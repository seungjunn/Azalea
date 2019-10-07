#ifndef __OFFLOAD_MEMORY_CONFIG_H__
#define __OFFLOAD_MEMORY_CONFIG_H__

#include "arch.h"

#define UNIKERNELS_MEM_BASE_PA		((unsigned long)(UNIKERNEL_START *1024UL*1024UL*1024UL)) 

#define CONFIG_OFFLOAD_CHANNEL_PA	((unsigned long) (UNIKERNEL_START - SHARED_MEMORY_SIZE + CHANNEL_START_OFFSET)*1024UL*1024UL*1024UL)
#define OFFLOAD_CHANNEL_LOCK_PA		(CONFIG_OFFLOAD_CHANNEL_PA)	
#define OFFLOAD_CHANNEL_STRUCT_PA	(CONFIG_OFFLOAD_CHANNEL_PA + (PAGE_SIZE_4K * 100))
#define OFFLOAD_CHANNEL_INFO_PA		(CONFIG_OFFLOAD_CHANNEL_PA + (PAGE_SIZE_4K * 200))
#define OFFLOAD_CHANNEL_BASE_PA		(CONFIG_OFFLOAD_CHANNEL_PA + (PAGE_SIZE_4K * 300))

#endif
// __OFFLOAD_MEMORY_CONFIG_H__
