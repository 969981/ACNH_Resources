
void FUN_0192e330(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_2 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = (long)param_1 + 0x44;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 8) = 0x80;
  param_1[1] = lVar4;
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  if ((undefined *)((long)param_1 + 0x44) != &DAT_040cd53f) {
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0x656e6f4e;
  }
  param_1[0x1c] = (long)param_1;
  param_1[0x1d] = 0;
  puVar1 = PTR_DAT_04bb62c0;
  *param_1 = (long)&PTR_LAB_049dda20;
  param_1[0x19] = (long)(puVar1 + 0x10);
  param_1[0x1a] = (long)"mPlaceNumMin";
  param_1[0x1b] = 0;
  puVar1 = PTR_DAT_04bb2d88;
  local_68 = PTR_DAT_04bb2020;
  param_1[0x1e] = 0;
  local_38 = 0;
  local_68 = local_68 + 0x10;
  param_1[5] = (long)(param_1 + 0x19);
  param_1[6] = (long)(puVar1 + 0x10);
  pcStack_60 = "mTreeCenterPos";
  puStack_50 = &DAT_040773e2;
  pcStack_40 = "Min = 0.f, Max = 500.f";
  local_58 = local_68;
  local_48 = local_68;
  FUN_006fdfc0(param_1 + 0x1f,&local_68,PTR_DAT_04bb2150,param_1);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x2b] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x26] = (long)puVar1;
  param_1[0x27] = (long)"mTreeRadius";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x26);
  puVar3 = (undefined4 *)(**(code **)(param_1[0x26] + 0xf0))(param_1 + 0x26);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x2a) >> 7 & 1) == 0) {
    param_1[0x2b] = 0;
    *(undefined4 *)(param_1 + 0x2b) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x2a) = *(uint *)(param_1 + 0x2a) & 0xfeffffff;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x2c] = (long)puVar1;
  param_1[0x2d] = (long)"mPlacementAngleYDeg";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c);
  puVar3 = (undefined4 *)(**(code **)(param_1[0x2c] + 0xf0))(param_1 + 0x2c);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x30) >> 7 & 1) == 0) {
    param_1[0x31] = 0;
    *(undefined4 *)(param_1 + 0x31) = 0;
  }
  puVar2 = puVar2 + 0x10;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfeffffff;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x32] = (long)puVar2;
  param_1[0x33] = (long)"mPlacementDistanceYMax";
  param_1[0x37] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x32);
  puVar3 = (undefined4 *)(**(code **)(param_1[0x32] + 0xf0))(param_1 + 0x32);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x36) >> 7 & 1) == 0) {
    param_1[0x37] = 0;
    *(undefined4 *)(param_1 + 0x37) = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(uint *)(param_1 + 0x36) = *(uint *)(param_1 + 0x36) & 0xfeffffff;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = (long)puVar2;
  param_1[0x39] = (long)"mFlicker";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x38);
  puVar3 = (undefined4 *)(**(code **)(param_1[0x38] + 0xf0))(param_1 + 0x38);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x3c) >> 7 & 1) == 0) {
    param_1[0x3d] = 0;
    *(undefined4 *)(param_1 + 0x3d) = 0;
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfeffffff;
  return;
}

