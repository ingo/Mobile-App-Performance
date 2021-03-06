//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Java/src/main/java/harrycheung/map/Track.java
//

#ifndef _HCMTrack_H_
#define _HCMTrack_H_

@class HCMGate;
@class IOSObjectArray;
@class OrgJsonJSONObject;

#include "J2ObjC_header.h"

@interface HCMTrack : NSObject {
 @public
  NSString *name_;
  IOSObjectArray *gates_;
  jint id__;
  HCMGate *start_;
}

+ (IOSObjectArray *)load__WithNSString:(NSString *)json;

- (jint)numSplits;

- (jdouble)distanceToStartWithDouble:(jdouble)latitude
                          withDouble:(jdouble)longitude;

@end

J2OBJC_EMPTY_STATIC_INIT(HCMTrack)

J2OBJC_FIELD_SETTER(HCMTrack, name_, NSString *)
J2OBJC_FIELD_SETTER(HCMTrack, gates_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(HCMTrack, start_, HCMGate *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT IOSObjectArray *HCMTrack_load__WithNSString_(NSString *json);
CF_EXTERN_C_END

typedef HCMTrack HarrycheungMapTrack;

J2OBJC_TYPE_LITERAL_HEADER(HCMTrack)

#endif // _HCMTrack_H_
