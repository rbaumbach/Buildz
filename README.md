# Buildz

A repo to practice building apps manually...

## Using xcodebuild

### Simple

#### Building

`xcodebuild -scheme "Simple" -project "Simple.xcodeproj" build`

#### Testing

`xcodebuild -scheme "Simple" -project "Simple.xcodeproj" -destination "name=iPhone 11 Pro" test`

#### Cleaning

`xcodebuild clean`

Or add `clean` to `xcodebuild build` command:

`xcodebuild -scheme "Simple" -project "Simple.xcodeproj" clean build`

#### Analyze

`xcodebuild analyze`

#### Archive

First, build using generic platform:

`xcodebuild -scheme "Simple" -project "Simple.xcodeproj" -destination generic/platform=iOS build`

Second, build the `xcarchive`:

```bash
xcodebuild -scheme "Simple" -project "Simple.xcodeproj" \
  -archivePath ./Simple.xcarchive \
  archive
```

Third, generate the proper `exportOptions.plist`:

Note: This example uses manual signing with a development build:

```
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
	<key>method</key>
	<string>development</string>
	<key>provisioningProfiles</key>
	<dict>
		<key>ENTER YOUR BUNDLE ID HERE</key>
		<string>ENTER YOUR PROVISIONING PROFILE HERE</string>
	</dict>
	<key>signingStyle</key>
	<string>manual</string>
</dict>
</plist>
```

Lastly, export the `ipa`:

```bash
xcodebuild -exportArchive \
  -archivePath ./Simple.xcarchive \
  -exportOptionsPlist ./exportOptions.plist \
  -exportPath ./Simple.ipa
```

### Advanced

#### Testing

Testing with specific device and iOS version  with multiple destinations:

```bash
xcodebuild -scheme "Simple" -project "Simple.xcodeproj" \
  -destination "name=iPad Pro (12.9-inch) (3rd generation),OS=13.0" \
  -destination "name=iPhone 11,OS=13.3" \
  test
```

Testing without building:

`xcodebuild -scheme "Simple" -project "Simple.xcodeproj" -destination "name=iPhone 11 Pro" test-without-building`

### Additional commands

List simulators

`instruments -s devices`

## Notes:

Since this is an iOS Application, in order to run build or archive commands, it is required to create a real "App ID" and development provisioning profile.

These commands can all currently be used using the "Simple" Xcode project.

## References:

* [Basic xcodebuild usage](https://medium.com/xcblog/xcodebuild-deploy-ios-app-from-command-line-c6defff0d8b8)
* [xcodebuild destination options](https://www.mokacoding.com/blog/xcodebuild-destination-options/)
* [simctl](https://nshipster.com/simctl/)
