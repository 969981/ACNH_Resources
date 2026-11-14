
undefined1  [16] FUN_01907784(long *param_1)

{
  int iVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  ulong extraout_d0;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  iVar1 = (**(code **)(*param_1 + 0x158))();
  if (iVar1 == 6) {
    if (*(int *)(*(long *)(param_1[7] + 0x20) + 0x58) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = **(long **)(*(long *)(param_1[7] + 0x20) + 0x60);
    }
    plVar2 = (long *)(lVar4 + 0x98);
    uVar5 = extraout_d0;
  }
  else {
    uVar5 = 0;
    if (iVar1 != 5) goto LAB_01907814;
    if (*(int *)(*(long *)(param_1[7] + 0x18) + 0x58) == 0) {
      plVar2 = (long *)&DAT_00000068;
    }
    else {
      plVar2 = (long *)(**(long **)(*(long *)(param_1[7] + 0x18) + 0x60) + 0x68);
    }
  }
  puVar3 = (uint *)(**(code **)(*plVar2 + 0xf0))(uVar5);
  uVar5 = (ulong)*puVar3;
LAB_01907814:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar5;
  return auVar6;
}

