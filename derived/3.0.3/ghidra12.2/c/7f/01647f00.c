
void FUN_01647f00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  undefined *local_1a0;
  undefined1 *puStack_198;
  undefined4 local_190;
  undefined1 local_18c [255];
  undefined1 local_8d;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = (undefined1 *)((long)param_1 + 0x44);
  *(undefined4 *)(param_1 + 8) = 0x100;
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  local_1a0 = PTR_DAT_04bb21f8 + 0x10;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *param_1 = &PTR_LAB_049b6820;
  param_1[1] = uVar1;
  param_1[0x2a] = param_1;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_190 = 0x100;
  param_1[0x42] = param_1 + 0x6b;
  param_1[0x6b] = param_1 + 0x94;
  param_1[0x94] = param_1 + 0xbd;
  param_1[0xbd] = param_1 + 0xe6;
  param_1[0xe6] = param_1 + 0x10f;
  param_1[0x10f] = param_1 + 0x138;
  param_1[0x138] = param_1 + 0x161;
  param_1[0x161] = param_1 + 0x18a;
  param_1[0x18a] = param_1 + 0x1b3;
  param_1[0x1b3] = param_1 + 0x1dc;
  param_1[0x1dc] = param_1 + 0x205;
  param_1[0x205] = param_1 + 0x22e;
  param_1[0x22e] = param_1 + 599;
  param_1[599] = param_1 + 0x280;
  param_1[0x280] = param_1 + 0x2a9;
  param_1[0x2a9] = param_1 + 0x2d2;
  local_58 = 0;
  local_8d = 0;
  local_18c[0] = 0;
  param_1[0x2d2] = param_1 + 0x2fb;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3a] = param_1;
  param_1[0x3f1] = 0;
  param_1[0x2fb] = param_1 + 0x324;
  param_1[0x324] = param_1 + 0x34d;
  param_1[0x34d] = param_1 + 0x376;
  param_1[0x376] = param_1 + 0x39f;
  param_1[0x39f] = param_1 + 0x3c8;
  param_1[0x3c8] = param_1 + 0x3f1;
  puStack_70 = &DAT_040ca196;
  pcStack_80 = "mTimeTableName";
  puStack_60 = &DAT_0407ebb1;
  puStack_198 = local_18c;
  param_1[0x36] = 0;
  param_1[0x37] = &PTR_LAB_049b6b08;
  param_1[0x40] = param_1 + 0x42;
  param_1[0x41] = param_1 + 0x42;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = "mTimeTableName";
  param_1[0x39] = 0;
  param_1[5] = param_1 + 0x37;
  param_1[6] = local_1a0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if (param_1 + 0x41a != (undefined8 *)0x0) {
    param_1[0x3e] = 0x1800000000;
    param_1[0x3f] = param_1 + 0x41a;
  }
  param_1[0x37] = &PTR_LAB_049b6988;
  iVar3 = 0x18;
  local_78 = local_88;
  local_68 = local_88;
  do {
    if (*(int *)(param_1 + 0x3e) < *(int *)((long)param_1 + 500)) {
      plVar2 = (long *)param_1[0x40];
      if (plVar2 != (long *)0x0) {
        param_1[0x40] = *plVar2;
      }
      FUN_01573030(plVar2,&local_88,&local_1a0,0);
      *plVar2 = (long)&PTR_LAB_049b6c88;
      if (*(int *)(param_1 + 0x3e) < *(int *)((long)param_1 + 500)) {
        *(long **)(param_1[0x3f] + (long)*(int *)(param_1 + 0x3e) * 8) = plVar2;
        *(int *)(param_1 + 0x3e) = *(int *)(param_1 + 0x3e) + 1;
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x37);
    iVar3 = iVar3 + -1;
    *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) & 0xfffffffc;
  } while (iVar3 != 0);
  param_1[0x35] = 0xffffffffffffffff;
  param_1[0x36] = 0xffffffffffffffff;
  param_1[0x33] = 0xffffffffffffffff;
  param_1[0x34] = 0xffffffffffffffff;
  param_1[0x31] = 0xffffffffffffffff;
  param_1[0x32] = 0xffffffffffffffff;
  param_1[0x2f] = 0xffffffffffffffff;
  param_1[0x30] = 0xffffffffffffffff;
  param_1[0x2d] = 0xffffffffffffffff;
  param_1[0x2e] = 0xffffffffffffffff;
  param_1[0x2b] = 0xffffffffffffffff;
  param_1[0x2c] = 0xffffffffffffffff;
  return;
}

