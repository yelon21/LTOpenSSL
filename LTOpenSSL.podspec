#
# Be sure to run `pod lib lint LTOpenSSL.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LTOpenSSL'
  s.version          = '0.1.0'
  s.summary          = 'RSA Base64 by OpenSSL.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: RSA Base64 by OpenSSL.
RSA from PEM file path
RSA from PEM Base64 string
RSA from modulus and exponent
generate RSA PEM Base64 pubKey priKey
rsa_enc rsa_dec
                       DESC

  s.homepage         = 'https://github.com/yelon21/LTOpenSSL'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'yelon21' => 'yl21ly@qq.com' }
  s.source           = { :git => 'https://github.com/yelon21/LTOpenSSL.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '6.0'

  s.source_files = 'Classes/**/*'
  s.vendored_libraries = 'lib/*.a'
  s.vendored_frameworks = 'lib/OpenSSL.framework'
  
  # s.resource_bundles = {
  #   'LTOpenSSL' => ['LTOpenSSL/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  s.dependency 'OpenSSL'
end
