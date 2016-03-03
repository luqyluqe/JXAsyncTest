#import <Foundation/Foundation.h>

@interface JXAsyncTest:NSObject

-(instancetype)initWithTimeoutSeconds:(int)timeoutSeconds;

-(BOOL)runTest:(dispatch_block_t)test;
-(void)pass;

@end
