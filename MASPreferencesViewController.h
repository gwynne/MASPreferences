//
// Any controller providing preference pane view must support this protocol
//

@protocol MASPreferencesViewController <NSObject>

@optional

- (void)viewWillAppear;
- (void)viewDidDisappear;

@property(nonatomic,strong,readonly)	NSView		*initialKeyView;

@required

@property(nonatomic,copy,readonly)		NSString	*identifier;
@property(nonatomic,strong,readonly)	NSImage		*toolbarItemImage;
@property(nonatomic,copy,readonly)		NSString	*toolbarItemLabel;

@end
