/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <Foundation/NSObject.h>
#import "NetworkController.h"

@class NSTimer;

@interface NetworkController : NSObject {
	SCDynamicStoreRef _store;
	unsigned _waitingForDialToFinish : 1;
	unsigned _checkedNetwork : 1;
	unsigned _isNetworkUp : 1;
	unsigned _isFatPipe : 1;
	unsigned _edgeRequested : 1;
	NSTimer* _notificationTimer;
}
+(id)sharedInstance;
// inherited: -(void)dealloc;
// inherited: -(id)init;
-(BOOL)isNetworkUp;
-(BOOL)isFatPipe;
-(BOOL)inAirplaneMode;
-(BOOL)isHostReachable:(id)reachable;
-(id)primaryEthernetAddressAsString;
-(void)registerCTServerRunLoopSource;
-(id)IMEI;
-(id)edgeInterfaceName;
-(BOOL)isEdgeUp;
-(void)bringUpEdge;
-(void)keepEdgeUp;
-(void*)createPacketContextAssertionWithIdentifier:(id)identifier;
@end

@interface NetworkController (Private)
-(void)_postNotification:(id)notification;
-(void)_postNetworkChangeNotification:(id)notification;
-(void)_triggerDialForHostname:(id)hostname;
-(void)_registerForNotificationKeys:(id)notificationKeys patterns:(id)patterns;
@end

