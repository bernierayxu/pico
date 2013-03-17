// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Name of the domain to which search results will be restricted.
 
 
 @ingroup FindingServicePortType
*/
@interface DomainFilter : NSObject <PicoBindable> {

@private
    NSMutableArray *_domainName;
    NSString *_delimiter;
    NSMutableArray *_any;

}


/**
 
 Specify the name of the domain to which you want to restrict search
 results. Only items listed within the specified domain will be returned
 in the search results. Domain names can be retrieved from an aspect
 histogram.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *domainName;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *delimiter;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end