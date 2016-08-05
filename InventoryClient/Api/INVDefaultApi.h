#import <Foundation/Foundation.h>
#import "INVInventoryGroup.h"
#import "INVError.h"
#import "INVResponse.h"
#import "INVCategory.h"
#import "INVItemRequest.h"
#import "INVItem.h"
#import "INVOrderRequest.h"
#import "INVOrder.h"
#import "INVService.h"
#import "INVServiceRequest.h"
#import "INVVariation.h"
#import "INVEventRequest.h"
#import "INVApi.h"

/**
* InventoryAPI
* Orkiv Inventory API client 
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


@interface INVDefaultApi: NSObject <INVApi>

extern NSString* kINVDefaultApiErrorDomain;
extern NSInteger kINVDefaultApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// 
/// 
///
/// 
///  code:200 message:"Array of Inventory groups within the current account",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<INVInventoryGroup>*
-(NSNumber*) allGetWithCompletionHandler: 
    (void (^)(NSArray<INVInventoryGroup>* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id Id of category to remove
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) categoriesDeleteWithId: (NSString*) _id
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// 
///
/// @param query Category to query against system (optional)
/// 
///  code:200 message:"Array of categories within the current account",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<INVCategory>*
-(NSNumber*) categoriesPostWithQuery: (INVCategory*) query
    completionHandler: (void (^)(NSArray<INVCategory>* output, NSError* error)) handler;


/// 
/// If no ID is specified a new category will be created!
///
/// @param _id category id to update.
/// @param category New category information.
/// 
///  code:200 message:"Created category",
///  code:0 message:"Unexpected error"
///
/// @return INVCategory*
-(NSNumber*) categoriesPutWithId: (NSString*) _id
    category: (INVCategory*) category
    completionHandler: (void (^)(INVCategory* output, NSError* error)) handler;


/// 
/// 
///
/// @param item Item to create.
/// 
///  code:200 message:"Created item.",
///  code:0 message:"Unexpected error"
///
/// @return INVItem*
-(NSNumber*) itemAddPostWithItem: (INVItemRequest*) item
    completionHandler: (void (^)(INVItem* output, NSError* error)) handler;


/// 
/// 
///
/// @param items Items to create.
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) itemAddbulkPostWithItems: (NSArray<INVItemRequest>*) items
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id item id to remove
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) itemDeleteWithId: (NSString*) _id
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id Item ID to open.
/// 
///  code:200 message:"Item.",
///  code:0 message:"Unexpected error"
///
/// @return INVItem*
-(NSNumber*) itemGetWithId: (NSString*) _id
    completionHandler: (void (^)(INVItem* output, NSError* error)) handler;


/// 
/// 
///
/// @param imageurl URL of image to remove
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) itemMediaDeleteWithImageurl: (NSString*) imageurl
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// This endpoint is currently in testing.
///
/// @param _id Valid item id to bind image to.
/// @param image Image.
/// 
///  code:200 message:"Url to resource",
///  code:0 message:"Unexpected error"
///
/// @return NSString*
-(NSNumber*) itemMediaPostWithId: (NSString*) _id
    image: (NSURL*) image
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id item id to update.
/// @param item New item information.
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) itemPutWithId: (NSString*) _id
    item: (INVItemRequest*) item
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// 
///
/// @param minprice Min price of items to find (optional)
/// @param maxprice Max price of items to find (optional)
/// @param query Item to query against system. (optional)
/// 
///  code:200 message:"Counts the total number of items that match the supplied criteria.",
///  code:0 message:"Unexpected error"
///
/// @return NSNumber*
-(NSNumber*) itemsCountPostWithMinprice: (NSNumber*) minprice
    maxprice: (NSNumber*) maxprice
    query: (INVItemRequest*) query
    completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;


/// 
/// 
///
/// @param minprice Min price of items to find (optional)
/// @param maxprice Max price of items to find (optional)
/// @param query Item to query against system. (optional)
/// 
///  code:200 message:"Array of items within the current account",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<INVItem>*
-(NSNumber*) itemsPostWithMinprice: (NSNumber*) minprice
    maxprice: (NSNumber*) maxprice
    query: (INVItemRequest*) query
    completionHandler: (void (^)(NSArray<INVItem>* output, NSError* error)) handler;


/// 
/// 
///
/// @param query Order to query against item invoices. (optional)
/// 
///  code:200 message:"Array of found orders within the current account",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<INVOrder>*
-(NSNumber*) ordersPostWithQuery: (INVOrderRequest*) query
    completionHandler: (void (^)(NSArray<INVOrder>* output, NSError* error)) handler;


/// 
/// 
///
/// @param query Order to query against service invoices. (optional)
/// 
///  code:200 message:"Array of found service orders within the current account",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<INVOrder>*
-(NSNumber*) ordersServicesPostWithQuery: (INVOrderRequest*) query
    completionHandler: (void (^)(NSArray<INVOrder>* output, NSError* error)) handler;


/// 
/// 
///
/// @param page Current page index. (optional)
/// @param categoryid Get items under specified category id. (optional)
/// @param sort Comma delimited Sort string. ie ; +ordprice. Please use number based fields only (optional)
/// @param search Performs a regex pattern match against the items within your account (optional)
/// @param minprice Min price in hundreds (cents). (optional)
/// @param maxprice Max price in hundreds (cents). (optional)
/// @param query Custom parameters to query against system. (optional)
/// 
///  code:200 message:"Array of items found within the current criteria",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<INVItem>*
-(NSNumber*) queryPostWithPage: (NSNumber*) page
    categoryid: (NSString*) categoryid
    sort: (NSString*) sort
    search: (NSString*) search
    minprice: (NSNumber*) minprice
    maxprice: (NSNumber*) maxprice
    query: (INVItemRequest*) query
    completionHandler: (void (^)(NSArray<INVItem>* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id ID of the service to update
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) servicesDeleteWithId: (NSString*) _id
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// 
///
/// 
///  code:200 message:"Array of services within the current account",
///  code:0 message:"Unexpected error"
///
/// @return NSArray<INVService>*
-(NSNumber*) servicesGetWithCompletionHandler: 
    (void (^)(NSArray<INVService>* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id ID of service to open
/// 
///  code:200 message:"Service of specified ID",
///  code:0 message:"Unexpected error"
///
/// @return INVService*
-(NSNumber*) servicesOpenGetWithId: (NSString*) _id
    completionHandler: (void (^)(INVService* output, NSError* error)) handler;


/// 
/// 
///
/// @param service Service to create.
/// 
///  code:200 message:"Created service.",
///  code:0 message:"Unexpected error"
///
/// @return INVService*
-(NSNumber*) servicesPostWithService: (INVServiceRequest*) service
    completionHandler: (void (^)(INVService* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id ID of the service to update
/// @param service New service data to set.
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) servicesPutWithId: (NSString*) _id
    service: (INVServiceRequest*) service
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id variation id to remove
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) variationDeleteWithId: (NSString*) _id
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id Variation ID to open.
/// 
///  code:200 message:"Variation.",
///  code:0 message:"Unexpected error"
///
/// @return INVVariation*
-(NSNumber*) variationGetWithId: (NSString*) _id
    completionHandler: (void (^)(INVVariation* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id Valid item id to bind variation to.
/// @param item Variation information.
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) variationPostWithId: (NSString*) _id
    item: (INVVariation*) item
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id variation id to update.
/// @param item New variation information.
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) variationPutWithId: (NSString*) _id
    item: (INVVariation*) item
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// 
///
/// @param _id Will delete event attached to this serviceid (optional)
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) writeDeleteWithId: (NSString*) _id
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;


/// 
/// Will ovveride the current event of the specified service.
///
/// @param eventRequest Event to upload
/// 
///  code:200 message:"If successfull the key result will be 'true'",
///  code:0 message:"Unexpected error"
///
/// @return INVResponse*
-(NSNumber*) writePostWithEventRequest: (INVEventRequest*) eventRequest
    completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;



@end
