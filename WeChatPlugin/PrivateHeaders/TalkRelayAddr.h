//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface TalkRelayAddr : PBGeneratedMessage
{
    unsigned int hasIp:1;
    unsigned int hasPort:1;
    unsigned int ip;
    unsigned int port;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetPort:) unsigned int port; // @synthesize port;
@property(readonly, nonatomic) BOOL hasPort; // @synthesize hasPort;
@property(nonatomic, setter=SetIp:) unsigned int ip; // @synthesize ip;
@property(readonly, nonatomic) BOOL hasIp; // @synthesize hasIp;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

