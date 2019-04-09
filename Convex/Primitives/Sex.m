#import "Sex.h"

@implementation Sex



- (instancetype)initWith:(SexHandler)handler {
    self = [super init];
    if (self) {
        self.handler = handler;
    }
    return self;
}


- (instancetype)init
{
    NSAssert(false, @"Plz don't call the default initializer");
    return nil;
}



@end
