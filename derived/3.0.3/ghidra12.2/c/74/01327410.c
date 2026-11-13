
void FUN_01327410(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  FUN_00751ec0();
  puVar1 = PTR_DAT_04bb3380;
  *param_1 = (long)&PTR_LAB_0498e118;
  param_1[0x19] = (long)"mLeftUpX";
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  param_1[0x18] = (long)(puVar1 + 0x10);
  plVar5 = param_1 + 5;
  lVar4 = *plVar5;
  if (*plVar5 != 0) {
    do {
      lVar3 = lVar4;
      lVar4 = *(long *)(lVar3 + 0x10);
    } while (lVar4 != 0);
    plVar5 = (long *)(lVar3 + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar2 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mLeftUpZ";
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  plVar5 = param_1 + 0x1e;
  *plVar5 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x22) = 8;
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  puVar2 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  return;
}

