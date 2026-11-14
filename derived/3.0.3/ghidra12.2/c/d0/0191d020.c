
void FUN_0191d020(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  FUN_0191be40();
  puVar2 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_LAB_049da9f8;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = (long)(puVar2 + 0x10);
  param_1[0x37] = (long)"mApproachSpeedMin";
  plVar6 = param_1 + 5;
  lVar5 = *plVar6;
  if (*plVar6 != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = (long)(param_1 + 0x36);
  param_1[0x39] = (long)param_1;
  uVar7 = 0x3d200000;
  if ((*(uint *)(param_1 + 0x3a) & 0x800) != 0) {
    uVar7 = 0x3a32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))();
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x3a);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    uVar7 = 0x3d200000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3a32b8c2;
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar7;
  }
  *(uint *)(param_1 + 0x3a) = uVar1 & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3c] = (long)(puVar2 + 0x10);
  param_1[0x3d] = (long)"mApproachSpeedMax";
  param_1[0x41] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  uVar7 = 0x3ec80000;
  if ((*(uint *)(param_1 + 0x40) & 0x800) != 0) {
    uVar7 = 0x3bdf66f3;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    uVar7 = 0x3ec80000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3bdf66f3;
    }
    *(undefined4 *)(param_1 + 0x41) = uVar7;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = uVar1 & 0xfeffffff;
  param_1[0x43] = (long)"mApproachCycleSec";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar2 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x46) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x46);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    uVar7 = 0x41a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x47) = uVar7;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = uVar1 & 0xfeffffff;
  param_1[0x49] = (long)"mRestTimeSec";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar2 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  uVar7 = 0x40400000;
  if ((*(uint *)(param_1 + 0x4c) & 0x800) != 0) {
    uVar7 = 0x3d567750;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    uVar7 = 0x40400000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x4d) = uVar7;
  }
  *(uint *)(param_1 + 0x4c) = uVar1 & 0xfeffffff;
  return;
}

