#import "Convex.h"

@interface Convex<Event> ()

@property (nonnull) ConvexFactory factory;

@end



@implementation Convex



- (instancetype)init
{
    NSAssert(false, @"Plz don't call the default initializer");
    return nil;
}


- (instancetype)initWith:(nonnull ConvexFactory)factory {
    self = [super init];
    if (self) {
        self.factory = factory;
    }
    return self;
}


- (nonnull id<Garbage>)subscribe:(nonnull Sex *)sex {
    return self.factory(sex);
}



@end
