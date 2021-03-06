/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class NSDictionary, NSString;

@interface HMHAPMetadataAssistantCharacteristic : NSObject <NSSecureCoding> {
    NSString *_format;
    NSString *_name;
    NSString *_readHAPCharacteristicName;
    NSString *_readHAPCharacteristicType;
    BOOL _supportsLocalization;
    NSDictionary *_values;
    NSString *_writeHAPCharacteristicName;
    NSString *_writeHAPCharacteristicType;
}

@property(retain) NSString * format;
@property(retain) NSString * name;
@property(retain) NSString * readHAPCharacteristicName;
@property(retain) NSString * readHAPCharacteristicType;
@property BOOL supportsLocalization;
@property(retain) NSDictionary * values;
@property(retain) NSString * writeHAPCharacteristicName;
@property(retain) NSString * writeHAPCharacteristicType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)readHAPCharacteristicName;
- (id)readHAPCharacteristicType;
- (void)setFormat:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReadHAPCharacteristicName:(id)arg1;
- (void)setReadHAPCharacteristicType:(id)arg1;
- (void)setSupportsLocalization:(BOOL)arg1;
- (void)setValues:(id)arg1;
- (void)setWriteHAPCharacteristicName:(id)arg1;
- (void)setWriteHAPCharacteristicType:(id)arg1;
- (BOOL)supportsLocalization;
- (id)values;
- (id)writeHAPCharacteristicName;
- (id)writeHAPCharacteristicType;

@end
