
void FUN_0164cd88(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined7 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *local_f0;
  undefined7 *puStack_e8;
  undefined4 local_e0;
  undefined7 local_dc;
  char cStack_d5;
  undefined3 uStack_d4;
  undefined1 local_d1;
  undefined1 local_9d;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  lVar8 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar8;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  param_1[0x2a] = (long)param_1;
  *param_1 = (long)&PTR_FUN_049b7968;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  local_68 = 0;
  local_e0 = 0x40;
  local_9d = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_d1 = 0;
  pcStack_90 = "mIdrName";
  puStack_80 = &DAT_040b08e9;
  local_dc = s_DefaultName_0405c6e7._0_7_;
  uVar4 = local_dc;
  cStack_d5 = s_DefaultName_0405c6e7[7];
  cVar5 = cStack_d5;
  _cStack_d5 = CONCAT31(0x656d61,cStack_d5);
  puStack_70 = &DAT_0407ebb1;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_f0 = puVar2;
  puStack_e8 = &local_dc;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_00744dd0(param_1 + 0x2b,&local_98,&local_f0,param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x80;
  puVar3 = PTR_DAT_04bbd958;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar3 + 0x10);
  param_1[0x3d] = (long)"mReleaseVersion";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  local_68 = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  pcStack_90 = "mPaletteName";
  puStack_80 = &DAT_040da1d6;
  local_e0 = 0x40;
  local_9d = 0;
  _cStack_d5 = CONCAT31(0x656d61,cVar5);
  local_d1 = 0;
  puStack_70 = &DAT_0407ebb1;
  local_f0 = puVar2;
  puStack_e8 = &local_dc;
  local_dc = uVar4;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_00744dd0(param_1 + 0x42,&local_98,&local_f0,param_1);
  *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  param_1[0x55] = (long)"mIdrEnvType";
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  puVar1 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x54] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x58) >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
  }
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfeffffff;
  local_68 = 0;
  local_9d = 0;
  _cStack_d5 = CONCAT31(0x656d61,cVar5);
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_d1 = 0;
  pcStack_90 = "mPaletteSetName";
  puStack_70 = &DAT_0407ebb1;
  puStack_80 = &DAT_040e9a2e;
  puStack_e8 = &local_dc;
  local_e0 = 0x40;
  local_f0 = PTR_DAT_04bb2bc0 + 0x10;
  local_dc = uVar4;
  local_88 = local_98;
  local_78 = local_98;
  FUN_00744dd0(param_1 + 0x5a,&local_98,&local_f0,param_1);
  param_1[0x6d] = (long)"mColorCorrectType";
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x6c] = (long)&PTR_LAB_049b7ad0;
  param_1[0x71] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6c);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x6c] + 0xf0))(param_1 + 0x6c);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x70) >> 7 & 1) == 0) {
    param_1[0x71] = 0;
    *(undefined4 *)(param_1 + 0x71) = 0;
  }
  param_1[0x74] = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfeffffff;
  param_1[0x73] = (long)"mDofVignettingBlendType";
  param_1[0x75] = 0;
  puVar1 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x72] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x72);
  puVar7 = (undefined1 *)(**(code **)(param_1[0x72] + 0xf0))(param_1 + 0x72);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0x76) >> 7 & 1) == 0) {
    param_1[0x77] = 0;
    *(undefined1 *)(param_1 + 0x77) = 0;
  }
  param_1[0x7a] = 0;
  *(uint *)(param_1 + 0x76) = *(uint *)(param_1 + 0x76) & 0xfeffffff;
  param_1[0x79] = (long)"mIdrEffectEnvType";
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x78] = (long)&PTR_LAB_049b7d80;
  param_1[0x7d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x78);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x78] + 0xf0))(param_1 + 0x78);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x7c) >> 7 & 1) == 0) {
    param_1[0x7d] = 0;
    *(undefined4 *)(param_1 + 0x7d) = 0;
  }
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfeffffff;
  (**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  return;
}

