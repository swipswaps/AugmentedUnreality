/*
Copyright 2016-2020 Krzysztof Lis

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http ://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "AugmentedUnreality.h"
#include "AURLog.h"

IMPLEMENT_MODULE(FAugmentedUnrealityModule, AugmentedUnreality)
DEFINE_LOG_CATEGORY(LogAUR)

void FAugmentedUnrealityModule::StartupModule()
{
	UE_LOG(LogAUR, Log, TEXT("AugmentedUnreality: module startup"))
}

void FAugmentedUnrealityModule::ShutdownModule()
{
	UE_LOG(LogAUR, Log, TEXT("AugmentedUnreality: module shutdown"));
}
