//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"

@interface NSColorSpace : NSObject <NSCoding>
{
    id _profile;
    CDStruct_a84eaecd _flags;
    void *__cgColorSpace;
    void *__cgColorTransform;
    void *_reserved[4];
}

+ (id)availableColorSpacesWithModel:(long long)arg1;
+ (id)colorSpaceForColorSpaceName:(id)arg1;
+ (id)_invertedDeviceGrayColorSpace;
+ (id)_invertedGenericGrayColorSpace;
+ (id)genericGamma22GrayColorSpace;
+ (id)adobeRGB1998ColorSpace;
+ (id)sRGBColorSpace;
+ (id)deviceCMYKColorSpace;
+ (id)deviceGrayColorSpace;
+ (id)deviceRGBColorSpace;
+ (id)genericCMYKColorSpace;
+ (id)genericGrayColorSpace;
+ (id)genericRGBColorSpace;
+ (id)specialColorSpaceWithID:(int)arg1;
- (struct CGColor *)_newCGColorByConvertingCGColor:(struct CGColor *)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)colorSpaceName;
- (id)localizedName;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_isDeviceColorSpace;
- (long long)colorSpaceModel;
- (long long)numberOfColorComponents;
- (id)colorProfile;
- (void *)colorSyncProfile;
- (struct CGColorSpace *)CGColorSpace;
- (void)_createProfileFor:(struct __CFString *)arg1;
- (id)ICCProfileData;
- (void)finalize;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)initWithColorSyncProfile:(void *)arg1;
- (id)initWithICCProfileData:(id)arg1;
- (id)initWithCGColorSpace:(struct CGColorSpace *)arg1;
- (id)_initWithCGColorSpaceNoCache:(struct CGColorSpace *)arg1;
- (id)initWithColorProfile:(id)arg1;

@end
