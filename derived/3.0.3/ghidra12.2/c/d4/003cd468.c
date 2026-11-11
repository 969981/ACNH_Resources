
void FUN_003cd468(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar2 = PTR_DAT_04bd00f8;
  if (*PTR_DAT_04bd00f8 == '\0') {
    return;
  }
  if (*PTR_DAT_04bd01b0 != '\0') {
    uVar6 = FUN_003c5b84();
    uVar6 = FUN_003cc180(uVar6,1);
    if (*PTR_DAT_04bd0150 != '\0') {
      uVar7 = FUN_003ca198();
      FUN_003ca5e0(uVar7,0);
    }
    uVar7 = FUN_003c5b84();
    FUN_003cc0c0(uVar7,uVar6);
  }
  if (*PTR_DAT_04bd0220 == '\0') {
    *PTR_DAT_04bd0220 = 1;
    cVar1 = *PTR_DAT_04bd0160;
  }
  else {
    FUN_003c98bc();
    FUN_003c9d20();
    FUN_003cdc2c();
    FUN_003cda84();
    FUN_003c98bc();
    FUN_003c99dc();
    cVar1 = *PTR_DAT_04bd0160;
  }
  if (cVar1 == '\0') {
    *PTR_DAT_04bd0160 = 1;
    FUN_003cc20c();
    FUN_003cc400();
    cVar1 = *PTR_DAT_04bd0240;
  }
  else {
    FUN_003ca198();
    FUN_003ca3a4();
    FUN_003cc20c();
    FUN_003cc400();
    cVar1 = *PTR_DAT_04bd0240;
  }
  if (cVar1 == '\0') {
    *PTR_DAT_04bd0240 = 1;
  }
  else {
    uVar6 = FUN_03b38a74();
    FUN_003b5870(uVar6,PTR_DAT_04bd0238,0);
  }
  FUN_003cb1d8();
  FUN_003cb3a0();
  FUN_03b38a74();
  FUN_003b6440();
  FUN_003ca198();
  FUN_003ca400();
  puVar3 = PTR_DAT_04bd0100;
  if (*PTR_DAT_04bd0100 != '\0') {
    FUN_003c5b84();
    FUN_003cba68();
    FUN_003c5c08();
    FUN_003cba68();
    puVar5 = PTR_DAT_04bd0118;
    puVar4 = PTR_DAT_04bd0110;
    *puVar3 = 0;
    *(undefined8 *)puVar4 = 0;
    *(undefined8 *)puVar5 = 0;
  }
  puVar4 = PTR_DAT_04bd0248;
  puVar3 = PTR_DAT_04bd01a0;
  *puVar2 = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  return;
}

