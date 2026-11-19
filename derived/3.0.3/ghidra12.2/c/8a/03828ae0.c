
void FUN_03828ae0(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_04bb3350;
  pcVar1 = (char *)(param_1 + 0x568ec);
  pcVar2 = (char *)(param_1 + 0x5524c);
  pcVar3 = (char *)(param_1 + 0x53bac);
  if (*(char *)(param_1 + 0x55438) != '\0') {
    lVar7 = *(long *)(param_1 + 0x55440);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x55448)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x55440) = 0;
    *(undefined1 *)(param_1 + 0x55438) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x5250c);
  if (*(char *)(param_1 + 0x53d98) != '\0') {
    lVar7 = *(long *)(param_1 + 0x53da0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x53da8)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x53da0) = 0;
    *(undefined1 *)(param_1 + 0x53d98) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  if (*(char *)(param_1 + 0x526f8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x52700);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x52708)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x52700) = 0;
    *(undefined1 *)(param_1 + 0x526f8) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x1b2ac);
  if (*(char *)(param_1 + 0x51058) != '\0') {
    lVar7 = *(long *)(param_1 + 0x51060);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x51068)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x51060) = 0;
    *(char *)(param_1 + 0x51058) = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x1c94c);
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x19c0c);
  FUN_0382973c(param_1 + 0x1cb30);
  if (*(char *)(param_1 + 0x1b498) != '\0') {
    lVar7 = *(long *)(param_1 + 0x1b4a0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x1b4a8)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x1b4a0) = 0;
    *(undefined1 *)(param_1 + 0x1b498) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x1856c);
  if (*(char *)(param_1 + 0x19df8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x19e00);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x19e08)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x19e00) = 0;
    *(undefined1 *)(param_1 + 0x19df8) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x16ecc);
  if (*(char *)(param_1 + 0x18758) != '\0') {
    lVar7 = *(long *)(param_1 + 0x18760);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x18768)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x18760) = 0;
    *(undefined1 *)(param_1 + 0x18758) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x1582c);
  if (*(char *)(param_1 + 0x170b8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x170c0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x170c8)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x170c0) = 0;
    *(undefined1 *)(param_1 + 0x170b8) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x1418c);
  if (*(char *)(param_1 + 0x15a18) != '\0') {
    lVar7 = *(long *)(param_1 + 0x15a20);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x15a28)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x15a20) = 0;
    *(undefined1 *)(param_1 + 0x15a18) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x12aec);
  if (*(char *)(param_1 + 0x14378) != '\0') {
    lVar7 = *(long *)(param_1 + 0x14380);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x14388)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x14380) = 0;
    *(undefined1 *)(param_1 + 0x14378) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x1144c);
  if (*(char *)(param_1 + 0x12cd8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x12ce0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x12ce8)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x12ce0) = 0;
    *(undefined1 *)(param_1 + 0x12cd8) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0xfdac);
  if (*(char *)(param_1 + 0x11638) != '\0') {
    lVar7 = *(long *)(param_1 + 0x11640);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x11648)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x11640) = 0;
    *(undefined1 *)(param_1 + 0x11638) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0xe70c);
  if (*(char *)(param_1 + 0xff98) != '\0') {
    lVar7 = *(long *)(param_1 + 0xffa0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xffa8)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0xffa0) = 0;
    *(undefined1 *)(param_1 + 0xff98) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0xd06c);
  if (*(char *)(param_1 + 0xe8f8) != '\0') {
    lVar7 = *(long *)(param_1 + 0xe900);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xe908)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0xe900) = 0;
    *(undefined1 *)(param_1 + 0xe8f8) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0xb9cc);
  if (*(char *)(param_1 + 0xd258) != '\0') {
    lVar7 = *(long *)(param_1 + 0xd260);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xd268)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0xd260) = 0;
    *(undefined1 *)(param_1 + 0xd258) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0xa32c);
  if (*(char *)(param_1 + 0xbbb8) != '\0') {
    lVar7 = *(long *)(param_1 + 0xbbc0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xbbc8)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0xbbc0) = 0;
    *(undefined1 *)(param_1 + 0xbbb8) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x8c8c);
  if (*(char *)(param_1 + 0xa518) != '\0') {
    lVar7 = *(long *)(param_1 + 0xa520);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0xa528)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0xa520) = 0;
    *(undefined1 *)(param_1 + 0xa518) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x75ec);
  if (*(char *)(param_1 + 0x8e78) != '\0') {
    lVar7 = *(long *)(param_1 + 0x8e80);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x8e88)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(long *)(param_1 + 0x8e80) = 0;
    *(undefined1 *)(param_1 + 0x8e78) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  pcVar2 = (char *)(param_1 + 0x5f4c);
  if (*(char *)(param_1 + 0x77d8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x77e0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x77e8)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x77e0) = 0;
    *(undefined1 *)(param_1 + 0x77d8) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  pcVar1 = (char *)(param_1 + 0x48ac);
  if (*(char *)(param_1 + 0x6138) != '\0') {
    lVar7 = *(long *)(param_1 + 0x6140);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x6148)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x6140) = 0;
    *(undefined1 *)(param_1 + 0x6138) = 0;
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x320c);
  if (*(char *)(param_1 + 0x4a98) != '\0') {
    lVar7 = *(long *)(param_1 + 0x4aa0);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x4aa8)) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x4aa0) = 0;
    *(undefined1 *)(param_1 + 0x4a98) = 0;
  }
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
  }
  if (*(char *)(param_1 + 0x33f8) != '\0') {
    lVar7 = *(long *)(param_1 + 0x3400);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x3408)) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x3400) = 0;
    *(undefined1 *)(param_1 + 0x33f8) = 0;
  }
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
  }
  if (*(char *)(param_1 + 0x1d58) != '\0') {
    lVar7 = *(long *)(param_1 + 0x1d60);
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      lVar6 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if ((0 < *(int *)(param_1 + 0x1d68)) && (*pcVar3 != '\0')) {
      *pcVar3 = '\0';
    }
    if (lVar6 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x1d60) = 0;
    *(char *)(param_1 + 0x1d58) = '\0';
  }
  if (*pcVar3 != '\0') {
    *pcVar3 = '\0';
  }
  puVar4 = PTR_DAT_04bc4240 + 0x10;
  *(undefined **)(param_1 + 0x15a0) = PTR_DAT_04bbc1a0 + 0x10;
  *(undefined **)(param_1 + 0x14d0) = puVar4;
  *(undefined **)(param_1 + 0x1410) = puVar4;
  *(undefined **)(param_1 + 0x1350) = puVar4;
  *(undefined **)(param_1 + 0x1290) = puVar4;
  *(undefined **)(param_1 + 0x11d0) = puVar4;
  *(undefined **)(param_1 + 0x1110) = puVar4;
  *(undefined **)(param_1 + 0x1050) = puVar4;
  *(undefined **)(param_1 + 0xf90) = puVar4;
  *(undefined **)(param_1 + 0xed0) = puVar4;
  *(undefined **)(param_1 + 0xe00) = puVar4;
  *(undefined **)(param_1 + 0xd40) = puVar4;
  *(undefined **)(param_1 + 0xc80) = puVar4;
  *(undefined **)(param_1 + 0xbc0) = puVar4;
  *(undefined **)(param_1 + 0xb00) = puVar4;
  *(undefined **)(param_1 + 0xa40) = puVar4;
  *(undefined **)(param_1 + 0x980) = puVar4;
  *(undefined **)(param_1 + 0x8c0) = puVar4;
  *(undefined **)(param_1 + 0x800) = puVar4;
  FUN_03838610(param_1 + 0x7a8);
  *(undefined **)(param_1 + 0x680) = puVar4;
  *(undefined **)(param_1 + 0x558) = puVar4;
  *(undefined **)(param_1 + 0x478) = puVar4;
  *(undefined **)(param_1 + 0x3a0) = puVar4;
  *(undefined **)(param_1 + 0x2c8) = puVar4;
  FUN_03838610(param_1 + 0x298);
  FUN_03838610(param_1 + 0x268);
  FUN_03838610(param_1 + 0x238);
  FUN_03838610(param_1 + 0x208);
  *(undefined **)(param_1 + 0x148) = puVar4;
  *(undefined **)(param_1 + 0xa0) = puVar4;
  FUN_038e1a84(param_1 + 0x60);
  return;
}

