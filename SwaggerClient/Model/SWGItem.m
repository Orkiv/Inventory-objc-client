#import "SWGItem.h"

@implementation SWGItem

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"id": @"_id", @"category": @"category", @"desc": @"desc", @"name": @"name", @"ordprice": @"ordprice", @"price": @"price", @"quantity": @"quantity", @"media": @"media", @"Buy": @"buy" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"category", @"desc", @"name", @"ordprice", @"price", @"quantity", @"media", @"buy"];
  return [optionalProperties containsObject:propertyName];
}

@end
