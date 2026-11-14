
void FUN_01c42290(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "Actor";
  FUN_00751ec0(param_1,&local_40,param_2,0);
  puVar2 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_LAB_04a415b0;
  param_1[0x19] = (long)"mDemoDist";
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
  uVar7 = 0x41200000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar7 = 0x3e32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar7 = 0x41200000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar7;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar1 & 0xfeffffff;
  plVar6 = param_1 + 0x1e;
  *plVar6 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = (long)"mDemoAngDeg";
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar7 = 0x3c8efa35;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x22);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar7 = 0x3f800000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar7;
  }
  *(uint *)(param_1 + 0x22) = uVar1 & 0xfeffffff;
  return;
}

