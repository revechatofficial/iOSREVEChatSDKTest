# iOSReveChatSDK
Test application on how to add reve chat sdk in iOS platform

Necessary or minimum requirements:

Xcode 7 or above
iOS 8 or above

## Installation
Through cocoapods. Write bellow line in your podfile.
```
pod 'ReveChatSDK'
```

## iOS SDK integration process
### Step 1:

To integrate iOS SDK with your iOS mobile app, please follow the below mentioned steps:

### Update your plist
The iOS SDK uses the camera and photo library in iOS.

If your app does not already request permissions for these features, you should update your info.plist file with a usage  description  for NSPhotoLibraryUsageDescription and NSCameraUsageDescription.
```/* You can do this by adding the following lines in your plist source code */
<key>NSPhotoLibraryUsageDescription</key>
<string><description to use photo library></string>
<key>NSCameraUsageDescription</key>
<string><description to use camera></string>
<key>NSAppTransportSecurity</key>        <dict>
<key>NSAllowsArbitraryLoads</key>
<true/></dict>
<key>NSMicrophoneUsageDescription</key>
<string><Add your description here></string>
<key>NSCameraUsageDescription</key>
<string><Add your description here></string>
```
### Import ReveChat headers
Objective-c
```Objective-c
#import < ReveChatSDK/ReveChatSDK.h>
```
Swift
```Swift
import ReveChatSDK
```

### Setup Account ID
Objective-c
```Objective-c
[[ReveChatManager sharedManager]
setupAccountWith:<your account id>];
```
Swift
```Swift
let reveChatManager = ReveChatManager()
reveChatManager.setupAccount(with: <your account id   as string> )
```

### Initiate ReveChat
Objective-c
```Objective-c
[[ReveChatManager sharedManager]
 initiateReveChatWith:<visitor name>
 visitorEmail:<visitor email>
 visitorMobile:<visitor mobile>
 onNavigationViewController:<your navigation
 controller>];
```
Swift
```Swift
/* initiate the class with name, email , mobile and parent controller of the sdk as parameters*/
reveChatManager.initiateReveChat(with: <visitor name>,
visitorEmail: <visitor email>,
visitorMobile: <visitor mobile>,
onNavigationViewController: <UINavigationController on which you want it to load>)
*To initiate video call.The audio parameter should be false
```

## Tutorial
For more details go to this link: https://www.revechat.com/getting-started-ios-sdk/
