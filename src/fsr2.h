
enum TAA_MODE
{
    RM_DISABLED,
    RM_FFX_TAA,
};

typedef enum UpscaleType
{
    UPSCALE_TYPE_POINT = 0,
    UPSCALE_TYPE_BILINEAR = 1,
    UPSCALE_TYPE_BICUBIC = 2,
    UPSCALE_TYPE_FSR_1_0 = 3,
    UPSCALE_TYPE_FSR_2_0 = 4,
    UPSCALE_TYPE_NATIVE = 5,

    // add above this.
    UPSCALE_TYPE_COUNT
} UpscaleType;

typedef enum UpscaleQualityMode
{
    UPSCALE_QUALITY_MODE_NONE = 0,
    UPSCALE_QUALITY_MODE_ULTRA_QUALITY = 1,
    UPSCALE_QUALITY_MODE_QUALITY = 2,
    UPSCALE_QUALITY_MODE_BALANCE = 3,
    UPSCALE_QUALITY_MODE_PERFORMANCE = 4,
    UPSCALE_QUALITY_MODE_ULTRA_PERFORMANCE = 5,
    UPSCALE_QUALITY_MODE_CUSTOM = 6,

    // add above this.
    UPSCALE_QUALITY_MODE_COUNT
} UpscaleQualityMode;

typedef struct
{
    UpscaleType nType;
    bool bInvertedDepth;
    VkFormat outFormat;
    uint32_t maxQueuedFrames;
} FfxUpscaleInitParams;

typedef struct
{
    mat4 mCameraView;
    mat4 mCameraProj;
    mat4 mCameraViewInv;
    vec4 vCameraPos;
} FfxCameraSetup;

typedef struct
{
    FfxCameraSetup cameraSetup;

    //Texture *unresolvedColorResource;            // input0
    //Texture *motionvectorResource;               // input1
    //Texture *depthbufferResource;                // input2
    //Texture *reactiveMapResource;                // input3
    //Texture *transparencyAndCompositionResource; // input4
    //Texture *opaqueOnlyColorResource;            // input5
    //Texture *resolvedColorResource;              // output

    //VkImageView unresolvedColorResourceView;            // input0
    //VkImageView motionvectorResourceView;               // input1
    //VkImageView depthbufferResourceView;                // input2
    //VkImageView reactiveMapResourceView;                // input3
    //VkImageView transparencyAndCompositionResourceView; // input4
    //VkImageView opaqueOnlyColorResourceView;            // input5
    //VkImageView resolvedColorResourceView;              // output
} FfxUpscaleSetup;
