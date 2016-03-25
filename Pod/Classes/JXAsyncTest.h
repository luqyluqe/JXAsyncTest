#import <Foundation/Foundation.h>

@class JXAsyncTest;

typedef void(^JXTestBlock)(JXAsyncTest* asyncTest);

@interface JXAsyncTest:NSObject

-(instancetype)initWithTimeoutSeconds:(int)timeoutSeconds;

-(BOOL)runTest:(JXTestBlock)test;
-(void)pass;

@end
