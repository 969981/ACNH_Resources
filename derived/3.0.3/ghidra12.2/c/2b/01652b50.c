
void FUN_01652b50(long *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  lVar6 = *(long *)(param_2 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[7] = (long)param_1 + 0x44;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *param_1 = (long)&PTR_FUN_049b8c88;
  param_1[1] = lVar6;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x2e] = (long)param_1;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x2c] = (long)"mBlurIntensity";
  param_1[0x2d] = 0;
  param_1[0x31] = (long)(puVar3 + 0x10);
  param_1[5] = (long)(param_1 + 0x2b);
  param_1[6] = (long)puVar1;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)(puVar3 + 0x10);
  param_1[0x32] = (long)"mRange";
  param_1[0x33] = 0;
  plVar8 = param_1 + 0x2b;
  do {
    plVar7 = plVar8;
    plVar8 = (long *)plVar7[2];
  } while (plVar8 != (long *)0x0);
  plVar7[2] = (long)(param_1 + 0x31);
  param_1[0x34] = (long)param_1;
  uVar9 = 0x3f4ccccd;
  if ((*(uint *)(param_1 + 0x35) & 0x800) != 0) {
    uVar9 = 0x3c64c388;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))();
  *puVar4 = uVar9;
  uVar2 = *(uint *)(param_1 + 0x35);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    uVar9 = 0x3f4ccccd;
    if ((uVar2 & 0x800) != 0) {
      uVar9 = 0x3c64c388;
    }
    *(undefined4 *)(param_1 + 0x36) = uVar9;
  }
  *(uint *)(param_1 + 0x35) = uVar2 & 0xfeffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x37] = (long)(puVar3 + 0x10);
  param_1[0x38] = (long)"mGradationRange";
  param_1[0x3c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x37);
  uVar9 = 0x3f333333;
  if ((*(uint *)(param_1 + 0x3b) & 0x800) != 0) {
    uVar9 = 0x3c482b17;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x37] + 0xf0))(param_1 + 0x37);
  *puVar4 = uVar9;
  uVar2 = *(uint *)(param_1 + 0x3b);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x3c] = 0;
    uVar9 = 0x3f333333;
    if ((uVar2 & 0x800) != 0) {
      uVar9 = 0x3c482b17;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar9;
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(uint *)(param_1 + 0x3b) = uVar2 & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x41) = 0;
  puVar1 = PTR_DAT_04bbd520;
  param_1[0x43] = 0;
  param_1[0x3d] = (long)(puVar1 + 0x10);
  param_1[0x3e] = (long)"mShapeScale";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d);
  puVar5 = (undefined8 *)(**(code **)(param_1[0x3d] + 0xf0))(param_1 + 0x3d);
  *puVar5 = 0x3f8000003f99999a;
  if ((*(uint *)(param_1 + 0x41) >> 7 & 1) == 0) {
    param_1[0x43] = 0x3f8000003f99999a;
  }
  param_1[0x46] = 0;
  *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) & 0xfeffffff;
  param_1[0x45] = (long)"mShapeOffset";
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x44] = (long)(puVar1 + 0x10);
  param_1[0x4a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x44);
  puVar5 = (undefined8 *)(**(code **)(param_1[0x44] + 0xf0))(param_1 + 0x44);
  *puVar5 = 0x3e19999a00000000;
  if ((*(uint *)(param_1 + 0x48) >> 7 & 1) == 0) {
    param_1[0x4a] = 0x3e19999a00000000;
  }
  param_1[0x4d] = 0;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfeffffff;
  param_1[0x4c] = (long)"mColorIntensity";
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4b] = (long)(puVar3 + 0x10);
  param_1[0x50] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4b);
  uVar9 = 0x3eeb851f;
  if ((*(uint *)(param_1 + 0x4f) & 0x800) != 0) {
    uVar9 = 0x3c038a08;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x4b] + 0xf0))(param_1 + 0x4b);
  *puVar4 = uVar9;
  uVar2 = *(uint *)(param_1 + 0x4f);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x50] = 0;
    uVar9 = 0x3eeb851f;
    if ((uVar2 & 0x800) != 0) {
      uVar9 = 0x3c038a08;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar9;
  }
  local_78 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x4f) = uVar2 & 0xfeffffff;
  local_48 = 0;
  local_78 = local_78 + 0x10;
  puStack_60 = &DAT_04081687;
  pcStack_70 = "mColor";
  puStack_50 = &DAT_0407ebb1;
  local_88 = 0x3dcccccd3dcccccd;
  uStack_80 = 0x3dcccccd;
  local_68 = local_78;
  local_58 = local_78;
  FUN_00744b60(param_1 + 0x51,&local_78,&local_88,param_1);
  param_1[0x5b] = 0;
  param_1[0x5a] = (long)"mDreamFadeIntervalFrame";
  param_1[0x5c] = 0;
  puVar1 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x59] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x59);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x59] + 0xf0))(param_1 + 0x59);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x5d) >> 7 & 1) == 0) {
    param_1[0x5e] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
  }
  param_1[0x61] = 0;
  *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) & 0xfeffffff;
  param_1[0x60] = (long)"mDreamFadeFrame";
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x5f] = (long)(puVar1 + 0x10);
  param_1[100] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5f);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x5f] + 0xf0))(param_1 + 0x5f);
  *puVar4 = 0x96;
  if ((*(uint *)(param_1 + 99) >> 7 & 1) == 0) {
    param_1[100] = 0;
    *(undefined4 *)(param_1 + 100) = 0x96;
  }
  *(uint *)(param_1 + 99) = *(uint *)(param_1 + 99) & 0xfeffffff;
  return;
}

