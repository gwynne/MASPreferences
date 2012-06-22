//
// You create an application Preferences window using code like this:
//     _preferencesWindowController = [[MASPreferencesWindowController alloc] initWithViewControllers:controllers
//                                                                                              title:title]
//
// To open the Preferences window:
//     [_preferencesWindowController showWindow:sender]
//

#import "MASPreferencesViewController.h"

extern NSString *const kMASPreferencesWindowControllerDidChangeViewNotification;

@interface MASPreferencesWindowController : NSWindowController <NSToolbarDelegate, NSWindowDelegate>

@property(nonatomic,strong,readonly)		NSArray			*viewControllers;
@property(nonatomic,assign,readonly)		NSUInteger		indexOfSelectedController;
@property(nonatomic,strong,readonly)		NSViewController<MASPreferencesViewController>	*selectedViewController;
@property(nonatomic,copy,readonly)			NSString		*title;

- (id)initWithViewControllers:(NSArray *)viewControllers;
- (id)initWithViewControllers:(NSArray *)viewControllers title:(NSString *)title;

- (void)selectControllerAtIndex:(NSUInteger)controllerIndex;

- (IBAction)goNextTab:(id)sender;
- (IBAction)goPreviousTab:(id)sender;

@end
