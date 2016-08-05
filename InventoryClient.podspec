#
# Be sure to run `pod lib lint InventoryClient.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = "InventoryClient"
    s.version          = "1.0.0"

    s.summary          = "InventoryAPI"
    s.description      = <<-DESC
                         Orkiv Inventory API client 
                         DESC

    s.platform     = :ios, '7.0'
    s.requires_arc = true

    s.framework    = 'SystemConfiguration'

    s.homepage     = "https://github.com/Orkiv/Inventory-php-client"
    s.license      = "Apache License, Version 2.0"
    s.source       = { :git => "https://github.com/Orkiv/Inventory-php-client.git", :tag => "#{s.version}" }
    s.author       = { "Swagger" => "apiteam@swagger.io" }

    s.source_files = 'InventoryClient/**/*.{m,h}'
    s.public_header_files = 'InventoryClient/**/*.h'


    s.dependency 'AFNetworking', '~> 3'
    s.dependency 'JSONModel', '~> 1.2'
    s.dependency 'ISO8601', '~> 0.5'
end

