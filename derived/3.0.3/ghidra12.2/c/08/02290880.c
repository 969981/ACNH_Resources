
void FUN_02290880(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "Actor";
  FUN_00751ec0(param_1,&local_40,param_2,0);
  puVar1 = PTR_DAT_04bb33a8;
  *param_1 = (long)&PTR_LAB_04a7cf28;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x19] = (long)"mIsDebugDraw";
  param_1[0x18] = (long)(puVar1 + 0x10);
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
  puVar3 = (undefined1 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mKickRad";
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  plVar7 = param_1 + 0x1e;
  *plVar7 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x3f0ccccd;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar8 = 0x3c1d466e;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x22);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar8 = 0x3f0ccccd;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c1d466e;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = uVar2 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)puVar1;
  param_1[0x25] = (long)"mTalkAngleDeg";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  uVar8 = 0x42340000;
  if ((*(uint *)(param_1 + 0x28) & 0x800) != 0) {
    uVar8 = 0x3f490fdb;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    uVar8 = 0x42340000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3f490fdb;
    }
    *(undefined4 *)(param_1 + 0x29) = uVar8;
  }
  *(uint *)(param_1 + 0x28) = uVar2 & 0xfeffffff;
  return;
}

