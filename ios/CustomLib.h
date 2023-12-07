
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCustomLibSpec.h"

@interface CustomLib : NSObject <NativeCustomLibSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CustomLib : NSObject <RCTBridgeModule>
#endif

@end
