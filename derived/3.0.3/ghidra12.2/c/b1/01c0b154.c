
void FUN_01c0b154(long *param_1,long *param_2,undefined2 *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = param_1 + 0x41;
  (**(code **)(param_1[0x41] + 0x10))(plVar2);
  *(undefined2 *)(param_1 + 0xbb) = *param_3;
  *(undefined1 *)((long)param_1 + 0x5da) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)((long)param_1 + 0x5db) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)((long)param_1 + 0x5dc) = *(undefined4 *)(param_3 + 2);
  plVar3 = (long *)(**(code **)(param_1[0x41] + 0x40))(plVar2);
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined1 *)(param_1 + 0xc1) = 1;
  *(undefined4 *)((long)param_1 + 0x60c) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = (long)plVar3;
  lVar4 = (**(code **)(*plVar3 + 0x10))();
  param_1[0xbf] = lVar4;
  param_1[0xc0] = lVar4;
  uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
  param_1[0xc0] = param_1[0xc0] + (uVar5 & 0xffffffff) * 2 + -2;
  (**(code **)(*(long *)param_1[0xbe] + 0x38))();
  *(undefined1 *)(param_1 + 0xc2) = 0;
  (**(code **)(*param_1 + 0x10))(param_1);
  plVar3 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  lVar4 = (**(code **)(*plVar3 + 0x18))();
  lVar6 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((lVar6 != 0) && (uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3), lVar4 != 0)) &&
     ((int)param_1[0x3d] < 9)) {
    uVar1 = (int)param_1[0x3d] + 1;
    *(uint *)(param_1 + 0x3d) = uVar1;
    plVar3 = param_1 + 1 + (ulong)uVar1 * 6;
    if (9 < uVar1) {
      plVar3 = param_1 + 1;
    }
    *plVar3 = lVar4;
    plVar3[1] = lVar6 + (uVar5 & 0xffffffff) * 2;
    plVar3[2] = (long)&PTR_FUN_048fc6e0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_006f1490(param_1);
  plVar3 = (long *)(**(code **)(param_1[0x41] + 0x50))(plVar2);
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined1 *)(param_1 + 0xc1) = 1;
  *(undefined4 *)((long)param_1 + 0x60c) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = (long)plVar3;
  lVar4 = (**(code **)(*plVar3 + 0x10))();
  param_1[0xbf] = lVar4;
  param_1[0xc0] = lVar4;
  uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
  param_1[0xc0] = param_1[0xc0] + (uVar5 & 0xffffffff) * 2 + -2;
  (**(code **)(*(long *)param_1[0xbe] + 0x38))();
  *(undefined1 *)(param_1 + 0xc2) = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  plVar3 = (long *)(**(code **)(*param_2 + 0x50))(param_2);
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  lVar4 = (**(code **)(*plVar3 + 0x18))();
  lVar6 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((lVar6 != 0) && (uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3), lVar4 != 0)) &&
     ((int)param_1[0x3d] < 9)) {
    uVar1 = (int)param_1[0x3d] + 1;
    *(uint *)(param_1 + 0x3d) = uVar1;
    plVar3 = param_1 + 1 + (ulong)uVar1 * 6;
    if (9 < uVar1) {
      plVar3 = param_1 + 1;
    }
    *plVar3 = lVar4;
    plVar3[1] = lVar6 + (uVar5 & 0xffffffff) * 2;
    plVar3[2] = (long)&PTR_FUN_048fc6e0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_006f1490(param_1);
  (**(code **)(param_1[0x41] + 0x20))(plVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x01c0b468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,plVar2);
  return;
}

