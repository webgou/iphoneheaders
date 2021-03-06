/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>


@interface MessageKeychainManager : NSObject {
}
// inherited: +(void)initialize;
+(id)_passwordForHost:(id)host username:(id)username port:(int)port protocol:(id)protocol;
+(id)passwordForHost:(id)host username:(id)username port:(int)port protocol:(id)protocol;
+(void)setPassword:(id)password forHost:(id)host username:(id)username port:(int)port protocol:(id)protocol;
+(void)removePasswordForHost:(id)host username:(id)username port:(int)port protocol:(id)protocol;
+(id)_passwordForGenericAccount:(id)genericAccount service:(id)service;
+(id)passwordForServiceName:(id)serviceName accountName:(id)name;
+(void)setPassword:(id)password forServiceName:(id)serviceName accountName:(id)name;
+(void)removePasswordForServiceName:(id)serviceName accountName:(id)name;
@end

