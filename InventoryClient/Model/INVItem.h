#import <Foundation/Foundation.h>
#import "INVObject.h"

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

#import "INVVariation.h"


@protocol INVItem
@end

@interface INVItem : INVObject

/* ID of item [optional]
 */
@property(nonatomic) NSString* _id;
/* Category ID of item [optional]
 */
@property(nonatomic) NSString* category;
/* Rich text description of item [optional]
 */
@property(nonatomic) NSString* desc;
/* Name of item [optional]
 */
@property(nonatomic) NSString* name;
/* Integer value of price [optional]
 */
@property(nonatomic) NSNumber* ordprice;
/* String value of price [optional]
 */
@property(nonatomic) NSString* price;

@property(nonatomic) NSArray<INVVariation>* variations;
/* Inventory quantity [optional]
 */
@property(nonatomic) NSString* quantity;
/* Array of item media [optional]
 */
@property(nonatomic) NSArray<NSString*>* media;
/* Link to checkout page of item [optional]
 */
@property(nonatomic) NSString* buy;

@end
