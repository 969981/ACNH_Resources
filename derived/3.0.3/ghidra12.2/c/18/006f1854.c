
void FUN_006f1854(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined4 *)((long)param_1 + 0x234) = 0;
  if (param_2 != (long *)0x0) {
    param_1[0x43] = (long)param_2;
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x44] = lVar3;
    param_1[0x45] = lVar3;
    uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
    param_1[0x45] = param_1[0x45] + (uVar4 & 0xffffffff) * 2 + -2;
    (**(code **)(*(long *)param_1[0x43] + 0x38))();
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  lVar3 = (**(code **)(*param_3 + 0x18))(param_3);
  lVar5 = (**(code **)(*param_3 + 0x18))(param_3);
  if (((lVar5 != 0) && (uVar4 = (**(code **)(*param_3 + 0x20))(param_3), lVar3 != 0)) &&
     ((int)param_1[0x3d] < 9)) {
    uVar1 = (int)param_1[0x3d] + 1;
    *(uint *)(param_1 + 0x3d) = uVar1;
    plVar2 = param_1 + 1 + (ulong)uVar1 * 6;
    if (9 < uVar1) {
      plVar2 = param_1 + 1;
    }
    *plVar2 = lVar3;
    plVar2[1] = lVar5 + (uVar4 & 0xffffffff) * 2;
    plVar2[2] = (long)&PTR_FUN_048fc6e0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_006f1490(param_1);
  return;
}

