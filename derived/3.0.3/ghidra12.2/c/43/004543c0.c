
long FUN_004543c0(long param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = param_2 + 0xfU & 0xfffffffffffffff0;
  uVar4 = *(long *)(param_1 + 8) + uVar8;
  *(ulong *)(param_1 + 8) = uVar4;
  if (*(ulong *)(param_1 + 0x10) < uVar4) {
    *(ulong *)(param_1 + 0x10) = uVar4;
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (uVar4 <= uVar8) {
    lVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))
                      (*(long **)(param_1 + 0x30),uVar8,param_3);
    uVar5 = *(uint *)(param_1 + 0x50);
    if (uVar5 == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
      FUN_00426990(*(undefined8 *)(param_1 + 0x30),param_1 + 0x48,0x10);
      uVar5 = *(uint *)(param_1 + 0x50);
    }
    *(uint *)(param_1 + 0x50) = uVar5 + 1;
    plVar1 = (long *)(*(long *)(param_1 + 0x48) + (long)(int)uVar5 * 0x10);
    *plVar1 = lVar7;
    plVar1[1] = uVar8;
    return lVar7;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_0045442c:
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(*(long **)(param_1 + 0x30),uVar4,0);
    uVar5 = *(uint *)(param_1 + 0x40);
    if (uVar5 == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
      FUN_00426990(*(undefined8 *)(param_1 + 0x30),param_1 + 0x38,8);
      uVar5 = *(uint *)(param_1 + 0x40);
    }
    *(uint *)(param_1 + 0x40) = uVar5 + 1;
    *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)(int)uVar5 * 8) = uVar3;
    iVar6 = *(int *)(param_1 + 0x20) + 1;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    iVar6 = *(int *)(param_1 + 0x20);
    if (lVar7 + uVar8 <= uVar4) goto LAB_0045448c;
    iVar6 = iVar6 + 1;
    if (*(int *)(param_1 + 0x40) <= iVar6) goto LAB_0045442c;
  }
  lVar7 = 0;
  *(int *)(param_1 + 0x20) = iVar6;
  *(undefined8 *)(param_1 + 0x28) = 0;
LAB_0045448c:
  lVar2 = lVar7 + *(long *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 8);
  *(ulong *)(param_1 + 0x28) = lVar7 + uVar8;
  if (param_3 != (ulong *)0x0) {
    uVar4 = 0;
    if (lVar2 != 0) {
      uVar4 = uVar8;
    }
    *param_3 = uVar4;
  }
  return lVar2;
}

