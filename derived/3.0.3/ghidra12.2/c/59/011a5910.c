
void FUN_011a5910(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "Actor";
  FUN_00751ec0(param_1,&local_50,param_2,0);
  puVar2 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_LAB_04984900;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  param_1[0x19] = (long)"mDemoEnableAngleDeg";
  param_1[0x18] = (long)(puVar2 + 0x10);
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
  uVar8 = 0x428c0000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar8 = 0x3f9c61aa;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar3 = uVar8;
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar8 = 0x428c0000;
    if ((uVar1 & 0x800) != 0) {
      uVar8 = 0x3f9c61aa;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar8;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar1 & 0xfeffffff;
  param_1[0x1f] = (long)"mCountdownLightONHour";
  param_1[0x20] = 0;
  puVar2 = PTR_DAT_04bb6300;
  *(undefined4 *)(param_1 + 0x22) = 8;
  param_1[0x23] = 0;
  plVar7 = param_1 + 0x1e;
  *plVar7 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined1 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 0x12;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined1 *)(param_1 + 0x23) = 0x12;
  }
  *(undefined4 *)(param_1 + 0x28) = 8;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar2 + 0x10);
  param_1[0x25] = (long)"mCountdownLightONMinute";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 8;
  puVar2 = PTR_DAT_04bb5a88;
  param_1[0x2f] = 0;
  param_1[0x2a] = (long)(puVar2 + 0x10);
  param_1[0x2b] = (long)"mCountdownStartSecond";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar4 = 10;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined1 *)(param_1 + 0x2f) = 10;
  }
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

