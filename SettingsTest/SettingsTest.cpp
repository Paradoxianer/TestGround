/*
 * Copyright 2017 Paradoxon <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */


#include "SettingsTest.h"

SettingsTest::SettingsTest(){
	mySettings = new Settings("SettingsTest","SettingsTest");
	
	mySettings->Add(new StringValueSetting("MyStringSetting", "StringValue",
		"server address expected"));
	mySettings->Add(new BooleanValueSetting("BooleanSetting", true));
	mySettings->TryReadingSettings();
	mySettings->SaveSettings();

}


int main() {
	SettingsTest app=SettingsTest();
	return 0;
}

