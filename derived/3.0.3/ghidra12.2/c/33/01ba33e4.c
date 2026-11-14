
void FUN_01ba33e4(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  param_1[0x42] = 0;
  *(undefined2 *)((long)param_1 + 0x204) = 0x101;
  *(undefined4 *)((long)param_1 + 0x217) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((lVar4 != 0) && (uVar5 = (**(code **)(*param_2 + 0x20))(param_2), lVar3 != 0)) &&
     ((int)param_1[0x3d] < 9)) {
    uVar1 = (int)param_1[0x3d] + 1;
    *(uint *)(param_1 + 0x3d) = uVar1;
    plVar2 = param_1 + 1 + (ulong)uVar1 * 6;
    if (9 < uVar1) {
      plVar2 = param_1 + 1;
    }
    *plVar2 = lVar3;
    plVar2[1] = lVar4 + (uVar5 & 0xffffffff) * 2;
    plVar2[2] = (long)&PTR_FUN_048fc6e0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_006f1490(param_1);
  if (*(char *)((long)param_1 + 0x205) != '\0') {
    *(undefined1 *)((long)param_1 + 0x204) = 0;
  }
  return;
}

