// Objective-C API for talking to golang.org/x/mobile/bind/objc/testpkg Go package.
//   gobind -lang=objc golang.org/x/mobile/bind/objc/testpkg
//
// File is generated by gobind. Do not edit.

#ifndef __GoTestpkg_H__
#define __GoTestpkg_H__

#include <Foundation/Foundation.h>

@class GoTestpkgNode;
@class GoTestpkgNullFieldStruct;
@class GoTestpkgS;
@class GoTestpkgStructThatStartsWithLetterBeforeZ;
@protocol GoTestpkgI;
@class GoTestpkgI;
@protocol GoTestpkgNullTest;
@class GoTestpkgNullTest;
@protocol GoTestpkgZ;
@class GoTestpkgZ;

@interface GoTestpkgNode : NSObject {
}
@property(strong, readonly) id _ref;

- (id)initWithRef:(id)ref;
- (NSString*)v;
- (void)setV:(NSString*)v;
- (NSString*)err;
- (void)setErr:(NSString*)v;
@end

@interface GoTestpkgNullFieldStruct : NSObject {
}
@property(strong, readonly) id _ref;

- (id)initWithRef:(id)ref;
- (GoTestpkgS*)f;
- (void)setF:(GoTestpkgS*)v;
@end

@interface GoTestpkgS : NSObject {
}
@property(strong, readonly) id _ref;

- (id)initWithRef:(id)ref;
- (double)x;
- (void)setX:(double)v;
- (double)y;
- (void)setY:(double)v;
- (double)sum;
- (NSString*)tryTwoStrings:(NSString*)first second:(NSString*)second;
@end

@interface GoTestpkgStructThatStartsWithLetterBeforeZ : NSObject {
}
@property(strong, readonly) id _ref;

- (id)initWithRef:(id)ref;
- (id<GoTestpkgZ>)value;
- (void)setValue:(id<GoTestpkgZ>)v;
@end

@protocol GoTestpkgI
- (BOOL)error:(BOOL)triggerError error:(NSError**)error;
- (BOOL)stringError:(NSString*)s ret0_:(NSString**)ret0_ error:(NSError**)error;
- (int64_t)times:(int32_t)v;
@end

@protocol GoTestpkgNullTest
- (id<GoTestpkgNullTest>)null;
@end

@protocol GoTestpkgZ
@end

FOUNDATION_EXPORT const BOOL GoTestpkgABool;
FOUNDATION_EXPORT const double GoTestpkgAFloat;
FOUNDATION_EXPORT NSString* const GoTestpkgALongString;
FOUNDATION_EXPORT NSString* const GoTestpkgAString;
FOUNDATION_EXPORT const int64_t GoTestpkgAnInt;
FOUNDATION_EXPORT const double GoTestpkgLog2E;
FOUNDATION_EXPORT const float GoTestpkgMaxFloat32;
FOUNDATION_EXPORT const double GoTestpkgMaxFloat64;
FOUNDATION_EXPORT const int32_t GoTestpkgMaxInt32;
FOUNDATION_EXPORT const int64_t GoTestpkgMaxInt64;
FOUNDATION_EXPORT const int32_t GoTestpkgMinInt32;
FOUNDATION_EXPORT const int64_t GoTestpkgMinInt64;
FOUNDATION_EXPORT const float GoTestpkgSmallestNonzeroFloat32;
FOUNDATION_EXPORT const double GoTestpkgSmallestNonzeroFloat64;

@interface GoTestpkg : NSObject
+ (int) intVar;
+ (void) setIntVar:(int)v;

+ (id<GoTestpkgI>) interfaceVar;
+ (void) setInterfaceVar:(id<GoTestpkgI>)v;

+ (NSString*) stringVar;
+ (void) setStringVar:(NSString*)v;

+ (GoTestpkgNode*) structVar;
+ (void) setStructVar:(GoTestpkgNode*)v;

@end

FOUNDATION_EXPORT NSData* GoTestpkgBytesAppend(NSData* a, NSData* b);

FOUNDATION_EXPORT BOOL GoTestpkgCallIError(id<GoTestpkgI> i, BOOL triggerError, NSError** error);

FOUNDATION_EXPORT BOOL GoTestpkgCallIStringError(id<GoTestpkgI> i, NSString* s, NSString** ret0_, NSError** error);

FOUNDATION_EXPORT double GoTestpkgCallSSum(GoTestpkgS* s);

FOUNDATION_EXPORT BOOL GoTestpkgCallWithNull(id<GoTestpkgNullTest> p0, id<GoTestpkgNullTest> nuller);

FOUNDATION_EXPORT int GoTestpkgCollectS(int want, int timeoutSec);

FOUNDATION_EXPORT NSString* GoTestpkgEcho(NSString* s);

FOUNDATION_EXPORT void GoTestpkgGC();

FOUNDATION_EXPORT NSString* GoTestpkgHello(NSString* s);

FOUNDATION_EXPORT void GoTestpkgHi();

FOUNDATION_EXPORT void GoTestpkgInt(int32_t x);

FOUNDATION_EXPORT int64_t GoTestpkgMultiply(int32_t idx, int32_t val);

FOUNDATION_EXPORT id<GoTestpkgI> GoTestpkgNewI();

FOUNDATION_EXPORT GoTestpkgNode* GoTestpkgNewNode(NSString* name);

FOUNDATION_EXPORT GoTestpkgNullFieldStruct* GoTestpkgNewNullFieldStruct();

FOUNDATION_EXPORT id<GoTestpkgI> GoTestpkgNewNullInterface();

FOUNDATION_EXPORT GoTestpkgS* GoTestpkgNewNullStruct();

FOUNDATION_EXPORT GoTestpkgS* GoTestpkgNewS(double x, double y);

FOUNDATION_EXPORT BOOL GoTestpkgReadIntoByteArray(NSData* s, int* ret0_, NSError** error);

FOUNDATION_EXPORT void GoTestpkgRegisterI(int32_t idx, id<GoTestpkgI> i);

FOUNDATION_EXPORT BOOL GoTestpkgReturnsError(BOOL b, NSString** ret0_, NSError** error);

FOUNDATION_EXPORT NSString* GoTestpkgStringDup(NSString* s);

FOUNDATION_EXPORT int64_t GoTestpkgSum(int64_t x, int64_t y);

FOUNDATION_EXPORT void GoTestpkgUnregisterI(int32_t idx);

#endif