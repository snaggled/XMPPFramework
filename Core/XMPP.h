// 
// Core classes
// 

#import "XMPPJID.h"
#import "XMPPStream.h"
#import "XMPPElement.h"
#import "XMPPIQ.h"
#import "XMPPMessage.h"
#import "XMPPPresence.h"
#import "XMPPModule.h"

// 
// Authentication
// 

#import "XMPPSASLAuthentication.h"
#import "Digest-MD5/XMPPDigestMD5Authentication.h"
#import "Plain/XMPPPlainAuthentication.h"
#import "X-Facebook-Platform/XMPPXFacebookPlatformAuthentication.h"
#import "Anonymous/XMPPAnonymousAuthentication.h"
#import "Deprecated-Plain/XMPPDeprecatedPlainAuthentication.h"
#import "Deprecated-Digest/XMPPDeprecatedDigestAuthentication.h"

// 
// Categories
// 

#import "NSXMLElement+XMPP.h"
