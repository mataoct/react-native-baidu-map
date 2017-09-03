//
//  RCTBaiduMapViewManager.h
//  RCTBaiduMap
//
//  Created by lovebing on Aug 6, 2016.
//  Copyright © 2016 lovebing.org. All rights reserved.
//

#ifndef RCTBaiduMapViewManager_h
#define RCTBaiduMapViewManager_h

#import "RCTBaiduMapView.h"

@interface RCTBaiduMapViewManager : RCTViewManager<BMKMapViewDelegate,BMKLocationServiceDelegate>

@property (nonatomic) BMKLocationService *locService;
@property (nonatomic) RCTBaiduMapView    *mapView;

+(void)initSDK:(NSString *)key;

-(void)sendEvent:(RCTBaiduMapView *) mapView params:(NSDictionary *) params;

@end

#endif /* RCTBaiduMapViewManager_h */
