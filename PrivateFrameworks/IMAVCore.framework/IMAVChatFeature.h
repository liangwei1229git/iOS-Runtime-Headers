/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVChat;

@interface IMAVChatFeature : NSObject {
    IMAVChat *_avChat;
}

@property IMAVChat * avChat;

- (unsigned int)addStatusForIMHandle:(id)arg1 asVideo:(BOOL)arg2 ardRole:(int)arg3;
- (id)avChat;
- (void)conferenceEndedWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)dealloc;
- (void)delegateChangedTo:(id)arg1;
- (BOOL)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (BOOL)hasAddableParticipantsOtherwiseStatus:(unsigned int*)arg1;
- (id)initWithAVChat:(id)arg1;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)participantInvited:(id)arg1;
- (void)participantRemoved:(id)arg1;
- (void)setAVChat:(id)arg1;

@end
