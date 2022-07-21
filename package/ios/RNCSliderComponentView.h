#ifdef RCT_NEW_ARCH_ENABLED

#import <UIKit/UIKit.h>
#import <React/RCTViewComponentView.h>
#import "RNCSlider.h"

NS_ASSUME_NONNULL_BEGIN

@interface RNCSliderComponentView : RCTViewComponentView

@property (nonatomic, copy) RCTBubblingEventBlock onRNCSliderValueChange;
@property (nonatomic, copy) RCTBubblingEventBlock onRNCSliderSlidingStart;
@property (nonatomic, copy) RCTBubblingEventBlock onRNCSliderSlidingComplete;

@property (nonatomic, assign) float step;
@property (nonatomic, assign) float lastValue;
@property (nonatomic, assign) bool isSliding;

@property (nonatomic, strong) UIImage *trackImage;
@property (nonatomic, strong) UIImage *minimumTrackImage;
@property (nonatomic, strong) UIImage *maximumTrackImage;
@property (nonatomic, strong) UIImage *thumbImage;
@property (nonatomic, assign) bool tapToSeek;
@property (nonatomic, strong) NSString *accessibilityUnits;
@property (nonatomic, strong) NSArray *accessibilityIncrements;

- (float) discreteValue:(float)value;

@end

NS_ASSUME_NONNULL_END

#endif
