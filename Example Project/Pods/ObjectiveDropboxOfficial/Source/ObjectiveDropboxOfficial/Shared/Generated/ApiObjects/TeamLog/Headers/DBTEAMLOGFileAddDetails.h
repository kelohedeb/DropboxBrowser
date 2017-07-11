///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFileAddDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileAddDetails` struct.
///
/// Added files and/or folders.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileAddDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileAddDetails` struct.
///
@interface DBTEAMLOGFileAddDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileAddDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileAddDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileAddDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGFileAddDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileAddDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileAddDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileAddDetails` object.
///
+ (DBTEAMLOGFileAddDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
