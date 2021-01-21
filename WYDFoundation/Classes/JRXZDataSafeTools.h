//
//  JRXZDataSafeTools.h
//  jrxz
//
//  Created by super on 2020/12/24.
//  Copyright © 2020 heweihua. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JRXZDataSafeTools : NSObject
/**
 judge the paramter is a kind of class NSArray , if yes return the array,if not return nil
 
 @param array the array need to judge
 @return the safeData
 */
+ (NSArray *)safeArray:(id)array;

/**
 return a mutableArray ,if the params is not a kind of NSMutableArray return nil
 
 @param mutableArray the parameter need to judge
 @return the safeData
 */
+ (NSMutableArray *)safeMutableArray:(id)mutableArray;


/**
 return a NSDictionary ,if the params is not a kind of NSDictionary return nil
 
 @param dict the parameter need to judge
 @return the safeData
 */
+ (NSDictionary *)safeDictionary:(id)dict;

/**
 return a NSMutableDictionary ,if the params is not a kind of NSMutableDictionary return nil
 
 @param dict the parameter need to judge
 @return the safeData
 */
+ (NSMutableDictionary *)safeMutableDictionary:(id)dict;

/**
 return a NSObject ,if the params is not a kind of NSObject return nil
 
 @param obj the parameter need to judge
 @return the safeData
 */
+ (id)safeObj:(id)obj;

/// 字符串或者NSNumber判空方法(可传入字符串类型和NSNumber类型)
/// @param stringOrNumber 传入任意字符串或者number
+ (NSString *)safeString:(id)stringOrNumber;

@end

NS_ASSUME_NONNULL_END
