/*******************************************************************************
	MyDocument.h - <http://github.com/rentzsch/MarkdownLive>
		Copyright (c) 2006-2010 Jonathan 'Wolf' Rentzsch: <http://rentzsch.com>
		Some rights reserved: <http://opensource.org/licenses/mit-license.php>

	***************************************************************************/

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@interface MyDocument : NSDocument {
	IBOutlet	NSTextView					*markdownSourceTextView;
	IBOutlet	WebView						*htmlPreviewWebView;
	
				NSMutableAttributedString	*markdownSource;
	
				NSTimeInterval				whenToUpdatePreview;
				NSTimer						*htmlPreviewTimer;
				
				BOOL						hasSavedOrigin;
				NSPoint						savedOrigin;
				BOOL						savedAtBottom;
}

- (IBAction)copyGeneratedHTMLAction:(id)sender;

@end
