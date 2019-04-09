#import <Foundation/Foundation.h>
#import "Garbage.h"
#import "Sex.h"

@interface Convex<Event> : NSObject

typedef id<Garbage> _Nonnull (^ConvexFactory)(Sex<Event>* _Nonnull sex);
- (instancetype)initWith:(nonnull ConvexFactory)factory;
- (nonnull id<Garbage>)subscribe:(nonnull Sex<Event>*)sex;

@end
