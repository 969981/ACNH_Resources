
undefined2 FUN_01ba3a64(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  *(undefined1 *)((long)param_1 + 0x204) = 0;
  *(undefined2 *)((long)param_1 + 0x206) = 0;
  psVar4 = (short *)(**(code **)(*param_2 + 0x18))(param_2);
  iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  if ((psVar4 != (short *)0x0 && iVar3 != 0) && (*psVar4 != 0)) {
    (**(code **)(*param_1 + 0x10))(param_1);
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = 0;
    lVar5 = (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((lVar6 != 0) &&
       ((uVar7 = (**(code **)(*param_2 + 0x20))(param_2), lVar5 != 0 && ((int)param_1[0x3d] < 9))))
    {
      uVar1 = (int)param_1[0x3d] + 1;
      *(uint *)(param_1 + 0x3d) = uVar1;
      plVar2 = param_1 + 1 + (ulong)uVar1 * 6;
      if (9 < uVar1) {
        plVar2 = param_1 + 1;
      }
      *plVar2 = lVar5;
      plVar2[1] = lVar6 + (uVar7 & 0xffffffff) * 2;
      plVar2[2] = (long)&PTR_FUN_048fc6e0;
    }
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_006f1490(param_1);
  }
  return *(undefined2 *)((long)param_1 + 0x206);
}

