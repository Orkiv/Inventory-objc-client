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
[**itemPut**](INVDefaultApi.md#itemput) | **PUT** /item/ | 
[**itemsCountPost**](INVDefaultApi.md#itemscountpost) | **POST** /items/count/ | 
[**itemsPost**](INVDefaultApi.md#itemspost) | **POST** /items/ | 
[**itemsallfieldsPost**](INVDefaultApi.md#itemsallfieldspost) | **POST** /items/?allfields | 
[**ordersPost**](INVDefaultApi.md#orderspost) | **POST** /orders/ | 
[**queryPost**](INVDefaultApi.md#querypost) | **POST** /query/ | 
[**queryallfieldsPost**](INVDefaultApi.md#queryallfieldspost) | **POST** /query/?allfields | 
[**servicesDelete**](INVDefaultApi.md#servicesdelete) | **DELETE** /services/ | 
[**servicesGet**](INVDefaultApi.md#servicesget) | **GET** /services/ | 
[**servicesPost**](INVDefaultApi.md#servicespost) | **POST** /services/ | 
[**servicesPut**](INVDefaultApi.md#servicesput) | **PUT** /services/ | 
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
-(NSNumber*) categoriesPostWithQuery: (INVDictionary*) query
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


INVDictionary* query = [[INVDictionary alloc] init]; // Category to query against system (optional)

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
 **query** | [**INVDictionary***](INVDictionary*.md)| Category to query against system | [optional] 

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
-(NSNumber*) itemAddPostWithItem: (INVItem*) item
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


INVItem* item = [[INVItem alloc] init]; // Item to create.

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
 **item** | [**INVItem***](INVItem*.md)| Item to create. | 

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
-(NSNumber*) itemAddbulkPostWithItems: (NSArray<INVItem>*) items
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


NSArray<INVItem>* items = @[[[INVItem alloc] init]]; // Items to create.

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
 **items** | [**NSArray&lt;INVItem&gt;***](INVItem.md)| Items to create. | 

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

# **itemPut**
```objc
-(NSNumber*) itemPutWithId: (NSString*) _id
    item: (INVDictionary*) item
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
INVDictionary* item = [[INVDictionary alloc] init]; // New item information.

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
 **item** | [**INVDictionary***](INVDictionary*.md)| New item information. | 

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
-(NSNumber*) itemsCountPostWithQuery: (INVDictionary*) query
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


INVDictionary* query = [[INVDictionary alloc] init]; // Item to query against system. (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemsCountPostWithQuery:query
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
 **query** | [**INVDictionary***](INVDictionary*.md)| Item to query against system. | [optional] 

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
-(NSNumber*) itemsPostWithQuery: (INVDictionary*) query
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


INVDictionary* query = [[INVDictionary alloc] init]; // Item to query against system. (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemsPostWithQuery:query
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
 **query** | [**INVDictionary***](INVDictionary*.md)| Item to query against system. | [optional] 

### Return type

[**NSArray<INVItem>***](INVItem.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **itemsallfieldsPost**
```objc
-(NSNumber*) itemsallfieldsPostWithQuery: (INVDictionary*) query
        completionHandler: (void (^)(NSArray<INVDictionary>* output, NSError* error)) handler;
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


INVDictionary* query = [[INVDictionary alloc] init]; // Item to query against system. (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance itemsallfieldsPostWithQuery:query
          completionHandler: ^(NSArray<INVDictionary>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->itemsallfieldsPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | [**INVDictionary***](INVDictionary*.md)| Item to query against system. | [optional] 

### Return type

[**NSArray<INVDictionary>***](INVDictionary.md)

### Authorization

[APIKey](../README.md#APIKey), [AccountID](../README.md#AccountID)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ordersPost**
```objc
-(NSNumber*) ordersPostWithQuery: (INVDictionary*) query
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


INVDictionary* query = [[INVDictionary alloc] init]; // Order to query against system. (optional)

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
 **query** | [**INVDictionary***](INVDictionary*.md)| Order to query against system. | [optional] 

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
    query: (INVDictionary*) query
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
NSNumber* minprice = @3.4; // Min price in hundreds. (optional)
NSNumber* maxprice = @3.4; // Max price in hudreds. (optional)
INVDictionary* query = [[INVDictionary alloc] init]; // Custom parameters to query against system. (optional)

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
 **minprice** | **NSNumber***| Min price in hundreds. | [optional] 
 **maxprice** | **NSNumber***| Max price in hudreds. | [optional] 
 **query** | [**INVDictionary***](INVDictionary*.md)| Custom parameters to query against system. | [optional] 

### Return type

[**NSArray<INVItem>***](INVItem.md)

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
    query: (INVDictionary*) query
        completionHandler: (void (^)(NSArray<INVDictionary>* output, NSError* error)) handler;
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
NSNumber* minprice = @3.4; // Min price in hundreds. (optional)
NSNumber* maxprice = @3.4; // Max price in hudreds. (optional)
INVDictionary* query = [[INVDictionary alloc] init]; // Custom parameters to query against system. (optional)

INVDefaultApi*apiInstance = [[INVDefaultApi alloc] init];

[apiInstance queryallfieldsPostWithPage:page
              categoryid:categoryid
              sort:sort
              search:search
              minprice:minprice
              maxprice:maxprice
              query:query
          completionHandler: ^(NSArray<INVDictionary>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling INVDefaultApi->queryallfieldsPost: %@", error);
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
 **query** | [**INVDictionary***](INVDictionary*.md)| Custom parameters to query against system. | [optional] 

### Return type

[**NSArray<INVDictionary>***](INVDictionary.md)

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

# **servicesPost**
```objc
-(NSNumber*) servicesPostWithService: (INVService*) service
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


INVService* service = [[INVService alloc] init]; // Service to create.

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
 **service** | [**INVService***](INVService*.md)| Service to create. | 

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
    service: (INVService*) service
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
INVService* service = [[INVService alloc] init]; // New service data to set.

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
 **service** | [**INVService***](INVService*.md)| New service data to set. | 

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

