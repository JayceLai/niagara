#pragma once

#include <assert.h>
#include <vulkan/vulkan.h>
// #include <volk.h>

#include <vector>

#define VK_CHECK(call) \
	do { \
		VkResult result_ = call; \
		assert(result_ == VK_SUCCESS); \
	} while (0)

template <typename T, size_t Size>
char (*countof_helper(T (&_Array)[Size]))[Size];

#define COUNTOF(array) (sizeof(*countof_helper(array)) + 0)

extern PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT_;
extern PFN_vkCmdPushDescriptorSetWithTemplateKHR vkCmdPushDescriptorSetWithTemplateKHR_;
extern PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT_;
extern PFN_vkCmdDrawMeshTasksIndirectCountNV vkCmdDrawMeshTasksIndirectCountNV_;
extern PFN_vkCmdSetCheckpointNV vkCmdSetCheckpointNV_;
extern PFN_vkGetQueueCheckpointDataNV vkGetQueueCheckpointDataNV_;
extern PFN_vkSetDebugUtilsObjectNameEXT vkSetDebugUtilsObjectNameEXT_;
