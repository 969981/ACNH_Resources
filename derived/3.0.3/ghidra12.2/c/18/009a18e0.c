
void FUN_009a18e0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "Actor";
  FUN_00751ec0(param_1,&local_88,param_2,0);
  puVar3 = PTR_DAT_04bb3380;
  *param_1 = (long)&PTR_LAB_0492bd88;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x19] = (long)"mFishReleaseDistanceThresholdValue";
  param_1[0x18] = (long)(puVar3 + 0x10);
  plVar7 = param_1 + 5;
  lVar6 = *plVar7;
  if (*plVar7 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar5 + 0x10);
  }
  *plVar7 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar4 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar4 = 4;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 4;
  }
  local_58 = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  puVar1 = puVar1 + 0x10;
  pcStack_80 = "mFishReleaseNearXZSpeedArray";
  local_44 = 0x3f800000;
  puStack_70 = &DAT_0407ebb1;
  puStack_60 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_008403b0(param_1 + 0x1e,&local_88,&local_44,param_1);
  local_58 = 0;
  local_44 = 0x3f800000;
  pcStack_80 = "mFishReleaseFarXZSpeedArray";
  puStack_70 = &DAT_0407ebb1;
  puStack_60 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_008403b0(param_1 + 0x3e,&local_88,&local_44,param_1);
  param_1[0x60] = 0;
  param_1[0x5f] = (long)"mGravity";
  param_1[0x61] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[0x5e] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5e);
  uVar8 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x62) & 0x800) != 0) {
    uVar8 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x5e] + 0xf0))(param_1 + 0x5e);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x62);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[99] = 0;
    uVar8 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 99) = uVar8;
  }
  param_1[0x66] = 0;
  *(uint *)(param_1 + 0x62) = uVar2 & 0xfeffffff;
  param_1[0x65] = (long)"mShellfishReleaseXZSpeed";
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[100] = (long)(puVar1 + 0x10);
  param_1[0x69] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 100);
  uVar8 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x68) & 0x800) != 0) {
    uVar8 = 0x3c0efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[100] + 0xf0))(param_1 + 100);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x68);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x69] = 0;
    uVar8 = 0x3f000000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x69) = uVar8;
  }
  param_1[0x6c] = 0;
  *(uint *)(param_1 + 0x68) = uVar2 & 0xfeffffff;
  param_1[0x6b] = (long)"mShellfishGravity";
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6a] = (long)(puVar1 + 0x10);
  param_1[0x6f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6a);
  uVar8 = 0x3fa00000;
  if ((*(uint *)(param_1 + 0x6e) & 0x800) != 0) {
    uVar8 = 0x3cb2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x6a] + 0xf0))(param_1 + 0x6a);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x6e);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x6f] = 0;
    uVar8 = 0x3fa00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3cb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x6f) = uVar8;
  }
  param_1[0x72] = 0;
  *(uint *)(param_1 + 0x6e) = uVar2 & 0xfeffffff;
  param_1[0x71] = (long)"mShellfishAlphaOutRate";
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x70] = (long)(puVar1 + 0x10);
  param_1[0x75] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x70);
  uVar8 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x74) & 0x800) != 0) {
    uVar8 = 0x3c0efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x70] + 0xf0))(param_1 + 0x70);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x74);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x75] = 0;
    uVar8 = 0x3f000000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x75) = uVar8;
  }
  param_1[0x78] = 0;
  *(uint *)(param_1 + 0x74) = uVar2 & 0xfeffffff;
  param_1[0x77] = (long)"mShellfishAlphaOutFrame";
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x76] = (long)(puVar1 + 0x10);
  param_1[0x7b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x76);
  uVar8 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x7a) & 0x800) != 0) {
    uVar8 = 0x3eb2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x76] + 0xf0))(param_1 + 0x76);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x7a);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x7b] = 0;
    uVar8 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x7b) = uVar8;
  }
  param_1[0x7e] = 0;
  *(uint *)(param_1 + 0x7a) = uVar2 & 0xfeffffff;
  param_1[0x7d] = (long)"mShellfishAirAlphaOutFrame";
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7c] = (long)(puVar1 + 0x10);
  param_1[0x81] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7c);
  uVar8 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x80) & 0x800) != 0) {
    uVar8 = 0x3db2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x7c] + 0xf0))(param_1 + 0x7c);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x80);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x81] = 0;
    uVar8 = 0x40a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x81) = uVar8;
  }
  *(uint *)(param_1 + 0x80) = uVar2 & 0xfeffffff;
  return;
}

