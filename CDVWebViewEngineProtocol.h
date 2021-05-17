#import <UIKit/UIKit.h>

#define kCDVWebViewEngineScriptMessageHandlers @"kCDVWebViewEngineScriptMessageHandlers"
#define kCDVWebViewEngineWKNavigationDelegate @"kCDVWebViewEngineWKNavigationDelegate"
#define kCDVWebViewEngineWKUIDelegate @"kCDVWebViewEngineWKUIDelegate"
#define kCDVWebViewEngineWebViewPreferences @"kCDVWebViewEngineWebViewPreferences"

@protocol CDVWebViewEngineProtocol <NSObject>

@property (nonatomic, strong, readonly) UIView* engineWebView;

- (id)loadRequest:(NSURLRequest*)request;
- (id)loadHTMLString:(NSString*)string baseURL:(NSURL*)baseURL;
- (void)evaluateJavaScript:(NSString*)javaScriptString completionHandler:(void (^)(id, NSError*))completionHandler;

- (NSURL*)URL;
- (BOOL)canLoadRequest:(NSURLRequest*)request;

- (instancetype)initWithFrame:(CGRect)frame;
- (void)updateWithInfo:(NSDictionary*)info;

@end
