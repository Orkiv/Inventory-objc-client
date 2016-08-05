# INVDefaultApi

All URIs are relative to *https://www.orkiv.com/i/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**allGet**](INVDefaultApi.md#allget) | **GET** /all/ | 
[**categoriesDelete**](INVDefaultApi.md#categoriesdelete) | **DELETE** /categories/ | 
[**categoriesPost**](INVDefaultApi.md#categoriespost) | **POST** /categories/ | 
[**categoriesPut**](INVDefaultApi.md#categoriesput) | **PUT** /categories/ | 
[**itemAddPost**](INVDefaultApi.md#itemaddpost) | **POST** /item/add/ | 
[**itemAddbulkPost**](INVDefaultApi.md#itemaddbulkpost) | **POST** /item/addbulk/ | 
[**itemDelete**](INVDefaultApi.md#itemdelete) | **DELETE** /item/ | 
[**itemGet**](INVDefaultApi.md#itemget) | **GET** /item/ | 
[**itemMediaDelete**](INVDefaultApi.md#itemmediadelete) | **DELETE** /item-media/ | 
[**itemMediaPost**](INVDefaultApi.md#itemmediapost) | **POST** /item-media/ | 
[**itemPut**](INVDefaultApi.md#itemput) | **PUT** /item/ | 
[**itemsCountPost**](INVDefaultApi.md#itemscountpost) | **POST** /items/count/ | 
[**itemsPost**](INVDefaultApi.md#itemspost) | **POST** /items/ | 
[**ordersPost**](INVDefaultApi.md#orderspost) | **POST** /orders/ | 
[**ordersServicesPost**](INVDefaultApi.md#ordersservicespost) | **POST** /orders/services/ | 
[**queryPost**](INVDefaultApi.md#querypost) | **POST** /query/ | 
[**servicesDelete**](INVDefaultApi.md#servicesdelete) | **DELETE** /services/ | 
[**servicesGet**](INVDefaultApi.md#servicesget) | **GET** /services/ | 
[**servicesOpenGet**](INVDefaultApi.md#servicesopenget) | **GET** /services/open/ | 
[**servicesPost**](INVDefaultApi.md#servicespost) | **POST** /services/ | 
[**servicesPut**](INVDefaultApi.md#servicesput) | **PUT** /services/ | 
[**variationDelete**](INVDefaultApi.md#variationdelete) | **DELETE** /variation/ | 
[**variationGet**](INVDefaultApi.md#variationget) | **GET** /variation/ | 
[**variationPost**](INVDefaultApi.md#variationpost) | **POST** /variation/ | 
[**variationPut**](INVDefaultApi.md#variationput) | **PUT** /variation/ | 
[**writeDelete**](INVDefaultApi.md#writedelete) | **DELETE** /write/ | 
[**writePost**](INVDefaultApi.md#writepost) | **POST** /write/ | 


# **allGet**
```objc
-(NSNumber*) allGetWithCompletionHandler: 
        (void (^)(NSArray<INVInventoryGroup>* output, NSError* error)) handler;
```



### Example 
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



INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance allGetWithCompletionHandler: 
          ^(NSArray<INVInventoryGroup>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->allGet: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<INVInventoryGroup>***](INVInventoryGroup.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **categoriesDelete**
```objc
-(NSNumber*) categoriesDeleteWithId: (NSString*) _id
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // Id of category to remove

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance categoriesDeleteWithId:_id
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->categoriesDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| Id of category to remove | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **categoriesPost**
```objc
-(NSNumber*) categoriesPostWithQuery: (INVCategory*) query
        completionHandler: (void (^)(NSArray<INVCategory>* output, NSError* error)) handler;
```



### Example 
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


INVCategory* query = [[INVCategory alloc] init]; // Category to query against system (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance categoriesPostWithQuery:query
          completionHandler: ^(NSArray<INVCategory>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->categoriesPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | [**INVCategory***](INVCategory*.md)| Category to query against system | [optional] 

### Return type

[**NSArray<INVCategory>***](INVCategory.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **categoriesPut**
```objc
-(NSNumber*) categoriesPutWithId: (NSString*) _id
    category: (INVCategory*) category
        completionHandler: (void (^)(INVCategory* output, NSError* error)) handler;
```



If no ID is specified a new category will be created!

### Example 
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


NSString* _id = @"_id_example"; // category id to update.
INVCategory* category = [[INVCategory alloc] init]; // New category information.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance categoriesPutWithId:_id
              category:category
          completionHandler: ^(INVCategory* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->categoriesPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| category id to update. | 
 **category** | [**INVCategory***](INVCategory*.md)| New category information. | 

### Return type

[**INVCategory***](INVCategory.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemAddPost**
```objc
-(NSNumber*) itemAddPostWithItem: (INVItemRequest*) item
        completionHandler: (void (^)(INVItem* output, NSError* error)) handler;
```



### Example 
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


INVItemRequest* item = [[INVItemRequest alloc] init]; // Item to create.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemAddPostWithItem:item
          completionHandler: ^(INVItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemAddPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **item** | [**INVItemRequest***](INVItemRequest*.md)| Item to create. | 

### Return type

[**INVItem***](INVItem.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemAddbulkPost**
```objc
-(NSNumber*) itemAddbulkPostWithItems: (NSArray<INVItemRequest>*) items
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSArray<INVItemRequest>* items = @[[[INVItemRequest alloc] init]]; // Items to create.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemAddbulkPostWithItems:items
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemAddbulkPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **items** | [**NSArray&lt;INVItemRequest&gt;***](INVItemRequest.md)| Items to create. | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemDelete**
```objc
-(NSNumber*) itemDeleteWithId: (NSString*) _id
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // item id to remove

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemDeleteWithId:_id
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| item id to remove | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemGet**
```objc
-(NSNumber*) itemGetWithId: (NSString*) _id
        completionHandler: (void (^)(INVItem* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // Item ID to open.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemGetWithId:_id
          completionHandler: ^(INVItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| Item ID to open. | 

### Return type

[**INVItem***](INVItem.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemMediaDelete**
```objc
-(NSNumber*) itemMediaDeleteWithImageurl: (NSString*) imageurl
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* imageurl = @"imageurl_example"; // URL of image to remove

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemMediaDeleteWithImageurl:imageurl
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemMediaDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageurl** | **NSString***| URL of image to remove | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemMediaPost**
```objc
-(NSNumber*) itemMediaPostWithId: (NSString*) _id
    image: (NSURL*) image
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```



This endpoint is currently in testing.

### Example 
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


NSString* _id = @"_id_example"; // Valid item id to bind image to.
NSURL* image = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Image.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemMediaPostWithId:_id
              image:image
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemMediaPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| Valid item id to bind image to. | 
 **image** | **NSURL***| Image. | 

### Return type

**NSString***

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemPut**
```objc
-(NSNumber*) itemPutWithId: (NSString*) _id
    item: (INVItemRequest*) item
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // item id to update.
INVItemRequest* item = [[INVItemRequest alloc] init]; // New item information.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemPutWithId:_id
              item:item
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| item id to update. | 
 **item** | [**INVItemRequest***](INVItemRequest*.md)| New item information. | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemsCountPost**
```objc
-(NSNumber*) itemsCountPostWithMinprice: (NSNumber*) minprice
    maxprice: (NSNumber*) maxprice
    query: (INVItemRequest*) query
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```



### Example 
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


NSNumber* minprice = @3.4; // Min price of items to find (optional)
NSNumber* maxprice = @3.4; // Max price of items to find (optional)
INVItemRequest* query = [[INVItemRequest alloc] init]; // Item to query against system. (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemsCountPostWithMinprice:minprice
              maxprice:maxprice
              query:query
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemsCountPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **minprice** | **NSNumber***| Min price of items to find | [optional] 
 **maxprice** | **NSNumber***| Max price of items to find | [optional] 
 **query** | [**INVItemRequest***](INVItemRequest*.md)| Item to query against system. | [optional] 

### Return type

**NSNumber***

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemsPost**
```objc
-(NSNumber*) itemsPostWithMinprice: (NSNumber*) minprice
    maxprice: (NSNumber*) maxprice
    query: (INVItemRequest*) query
        completionHandler: (void (^)(NSArray<INVItem>* output, NSError* error)) handler;
```



### Example 
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


NSNumber* minprice = @3.4; // Min price of items to find (optional)
NSNumber* maxprice = @3.4; // Max price of items to find (optional)
INVItemRequest* query = [[INVItemRequest alloc] init]; // Item to query against system. (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemsPostWithMinprice:minprice
              maxprice:maxprice
              query:query
          completionHandler: ^(NSArray<INVItem>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemsPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **minprice** | **NSNumber***| Min price of items to find | [optional] 
 **maxprice** | **NSNumber***| Max price of items to find | [optional] 
 **query** | [**INVItemRequest***](INVItemRequest*.md)| Item to query against system. | [optional] 

### Return type

[**NSArray<INVItem>***](INVItem.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ordersPost**
```objc
-(NSNumber*) ordersPostWithQuery: (INVOrderRequest*) query
        completionHandler: (void (^)(NSArray<INVOrder>* output, NSError* error)) handler;
```



### Example 
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


INVOrderRequest* query = [[INVOrderRequest alloc] init]; // Order to query against item invoices. (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance ordersPostWithQuery:query
          completionHandler: ^(NSArray<INVOrder>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->ordersPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | [**INVOrderRequest***](INVOrderRequest*.md)| Order to query against item invoices. | [optional] 

### Return type

[**NSArray<INVOrder>***](INVOrder.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ordersServicesPost**
```objc
-(NSNumber*) ordersServicesPostWithQuery: (INVOrderRequest*) query
        completionHandler: (void (^)(NSArray<INVOrder>* output, NSError* error)) handler;
```



### Example 
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


INVOrderRequest* query = [[INVOrderRequest alloc] init]; // Order to query against service invoices. (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance ordersServicesPostWithQuery:query
          completionHandler: ^(NSArray<INVOrder>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->ordersServicesPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | [**INVOrderRequest***](INVOrderRequest*.md)| Order to query against service invoices. | [optional] 

### Return type

[**NSArray<INVOrder>***](INVOrder.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **queryPost**
```objc
-(NSNumber*) queryPostWithPage: (NSNumber*) page
    categoryid: (NSString*) categoryid
    sort: (NSString*) sort
    search: (NSString*) search
    minprice: (NSNumber*) minprice
    maxprice: (NSNumber*) maxprice
    query: (INVItemRequest*) query
        completionHandler: (void (^)(NSArray<INVItem>* output, NSError* error)) handler;
```



### Example 
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


NSNumber* page = @3.4; // Current page index. (optional)
NSString* categoryid = @"categoryid_example"; // Get items under specified category id. (optional)
NSString* sort = @"sort_example"; // Comma delimited Sort string. ie ; +ordprice. Please use number based fields only (optional)
NSString* search = @"search_example"; // Performs a regex pattern match against the items within your account (optional)
NSNumber* minprice = @3.4; // Min price in hundreds (cents). (optional)
NSNumber* maxprice = @3.4; // Max price in hundreds (cents). (optional)
INVItemRequest* query = [[INVItemRequest alloc] init]; // Custom parameters to query against system. (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance queryPostWithPage:page
              categoryid:categoryid
              sort:sort
              search:search
              minprice:minprice
              maxprice:maxprice
              query:query
          completionHandler: ^(NSArray<INVItem>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->queryPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **NSNumber***| Current page index. | [optional] 
 **categoryid** | **NSString***| Get items under specified category id. | [optional] 
 **sort** | **NSString***| Comma delimited Sort string. ie ; +ordprice. Please use number based fields only | [optional] 
 **search** | **NSString***| Performs a regex pattern match against the items within your account | [optional] 
 **minprice** | **NSNumber***| Min price in hundreds (cents). | [optional] 
 **maxprice** | **NSNumber***| Max price in hundreds (cents). | [optional] 
 **query** | [**INVItemRequest***](INVItemRequest*.md)| Custom parameters to query against system. | [optional] 

### Return type

[**NSArray<INVItem>***](INVItem.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servicesDelete**
```objc
-(NSNumber*) servicesDeleteWithId: (NSString*) _id
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // ID of the service to update

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance servicesDeleteWithId:_id
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->servicesDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| ID of the service to update | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servicesGet**
```objc
-(NSNumber*) servicesGetWithCompletionHandler: 
        (void (^)(NSArray<INVService>* output, NSError* error)) handler;
```



### Example 
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



INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance servicesGetWithCompletionHandler: 
          ^(NSArray<INVService>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->servicesGet: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<INVService>***](INVService.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servicesOpenGet**
```objc
-(NSNumber*) servicesOpenGetWithId: (NSString*) _id
        completionHandler: (void (^)(INVService* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // ID of service to open

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance servicesOpenGetWithId:_id
          completionHandler: ^(INVService* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->servicesOpenGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| ID of service to open | 

### Return type

[**INVService***](INVService.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servicesPost**
```objc
-(NSNumber*) servicesPostWithService: (INVServiceRequest*) service
        completionHandler: (void (^)(INVService* output, NSError* error)) handler;
```



### Example 
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


INVServiceRequest* service = [[INVServiceRequest alloc] init]; // Service to create.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance servicesPostWithService:service
          completionHandler: ^(INVService* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->servicesPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service** | [**INVServiceRequest***](INVServiceRequest*.md)| Service to create. | 

### Return type

[**INVService***](INVService.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servicesPut**
```objc
-(NSNumber*) servicesPutWithId: (NSString*) _id
    service: (INVServiceRequest*) service
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // ID of the service to update
INVServiceRequest* service = [[INVServiceRequest alloc] init]; // New service data to set.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance servicesPutWithId:_id
              service:service
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->servicesPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| ID of the service to update | 
 **service** | [**INVServiceRequest***](INVServiceRequest*.md)| New service data to set. | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **variationDelete**
```objc
-(NSNumber*) variationDeleteWithId: (NSString*) _id
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // variation id to remove

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance variationDeleteWithId:_id
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->variationDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| variation id to remove | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **variationGet**
```objc
-(NSNumber*) variationGetWithId: (NSString*) _id
        completionHandler: (void (^)(INVVariation* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // Variation ID to open.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance variationGetWithId:_id
          completionHandler: ^(INVVariation* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->variationGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| Variation ID to open. | 

### Return type

[**INVVariation***](INVVariation.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **variationPost**
```objc
-(NSNumber*) variationPostWithId: (NSString*) _id
    item: (INVVariation*) item
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // Valid item id to bind variation to.
INVVariation* item = [[INVVariation alloc] init]; // Variation information.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance variationPostWithId:_id
              item:item
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->variationPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| Valid item id to bind variation to. | 
 **item** | [**INVVariation***](INVVariation*.md)| Variation information. | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **variationPut**
```objc
-(NSNumber*) variationPutWithId: (NSString*) _id
    item: (INVVariation*) item
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // variation id to update.
INVVariation* item = [[INVVariation alloc] init]; // New variation information.

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance variationPutWithId:_id
              item:item
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->variationPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| variation id to update. | 
 **item** | [**INVVariation***](INVVariation*.md)| New variation information. | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **writeDelete**
```objc
-(NSNumber*) writeDeleteWithId: (NSString*) _id
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



### Example 
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


NSString* _id = @"_id_example"; // Will delete event attached to this serviceid (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance writeDeleteWithId:_id
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->writeDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| Will delete event attached to this serviceid | [optional] 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **writePost**
```objc
-(NSNumber*) writePostWithEventRequest: (INVEventRequest*) eventRequest
        completionHandler: (void (^)(INVResponse* output, NSError* error)) handler;
```



Will ovveride the current event of the specified service.

### Example 
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


INVEventRequest* eventRequest = [[INVEventRequest alloc] init]; // Event to upload

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance writePostWithEventRequest:eventRequest
          completionHandler: ^(INVResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->writePost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventRequest** | [**INVEventRequest***](INVEventRequest*.md)| Event to upload | 

### Return type

[**INVResponse***](INVResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

