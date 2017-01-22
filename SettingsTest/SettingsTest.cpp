/*
 * Copyright 2017 Paradoxon <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */


#include "SettingsTest.h"

void SettingsTest::SettingsTest(){
	mySettings = new Settings("SettingsTest","SettingsTest\test");
	
	mySettings->Add(new StringValueSetting("MyStringSetting", "StringValue",
		"server address expected"));
	mySettings->Add(new BooleanValueSetting("BooleanSetting", true,"BoolanTest");

	fCaptureRateSetting = new EnumeratedStringValueSetting("CaptureRate",
		kCaptureRates[3].name, &CaptureRateAt,
		B_TRANSLATE("capture rate expected"),
		"unrecognized capture rate specified");

	fUploadClientSetting = new EnumeratedStringValueSetting("EnumeratedValud",
		kStringList[1], &kStringList,
		"Stringlist expected",
		"Nicht erkannt");
	fSettings->TryReadingSettings();
}


int main() {
	SettingsTest app;
	return 0;
}

