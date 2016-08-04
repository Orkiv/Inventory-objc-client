# SWGDefaultApi

All URIs are relative to *https://www.orkiv.com/i/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**allGet**](SWGDefaultApi.md#allget) | **GET** /all/ | 
[**categoriesDelete**](SWGDefaultApi.md#categoriesdelete) | **DELETE** /categories/ | 
[**categoriesPost**](SWGDefaultApi.md#categoriespost) | **POST** /categories/ | 
[**categoriesPut**](SWGDefaultApi.md#categoriesput) | **PUT** /categories/ | 
[**itemAddPost**](SWGDefaultApi.md#itemaddpost) | **POST** /item/add/ | 
[**itemAddbulkPost**](SWGDefaultApi.md#itemaddbulkpost) | **POST** /item/addbulk/ | 
[**itemDelete**](SWGDefaultApi.md#itemdelete) | **DELETE** /item/ | 
[**itemPut**](SWGDefaultApi.md#itemput) | **PUT** /item/ | 
[**itemsCountPost**](SWGDefaultApi.md#itemscountpost) | **POST** /items/count/ | 
[**itemsPost**](SWGDefaultApi.md#itemspost) | **POST** /items/ | 
[**itemsallfieldsPost**](SWGDefaultApi.md#itemsallfieldspost) | **POST** /items/?allfields | 
[**ordersPost**](SWGDefaultApi.md#orderspost) | **POST** /orders/ | 
[**queryPost**](SWGDefaultApi.md#querypost) | **POST** /query/ | 
[**queryallfieldsPost**](SWGDefaultApi.md#queryallfieldspost) | **POST** /query/?allfields | 
[**servicesDelete**](SWGDefaultApi.md#servicesdelete) | **DELETE** /services/ | 
[**servicesGet**](SWGDefaultApi.md#servicesget) | **GET** /services/ | 
[**servicesPost**](SWGDefaultApi.md#servicespost) | **POST** /services/ | 
[**servicesPut**](SWGDefaultApi.md#servicesput) | **PUT** /services/ | 
[**writeDelete**](SWGDefaultApi.md#writedelete) | **DELETE** /write/ | 
[**writePost**](SWGDefaultApi.md#writepost) | **POST** /write/ | 


# **allGet**
```objc
-(NSNumber*) allGetWithCompletionHandler: 
        (void (^)(NSArray<SWGInventoryGroup>* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];



SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance allGetWithCompletionHandler: 
          ^(NSArray<SWGInventoryGroup>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->allGet: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<SWGInventoryGroup>***](SWGInventoryGroup.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **categoriesDelete**
```objc
-(NSNumber*) categoriesDeleteWithId: (NSString*) _id
        completionHandler: (void (^)(SWGResponse* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


NSString* _id = @"_id_example"; // Id of category to remove

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance categoriesDeleteWithId:_id
          completionHandler: ^(SWGResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->categoriesDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| Id of category to remove | 

### Return type

[**SWGResponse***](SWGResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **categoriesPost**
```objc
-(NSNumber*) categoriesPostWithQuery: (SWGDictionary*) query
        completionHandler: (void (^)(NSArray<SWGCategory>* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


SWGDictionary* query = [[SWGDictionary alloc] init]; // Category to query against system (optional)

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance categoriesPostWithQuery:query
          completionHandler: ^(NSArray<SWGCategory>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->categoriesPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | [**SWGDictionary***](SWGDictionary*.md)| Category to query against system | [optional] 

### Return type

[**NSArray<SWGCategory>***](SWGCategory.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **categoriesPut**
```objc
-(NSNumber*) categoriesPutWithId: (NSString*) _id
    category: (SWGCategory*) category
        completionHandler: (void (^)(SWGCategory* output, NSError* error)) handler;
```



If no ID is specified a new category will be created!

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


NSString* _id = @"_id_example"; // category id to update.
SWGCategory* category = [[SWGCategory alloc] init]; // New category information.

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance categoriesPutWithId:_id
              category:category
          completionHandler: ^(SWGCategory* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->categoriesPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| category id to update. | 
 **category** | [**SWGCategory***](SWGCategory*.md)| New category information. | 

### Return type

[**SWGCategory***](SWGCategory.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemAddPost**
```objc
-(NSNumber*) itemAddPostWithItem: (SWGItem*) item
        completionHandler: (void (^)(SWGItem* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


SWGItem* item = [[SWGItem alloc] init]; // Item to create.

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance itemAddPostWithItem:item
          completionHandler: ^(SWGItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->itemAddPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **item** | [**SWGItem***](SWGItem*.md)| Item to create. | 

### Return type

[**SWGItem***](SWGItem.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemAddbulkPost**
```objc
-(NSNumber*) itemAddbulkPostWithItems: (NSArray<SWGItem>*) items
        completionHandler: (void (^)(SWGResponse* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


NSArray<SWGItem>* items = @[[[SWGItem alloc] init]]; // Items to create.

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance itemAddbulkPostWithItems:items
          completionHandler: ^(SWGResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->itemAddbulkPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **items** | [**NSArray&lt;SWGItem&gt;***](SWGItem.md)| Items to create. | 

### Return type

[**SWGResponse***](SWGResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemDelete**
```objc
-(NSNumber*) itemDeleteWithId: (NSString*) _id
        completionHandler: (void (^)(SWGResponse* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


NSString* _id = @"_id_example"; // item id to remove

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance itemDeleteWithId:_id
          completionHandler: ^(SWGResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->itemDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| item id to remove | 

### Return type

[**SWGResponse***](SWGResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemPut**
```objc
-(NSNumber*) itemPutWithId: (NSString*) _id
    item: (SWGDictionary*) item
        completionHandler: (void (^)(SWGResponse* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


NSString* _id = @"_id_example"; // item id to update.
SWGDictionary* item = [[SWGDictionary alloc] init]; // New item information.

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance itemPutWithId:_id
              item:item
          completionHandler: ^(SWGResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->itemPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| item id to update. | 
 **item** | [**SWGDictionary***](SWGDictionary*.md)| New item information. | 

### Return type

[**SWGResponse***](SWGResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemsCountPost**
```objc
-(NSNumber*) itemsCountPostWithQuery: (SWGDictionary*) query
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


SWGDictionary* query = [[SWGDictionary alloc] init]; // Item to query against system. (optional)

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance itemsCountPostWithQuery:query
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->itemsCountPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | [**SWGDictionary***](SWGDictionary*.md)| Item to query against system. | [optional] 

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
-(NSNumber*) itemsPostWithQuery: (SWGDictionary*) query
        completionHandler: (void (^)(NSArray<SWGItem>* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


SWGDictionary* query = [[SWGDictionary alloc] init]; // Item to query against system. (optional)

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance itemsPostWithQuery:query
          completionHandler: ^(NSArray<SWGItem>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->itemsPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | [**SWGDictionary***](SWGDictionary*.md)| Item to query against system. | [optional] 

### Return type

[**NSArray<SWGItem>***](SWGItem.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemsallfieldsPost**
```objc
-(NSNumber*) itemsallfieldsPostWithQuery: (SWGDictionary*) query
        completionHandler: (void (^)(NSArray<SWGDictionary>* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


SWGDictionary* query = [[SWGDictionary alloc] init]; // Item to query against system. (optional)

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance itemsallfieldsPostWithQuery:query
          completionHandler: ^(NSArray<SWGDictionary>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->itemsallfieldsPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | [**SWGDictionary***](SWGDictionary*.md)| Item to query against system. | [optional] 

### Return type

[**NSArray<SWGDictionary>***](SWGDictionary.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ordersPost**
```objc
-(NSNumber*) ordersPostWithQuery: (SWGDictionary*) query
        completionHandler: (void (^)(NSArray<SWGOrder>* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


SWGDictionary* query = [[SWGDictionary alloc] init]; // Order to query against system. (optional)

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance ordersPostWithQuery:query
          completionHandler: ^(NSArray<SWGOrder>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->ordersPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | [**SWGDictionary***](SWGDictionary*.md)| Order to query against system. | [optional] 

### Return type

[**NSArray<SWGOrder>***](SWGOrder.md)

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
    query: (SWGDictionary*) query
        completionHandler: (void (^)(NSArray<SWGItem>* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

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
NSNumber* minprice = @3.4; // Min price in hundreds. (optional)
NSNumber* maxprice = @3.4; // Max price in hudreds. (optional)
SWGDictionary* query = [[SWGDictionary alloc] init]; // Custom parameters to query against system. (optional)

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance queryPostWithPage:page
              categoryid:categoryid
              sort:sort
              search:search
              minprice:minprice
              maxprice:maxprice
              query:query
          completionHandler: ^(NSArray<SWGItem>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->queryPost: %@", error);
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
 **minprice** | **NSNumber***| Min price in hundreds. | [optional] 
 **maxprice** | **NSNumber***| Max price in hudreds. | [optional] 
 **query** | [**SWGDictionary***](SWGDictionary*.md)| Custom parameters to query against system. | [optional] 

### Return type

[**NSArray<SWGItem>***](SWGItem.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **queryallfieldsPost**
```objc
-(NSNumber*) queryallfieldsPostWithPage: (NSNumber*) page
    categoryid: (NSString*) categoryid
    sort: (NSString*) sort
    search: (NSString*) search
    minprice: (NSNumber*) minprice
    maxprice: (NSNumber*) maxprice
    query: (SWGDictionary*) query
        completionHandler: (void (^)(NSArray<SWGDictionary>* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

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
NSNumber* minprice = @3.4; // Min price in hundreds. (optional)
NSNumber* maxprice = @3.4; // Max price in hudreds. (optional)
SWGDictionary* query = [[SWGDictionary alloc] init]; // Custom parameters to query against system. (optional)

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance queryallfieldsPostWithPage:page
              categoryid:categoryid
              sort:sort
              search:search
              minprice:minprice
              maxprice:maxprice
              query:query
          completionHandler: ^(NSArray<SWGDictionary>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->queryallfieldsPost: %@", error);
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
 **minprice** | **NSNumber***| Min price in hundreds. | [optional] 
 **maxprice** | **NSNumber***| Max price in hudreds. | [optional] 
 **query** | [**SWGDictionary***](SWGDictionary*.md)| Custom parameters to query against system. | [optional] 

### Return type

[**NSArray<SWGDictionary>***](SWGDictionary.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servicesDelete**
```objc
-(NSNumber*) servicesDeleteWithId: (NSString*) _id
        completionHandler: (void (^)(SWGResponse* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


NSString* _id = @"_id_example"; // ID of the service to update

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance servicesDeleteWithId:_id
          completionHandler: ^(SWGResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->servicesDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| ID of the service to update | 

### Return type

[**SWGResponse***](SWGResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servicesGet**
```objc
-(NSNumber*) servicesGetWithCompletionHandler: 
        (void (^)(NSArray<SWGService>* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];



SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance servicesGetWithCompletionHandler: 
          ^(NSArray<SWGService>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->servicesGet: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<SWGService>***](SWGService.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servicesPost**
```objc
-(NSNumber*) servicesPostWithService: (SWGService*) service
        completionHandler: (void (^)(SWGService* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


SWGService* service = [[SWGService alloc] init]; // Service to create.

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance servicesPostWithService:service
          completionHandler: ^(SWGService* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->servicesPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service** | [**SWGService***](SWGService*.md)| Service to create. | 

### Return type

[**SWGService***](SWGService.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servicesPut**
```objc
-(NSNumber*) servicesPutWithId: (NSString*) _id
    service: (SWGService*) service
        completionHandler: (void (^)(SWGResponse* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


NSString* _id = @"_id_example"; // ID of the service to update
SWGService* service = [[SWGService alloc] init]; // New service data to set.

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance servicesPutWithId:_id
              service:service
          completionHandler: ^(SWGResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->servicesPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| ID of the service to update | 
 **service** | [**SWGService***](SWGService*.md)| New service data to set. | 

### Return type

[**SWGResponse***](SWGResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **writeDelete**
```objc
-(NSNumber*) writeDeleteWithId: (NSString*) _id
        completionHandler: (void (^)(SWGResponse* output, NSError* error)) handler;
```



### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


NSString* _id = @"_id_example"; // Will delete event attached to this serviceid (optional)

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance writeDeleteWithId:_id
          completionHandler: ^(SWGResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->writeDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| Will delete event attached to this serviceid | [optional] 

### Return type

[**SWGResponse***](SWGResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **writePost**
```objc
-(NSNumber*) writePostWithEventRequest: (SWGEventRequest*) eventRequest
        completionHandler: (void (^)(SWGResponse* output, NSError* error)) handler;
```



Will ovveride the current event of the specified service.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: APIKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"APIKey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"APIKey"];

// Configure API key authorization: (authentication scheme: AccountID)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"accountid"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"accountid"];


SWGEventRequest* eventRequest = [[SWGEventRequest alloc] init]; // Event to upload

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance writePostWithEventRequest:eventRequest
          completionHandler: ^(SWGResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->writePost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventRequest** | [**SWGEventRequest***](SWGEventRequest*.md)| Event to upload | 

### Return type

[**SWGResponse***](SWGResponse.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

