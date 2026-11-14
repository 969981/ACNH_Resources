
undefined8 FUN_0194c0a0(long param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x2a0);
  if (lVar4 == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(long *)(lVar4 + 0x290) + 0x10);
  if (iVar1 == 0) {
LAB_0194c130:
    uVar3 = 0;
    *param_3 = 0xffffffff;
    uVar2 = 0;
  }
  else {
    piVar8 = *(int **)(*(long *)(lVar4 + 0x290) + 0x18);
    if (*piVar8 == param_2) {
      lVar7 = 0;
      uVar6 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar6 = uVar9 + 1;
        iVar5 = (int)uVar6;
        if (iVar1 == iVar5) goto LAB_0194c130;
        uVar9 = uVar6 & 0xffffffff;
      } while (*(int *)((long)piVar8 +
                       (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | uVar6 * 4 & 0x3fffffffc)) !=
               param_2);
      if (iVar5 == -1) goto LAB_0194c130;
      lVar7 = (long)iVar5;
    }
    *param_3 = (uint)uVar6;
    uVar2 = 1;
    if (*(uint *)(*(long *)(lVar4 + 0x290) + 0x20) <= (uint)uVar6) {
      lVar7 = 0;
    }
    uVar3 = *(undefined1 *)(*(long *)(*(long *)(lVar4 + 0x290) + 0x28) + lVar7);
  }
  *(undefined1 *)(param_3 + 1) = uVar3;
  return uVar2;
}

