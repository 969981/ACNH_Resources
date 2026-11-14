
void FUN_01bd3b10(long *param_1,long param_2,long param_3,long *param_4,undefined2 param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  param_1[0x4d] = param_2;
  param_1[0x4e] = param_3;
  param_1[0x4f] = (long)param_4;
  *(undefined2 *)(param_1 + 0x50) = param_5;
  *(undefined1 *)((long)param_1 + 0x282) = 0;
  if (param_3 != 0) {
    lVar3 = (**(code **)(*param_4 + 0x68))(param_4);
    if ((**(char **)(lVar3 + 8) == '\0') ||
       (uVar4 = FUN_029ba7e0(param_1[0x4e],param_1 + 0x51,lVar3), (uVar4 & 1) == 0)) {
      if (*(char *)((long)param_1 + 0x282) == '\0') goto LAB_01bd3b90;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x282) = 1;
    }
    *(undefined4 *)(param_1 + 0x53) = 0;
    param_1[0x54] = param_1[0x52];
  }
LAB_01bd3b90:
  (**(code **)(*param_1 + 0x10))(param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  lVar3 = (**(code **)(*param_4 + 0x18))(param_4);
  lVar5 = (**(code **)(*param_4 + 0x18))(param_4);
  if (((lVar5 != 0) && (uVar4 = (**(code **)(*param_4 + 0x20))(param_4), lVar3 != 0)) &&
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

