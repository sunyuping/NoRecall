//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface DBEncryptInfo : NSObject <PBCoding>
{
    NSData *m_dbEncryptKeyInfo;
    NSData *_m_dbEncryptKey;
}

+ (void)initialize;
+ (void)_initPBTableOfDBEncryptInfo;
@property(retain) NSData *m_dbEncryptKey; // @synthesize m_dbEncryptKey=_m_dbEncryptKey;
@property(retain) NSData *m_dbEncryptKeyInfo; // @synthesize m_dbEncryptKeyInfo;
- (void).cxx_destruct;
- (void)reset;
- (void)setEncryptInfo:(id)arg1 encryptKey:(id)arg2;
- (void)copyFromServerObj:(id)arg1;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

