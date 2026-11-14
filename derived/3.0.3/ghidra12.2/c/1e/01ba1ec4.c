
void FUN_01ba1ec4(long *param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  param_1[0x42] = param_2;
  *(undefined1 *)(param_1 + 0x43) = 1;
  plVar2 = param_1 + 0x4a;
  (**(code **)(param_1[0x4a] + 0x38))(plVar2);
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = (long)plVar2;
  lVar3 = (**(code **)(param_1[0x4a] + 0x10))(plVar2);
  param_1[0x47] = lVar3;
  param_1[0x48] = lVar3;
  uVar4 = (**(code **)(param_1[0x4a] + 0x20))(plVar2);
  param_1[0x48] = param_1[0x48] + (uVar4 & 0xffffffff) * 2 + -2;
  (**(code **)(*(long *)param_1[0x46] + 0x38))();
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

