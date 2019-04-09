#import "Convex.h"

@interface Convex ()

- (Convex<NewEvent>)map:(NewEvent(^predicate)(Event event) _Nonnull);
// And there i fucking go, there are no generic methods

@end
