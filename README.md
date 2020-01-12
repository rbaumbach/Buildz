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

## References:

[Basic xcodebuild usage](https://medium.com/xcblog/xcodebuild-deploy-ios-app-from-command-line-c6defff0d8b8)
[xcodebuild destination options](https://www.mokacoding.com/blog/xcodebuild-destination-options/)
