//
//  PierPayService.h
//  PierPaySDK
//
//  Created by zyma on 3/4/15.
//  Copyright (c) 2015 Pier.Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PIRPayModel.h"


@protocol PierPayServiceDelegate <NSObject>

- (void)pierPayServiceComplete:(NSDictionary *)result;

@end

@interface PierPayService : NSObject

/** servire model */
@property (nonatomic, strong) TransactionSMSRequest *smsRequestModel;

/** delegate */
@property (nonatomic, weak) id<PierPayServiceDelegate> delegate;

- (void)serviceGetPaySMS;

@end
