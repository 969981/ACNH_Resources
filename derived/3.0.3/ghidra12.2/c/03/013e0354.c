
void FUN_013e0354(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bb60a0;
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  lVar7 = param_2[6];
  *param_1 = (long)(puVar3 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar7;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_88 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_04996438;
  local_58 = 0;
  local_88 = local_88 + 0x10;
  pcStack_80 = "mPoint";
  puStack_70 = &DAT_0407ebb1;
  puStack_60 = &DAT_0407ebb1;
  local_78 = local_88;
  local_68 = local_88;
  FUN_006fdfc0(param_1 + 6,&local_88,PTR_DAT_04bb2150,param_1);
  param_1[0x10] = 0;
  param_1[0xe] = (long)"mCorrectRadius";
  param_1[0xf] = 0;
  puVar3 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  plVar8 = param_1 + 0xd;
  *plVar8 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x11) & 0x800) != 0) {
    uVar9 = 0x3eb2b8c2;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar5 = uVar9;
  uVar2 = *(uint *)(param_1 + 0x11);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x12] = 0;
    uVar9 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar9 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x12) = uVar9;
  }
  *(uint *)(param_1 + 0x11) = uVar2 & 0xfeffffff;
  param_1[0x14] = (long)"mFirstDistination";
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puVar4 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x17) = 0;
  puVar1 = puVar4 + 0x10;
  param_1[0x18] = 0;
  plVar8 = param_1 + 0x13;
  *plVar8 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  puVar5 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar5 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x17) >> 7 & 1) == 0) {
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) & 0xfeffffff;
  param_1[0x1a] = (long)"mSecondDistination";
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  plVar8 = param_1 + 0x19;
  *plVar8 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  puVar5 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar5 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x1d) >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfeffffff;
  plVar8 = param_1 + 0x1f;
  *plVar8 = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x20] = (long)"mThirdDistination";
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  puVar5 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar5 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x23) >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb33a8;
  param_1[0x2a] = 0;
  param_1[0x25] = (long)(puVar1 + 0x10);
  param_1[0x26] = (long)"mIsSpActionPoint";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x25] + 0xf0))(param_1 + 0x25);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x29) >> 7 & 1) == 0) {
    param_1[0x2a] = 0;
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) & 0xfeffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2b] = (long)(puVar3 + 0x10);
  param_1[0x2c] = (long)"mPosOffset";
  param_1[0x30] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  return;
}

