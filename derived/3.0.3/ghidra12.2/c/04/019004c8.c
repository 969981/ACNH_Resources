
void FUN_019004c8(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar4 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar4;
  lVar4 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *param_1 = (long)&PTR_LAB_049d6510;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[9] = 0;
  param_1[7] = (long)"mObjCheckLen";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  plVar5 = param_1 + 6;
  *plVar5 = (long)(puVar2 + 0x10);
  FUN_03c28900(param_1,plVar5);
  uVar6 = 0x41a00000;
  if ((*(uint *)(param_1 + 10) & 0x800) != 0) {
    uVar6 = 0x3eb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    uVar6 = 0x41a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0xb) = uVar6;
  }
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = uVar1 & 0xfeffffff;
  param_1[0xd] = (long)"mEscapeRefreshCycle";
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  plVar5 = param_1 + 0xc;
  *plVar5 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  uVar6 = 0x40000000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar6 = 0x3d0efa35;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar6 = 0x40000000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar6;
  }
  *(uint *)(param_1 + 0x10) = uVar1 & 0xfeffffff;
  return;
}

