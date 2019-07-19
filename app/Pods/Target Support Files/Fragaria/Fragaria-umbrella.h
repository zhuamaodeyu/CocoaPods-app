#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Fragaria.h"
#import "MGSBoolToColourTransformer.h"
#import "MGSBoolToGlobalHintTransformer.h"
#import "MGSBreakpointDelegate.h"
#import "MGSColourScheme.h"
#import "MGSColourSchemeController.h"
#import "MGSColourSchemeSaveController.h"
#import "MGSColourToPlainTextTransformer.h"
#import "MGSDragOperationDelegate.h"
#import "MGSExtraInterfaceController.h"
#import "MGSFontWell.h"
#import "MGSFragariaTextViewDelegate.h"
#import "MGSFragariaView+Definitions.h"
#import "MGSFragariaView.h"
#import "MGSFragariaViewPrivate.h"
#import "MGSHybridUserDefaultsController.h"
#import "MGSLineNumberView.h"
#import "MGSMutableSubstring.h"
#import "MGSPreferencesProxyDictionary.h"
#import "MGSPrefsColourPropertiesViewController.h"
#import "MGSPrefsEditorPropertiesViewController.h"
#import "MGSPrefsViewController.h"
#import "MGSSyntaxController.h"
#import "MGSSyntaxDefinition.h"
#import "MGSSyntaxErrorController.h"
#import "MGSUserDefaults.h"
#import "MGSUserDefaultsController.h"
#import "MGSUserDefaultsControllerProtocol.h"
#import "NSColor+TransformedCompare.h"
#import "NSObject+Fragaria.h"
#import "NSScanner+Fragaria.h"
#import "NSSet+Fragaria.h"
#import "NSString+Fragaria.h"
#import "NSTextStorage+Fragaria.h"
#import "SMLAutoCompleteDelegate.h"
#import "SMLLayoutManager.h"
#import "SMLSyntaxColouring.h"
#import "SMLSyntaxColouringDelegate.h"
#import "SMLSyntaxDefinition.h"
#import "SMLSyntaxError.h"
#import "SMLTextView+MGSDragging.h"
#import "SMLTextView+MGSTextActions.h"
#import "SMLTextView.h"
#import "SMLTextViewPrivate.h"

FOUNDATION_EXPORT double FragariaVersionNumber;
FOUNDATION_EXPORT const unsigned char FragariaVersionString[];

