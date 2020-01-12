# Buildz

A repo to practice building apps manually...

## Using XcodeBuild

### Building

`xcodebuild -scheme "Simple" -project "Simple.xcodeproj" build`

### Testing

``

### Cleaning

`xcodebuild clean`

Or add `clean` to `xcodebuild build` command:

`xcodebuild -scheme "Simple" -project "Simple.xcodeproj" clean build`

## Notes:

Since this is an iOS Application, in order to run build or archive commands, it is required to create a real "App ID" and development provisioning profile.
