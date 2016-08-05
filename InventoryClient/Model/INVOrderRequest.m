#import "INVOrderRequest.h"

@implementation INVOrderRequest

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
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"order_id": @"orderId", @"info_email": @"infoEmail", @"info_first": @"infoFirst", @"info_last": @"infoLast", @"phone": @"phone", @"shipset": @"shipset", @"info_adr1": @"infoAdr1", @"info_adr2": @"infoAdr2", @"info_cty": @"infoCty", @"info_zip": @"infoZip", @"state": @"state", @"info_sadr1": @"infoSadr1", @"info_sadr2": @"infoSadr2", @"info_scty": @"infoScty", @"info_szip": @"infoSzip", @"sstate": @"sstate", @"tax_amount": @"taxAmount", @"shipping_amount": @"shippingAmount", @"amount_total": @"amountTotal" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"orderId", @"infoEmail", @"infoFirst", @"infoLast", @"phone", @"shipset", @"infoAdr1", @"infoAdr2", @"infoCty", @"infoZip", @"state", @"infoSadr1", @"infoSadr2", @"infoScty", @"infoSzip", @"sstate", @"taxAmount", @"shippingAmount", @"amountTotal"];
  return [optionalProperties containsObject:propertyName];
}

@end
