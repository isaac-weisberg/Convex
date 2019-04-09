#import <Foundation/Foundation.h>

@interface Sex<Event> : NSObject

typedef void(^SexHandler)(Event event);
@property (nonnull) SexHandler handler;
-(instancetype)initWith:(nonnull SexHandler)handler;

@end
