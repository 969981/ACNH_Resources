
undefined1  [16] FUN_01907310(long *param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ulong extraout_d0;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  iVar1 = (**(code **)(*param_1 + 0x158))();
  if (iVar1 == 2) {
    lVar3 = *(long *)(param_1[7] + 0x10);
    uVar4 = extraout_d0;
    if (*(int *)(lVar3 + 0x58) != 0) goto LAB_01907350;
LAB_0190736c:
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if (iVar1 != 1) goto LAB_01907384;
    lVar3 = *(long *)(param_1[7] + 8);
    if (*(int *)(lVar3 + 0x58) == 0) goto LAB_0190736c;
LAB_01907350:
    lVar3 = **(long **)(lVar3 + 0x60);
  }
  puVar2 = (uint *)(**(code **)(*(long *)(lVar3 + 0x38) + 0xf0))(uVar4);
  uVar4 = (ulong)*puVar2;
LAB_01907384:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5;
}

