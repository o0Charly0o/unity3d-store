/*
 * Copyright (C) 2012 Soomla Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

@class AppStoreItem;

/**
 * This class provide basic storage operations on the App Store's Non-Consumable items.
 */
@interface NonConsumableStorage : NSObject

/**
 * Figure out if the given Non-Consumable AppStoreItem exists.
 * appStoreItem is the required Non-Consumable AppStoreItem.
 */
- (BOOL)nonConsumableExists:(AppStoreItem*)appStoreItem;
/**
 * Adds the given App Store Non-Consumable item to the storage.
 * appStoreItem is the required App Store Non-Consumable item.
 */
- (void)add:(AppStoreItem*)appStoreItem;
/**
 * Removes the given App Store Non-Consumable item from the storage.
 * appStoreItem is the required App Store Non-Consumable item.
 */
- (void)remove:(AppStoreItem*)appStoreItem;


@end