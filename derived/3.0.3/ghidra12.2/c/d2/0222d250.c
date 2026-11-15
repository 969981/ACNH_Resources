
void FUN_0222d250(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_60;
  char *pcStack_58;
  
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "Actor";
  FUN_00751ec0(param_1,&local_60,param_2,0);
  puVar2 = PTR_DAT_04bb3380;
  *param_1 = (long)&PTR_LAB_04a77a08;
  param_1[0x19] = (long)"mUpDeltaOffset";
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = (long)(puVar2 + 0x10);
  plVar6 = param_1 + 5;
  lVar5 = *plVar6;
  if (*plVar6 != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar3 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar3 = 5;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 5;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mDownDeletaOffset";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar6 = param_1 + 0x1e;
  *plVar6 = (long)(puVar2 + 0x10);
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = 5;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x23) = 5;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar2 + 0x10);
  param_1[0x25] = (long)"mUpLimitAll";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar3 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar3 = 0x3c;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0x3c;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar2 + 0x10);
  param_1[0x2b] = (long)"mDownLimitAll";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar3 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar3 = 200;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 200;
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar2 + 0x10);
  param_1[0x31] = (long)"mEntryHeight";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  uVar7 = 0x41c80000;
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    uVar7 = 0x3edf66f3;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    uVar7 = 0x41c80000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3edf66f3;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(uint *)(param_1 + 0x34) = uVar1 & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = (long)(puVar2 + 0x10);
  param_1[0x37] = (long)"mAreaLimitOffset";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  uVar7 = 0x42700000;
  if ((*(uint *)(param_1 + 0x3a) & 0x800) != 0) {
    uVar7 = 0x3f860a92;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x3a);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    uVar7 = 0x42700000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3f860a92;
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar7;
  }
  *(uint *)(param_1 + 0x3a) = uVar1 & 0xfeffffff;
  return;
}

