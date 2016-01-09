//
//  MapViewController.h
//  MapData
//
//  Created by さき on 2016/01/07.
//  Copyright © 2016年 saki.yokota. All rights reserved.
//

#import "ViewController.h"

#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface MapViewController : ViewController


@property (assign, nonatomic) BOOL isLocation;

// 現在位置記録用
@property (assign, nonatomic) CLLocationDegrees longitude;
@property (assign, nonatomic) CLLocationDegrees latitude;
    

@end
