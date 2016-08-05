# InventoryClient

Orkiv Inventory API client 

This ObjC package is automatically generated by the [Swagger Codegen](https://github.com/swagger-api/swagger-codegen) project:

- API version: 1.0.0
- Package version: 
- Build date: 2016-08-05T15:18:59.361-04:00
- Build package: class io.swagger.codegen.languages.ObjcClientCodegen

## Requirements

The SDK requires [**ARC (Automatic Reference Counting)**](http://stackoverflow.com/questions/7778356/how-to-enable-disable-automatic-reference-counting) to be enabled in the Xcode project.

## Installation & Usage
### Install from Github using [CocoaPods](https://cocoapods.org/)

Add the following to the Podfile:

```ruby
pod 'InventoryClient', :git => 'https://github.com/Orkiv/Inventory-objc-client.git'
```

To specify a particular branch, append `, :branch => 'branch-name-here'`

To specify a particular commit, append `, :commit => '11aa22'`

### Install from local path using [CocoaPods](https://cocoapods.org/)

Put the SDK under your project folder (e.g. /path/to/objc_project/Vendor/InventoryClient) and then add the following to the Podfile:

```ruby
pod 'InventoryClient', :path => 'Vendor/InventoryClient'
```

### Usage

Import the following:

```objc
#import <InventoryClient/INVApiClient.h>
#import <InventoryClient/INVConfiguration.h>
// load models
#import <InventoryClient/INVCategory.h>
#import <InventoryClient/INVError.h>
#import <InventoryClient/INVEventRequest.h>
#import <InventoryClient/INVInventoryGroup.h>
#import <InventoryClient/INVItem.h>
#import <InventoryClient/INVItemRequest.h>
#import <InventoryClient/INVOrder.h>
#import <InventoryClient/INVOrderRequest.h>
#import <InventoryClient/INVResponse.h>
#import <InventoryClient/INVService.h>
#import <InventoryClient/INVServiceRequest.h>
#import <InventoryClient/INVVariation.h>
// load API classes for accessing endpoints
#import <InventoryClient/INVDefaultApi.h>

```

## Recommendation

It's recommended to create an instance of ApiClient per thread in a multi-threaded environment to avoid any potential issue.

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```objc

INVConfiguration *apiConfig = [INVConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];



INVDefaultApi *apiInstance = [[INVDefaultApi alloc] init];

[apiInstance allGetWithCompletionHandler: 
              ^(NSArray<INVInventoryGroup>* output, NSError* error) {
                            if (output) {
                                NSLog(@"%@", output);
                            }
                            if (error) {
                                NSLog(@"Error: %@", error);
                            }
                        }];

```

## Documentation for API Endpoints

All URIs are relative to *https://www.orkiv.com/i/api*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*INVDefaultApi* | [**allGet**](docs/INVDefaultApi.md#allget) | **GET** /all/ | 
*INVDefaultApi* | [**categoriesDelete**](docs/INVDefaultApi.md#categoriesdelete) | **DELETE** /categories/ | 
*INVDefaultApi* | [**categoriesPost**](docs/INVDefaultApi.md#categoriespost) | **POST** /categories/ | 
*INVDefaultApi* | [**categoriesPut**](docs/INVDefaultApi.md#categoriesput) | **PUT** /categories/ | 
*INVDefaultApi* | [**itemAddPost**](docs/INVDefaultApi.md#itemaddpost) | **POST** /item/add/ | 
*INVDefaultApi* | [**itemAddbulkPost**](docs/INVDefaultApi.md#itemaddbulkpost) | **POST** /item/addbulk/ | 
*INVDefaultApi* | [**itemDelete**](docs/INVDefaultApi.md#itemdelete) | **DELETE** /item/ | 
*INVDefaultApi* | [**itemGet**](docs/INVDefaultApi.md#itemget) | **GET** /item/ | 
*INVDefaultApi* | [**itemMediaDelete**](docs/INVDefaultApi.md#itemmediadelete) | **DELETE** /item-media/ | 
*INVDefaultApi* | [**itemMediaPost**](docs/INVDefaultApi.md#itemmediapost) | **POST** /item-media/ | 
*INVDefaultApi* | [**itemPut**](docs/INVDefaultApi.md#itemput) | **PUT** /item/ | 
*INVDefaultApi* | [**itemsCountPost**](docs/INVDefaultApi.md#itemscountpost) | **POST** /items/count/ | 
*INVDefaultApi* | [**itemsPost**](docs/INVDefaultApi.md#itemspost) | **POST** /items/ | 
*INVDefaultApi* | [**ordersPost**](docs/INVDefaultApi.md#orderspost) | **POST** /orders/ | 
*INVDefaultApi* | [**ordersServicesPost**](docs/INVDefaultApi.md#ordersservicespost) | **POST** /orders/services/ | 
*INVDefaultApi* | [**queryPost**](docs/INVDefaultApi.md#querypost) | **POST** /query/ | 
*INVDefaultApi* | [**servicesDelete**](docs/INVDefaultApi.md#servicesdelete) | **DELETE** /services/ | 
*INVDefaultApi* | [**servicesGet**](docs/INVDefaultApi.md#servicesget) | **GET** /services/ | 
*INVDefaultApi* | [**servicesOpenGet**](docs/INVDefaultApi.md#servicesopenget) | **GET** /services/open/ | 
*INVDefaultApi* | [**servicesPost**](docs/INVDefaultApi.md#servicespost) | **POST** /services/ | 
*INVDefaultApi* | [**servicesPut**](docs/INVDefaultApi.md#servicesput) | **PUT** /services/ | 
*INVDefaultApi* | [**variationDelete**](docs/INVDefaultApi.md#variationdelete) | **DELETE** /variation/ | 
*INVDefaultApi* | [**variationGet**](docs/INVDefaultApi.md#variationget) | **GET** /variation/ | 
*INVDefaultApi* | [**variationPost**](docs/INVDefaultApi.md#variationpost) | **POST** /variation/ | 
*INVDefaultApi* | [**variationPut**](docs/INVDefaultApi.md#variationput) | **PUT** /variation/ | 
*INVDefaultApi* | [**writeDelete**](docs/INVDefaultApi.md#writedelete) | **DELETE** /write/ | 
*INVDefaultApi* | [**writePost**](docs/INVDefaultApi.md#writepost) | **POST** /write/ | 


## Documentation For Models

 - [INVCategory](docs/INVCategory.md)
 - [INVError](docs/INVError.md)
 - [INVEventRequest](docs/INVEventRequest.md)
 - [INVInventoryGroup](docs/INVInventoryGroup.md)
 - [INVItem](docs/INVItem.md)
 - [INVItemRequest](docs/INVItemRequest.md)
 - [INVOrder](docs/INVOrder.md)
 - [INVOrderRequest](docs/INVOrderRequest.md)
 - [INVResponse](docs/INVResponse.md)
 - [INVService](docs/INVService.md)
 - [INVServiceRequest](docs/INVServiceRequest.md)
 - [INVVariation](docs/INVVariation.md)


## Documentation For Authorization


## APIKey

- **Type**: API key
- **API key parameter name**: APIKey
- **Location**: HTTP header

## AccountID

- **Type**: API key
- **API key parameter name**: accountid
- **Location**: HTTP header


## Author




