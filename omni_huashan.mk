# Device configuration
$(call inherit-product, device/sony/huashan/full_huashan.mk)

# Prebuilts
PRODUCT_COPY_FILES += \
    device/sony/huashan/prebuilts/kernel:kernel

# Release name
PRODUCT_RELEASE_NAME := huashan

# Build fingerprints
PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=C5303 BUILD_FINGERPRINT=Sony/C5303/C5303:4.3/12.1.A.1.207/Nvt_nw:user/release-keys PRIVATE_BUILD_DESC="C5303-user 4.3 JB-MR2-VISKAN-140318-1014 227 test-keys"

# Device identification
PRODUCT_NAME := omni_huashan
PRODUCT_DEVICE := huashan
