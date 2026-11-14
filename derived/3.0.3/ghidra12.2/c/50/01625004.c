
void FUN_01625004(long *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  lVar5 = *(long *)(param_2 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[7] = (long)param_1 + 0x44;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *param_1 = (long)&PTR_FUN_049b4948;
  param_1[1] = lVar5;
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2c] = (long)"mIsEnable";
  param_1[0x2d] = 0;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)&PTR_LAB_04902ff8;
  param_1[0x2e] = (long)param_1;
  *(undefined1 *)((long)param_1 + 0x17c) = 1;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[5] = (long)(param_1 + 0x2b);
  param_1[6] = (long)&PTR_LAB_048f9a70;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_58 = 0;
  local_90 = (undefined1 *)((ulong)local_90 & 0xffffffff00000000);
  puStack_70 = &DAT_040bff16;
  local_98 = (undefined1 *)0x3f80000000000000;
  pcStack_80 = "mDir";
  puStack_60 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_006fdfc0(param_1 + 0x31,&local_88,&local_98,param_1);
  local_58 = 0;
  pcStack_80 = "mColor";
  puStack_70 = &DAT_040622c3;
  puStack_60 = &DAT_0407ebb1;
  local_98 = &DAT_3f8000003f800000;
  local_90 = &DAT_3f8000003f800000;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_00744b60(param_1 + 0x38,&local_88,&local_98,param_1);
  param_1[0x42] = 0;
  param_1[0x41] = (long)"mSize";
  param_1[0x43] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x40] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x40);
  uVar6 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x44) & 0x800) != 0) {
    uVar6 = 0x3c8efa35;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x40] + 0xf0))(param_1 + 0x40);
  *puVar3 = uVar6;
  uVar2 = *(uint *)(param_1 + 0x44);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x45] = 0;
    uVar6 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar6 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x45) = uVar6;
  }
  param_1[0x48] = 0;
  *(uint *)(param_1 + 0x44) = uVar2 & 0xfeffffff;
  param_1[0x47] = (long)"mIsIrradiance";
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x46] = (long)&PTR_LAB_04902ff8;
  param_1[0x4b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x46);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x46] + 0xf0))(param_1 + 0x46);
  *puVar4 = 1;
  if ((*(uint *)(param_1 + 0x4a) >> 7 & 1) == 0) {
    param_1[0x4b] = 0;
    *(undefined1 *)(param_1 + 0x4b) = 1;
  }
  *(uint *)(param_1 + 0x4a) = *(uint *)(param_1 + 0x4a) & 0xfeffffff;
  return;
}

