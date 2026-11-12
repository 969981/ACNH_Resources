
uint FUN_008c8e54(undefined8 param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined **local_40;
  char *pcStack_38;
  undefined **local_30;
  undefined *puStack_28;
  
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar7 = (ulong)(short)uVar4;
  if (uVar7 == 0xffffffffffffffff) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    puVar1 = &DAT_055c11c8 + (uVar7 & 0xffffffff) * 2;
    if (0xff < uVar4) {
      puVar1 = &DAT_055c11c8;
    }
    uVar5 = *puVar1 & 1;
    puVar1 = &DAT_055c11c8 + (uVar7 & 0xffffffff) * 2;
    if (0xff < uVar4) {
      puVar1 = &DAT_055c11c8;
    }
    uVar6 = *puVar1 >> 1 & 1;
  }
  if ((uVar5 | uVar6) == 1) {
    lVar2 = 0x39;
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    lVar3 = 0x38;
    if (uVar5 == 0) {
      lVar3 = lVar2;
    }
    puStack_28 = (&PTR_s_cNormal_04922de8)[lVar3];
    local_30 = &PTR_LAB_048f9770;
    local_40 = &PTR_LAB_048f9770;
    pcStack_38 = s_cTalk_04926436;
    FUN_008d9d70(param_1,&local_30,&local_40,param_2,param_3,param_4 & 1);
  }
  return uVar5 | uVar6;
}

