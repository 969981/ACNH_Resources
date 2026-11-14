
undefined2 * FUN_01a5010c(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar10;
  long lVar9;
  
  uVar8 = FUN_01a4f798(param_1,param_2);
  if ((uVar8 & 1) == 0) goto LAB_01a50228;
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 == 0) {
LAB_01a50184:
    plVar10 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_01a50188:
    lVar9 = *plVar10;
  }
  else {
    if (uVar3 != 0) {
      if (uVar3 == 0) goto LAB_01a50184;
      plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar10 = plVar1 + uVar3;
      if (0x38 < uVar3) {
        plVar10 = plVar1;
      }
      goto LAB_01a50188;
    }
    lVar9 = 0;
  }
  lVar2 = lVar9 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar2 = lVar9 + 200;
  }
  lVar9 = *(long *)(lVar2 + 8);
  if (lVar9 != 0) {
    iVar4 = *(int *)(param_3 + 8);
    lVar2 = lVar9 + 0x130 + (ulong)*(uint *)(lVar9 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar9 + 0x198)) {
      lVar2 = lVar9 + 0x130;
    }
    iVar5 = *(int *)(lVar2 + 0x28);
    if (iVar5 <= iVar4 && iVar4 <= *(int *)(lVar2 + 8) + iVar5 + -1) {
      iVar6 = *(int *)(lVar2 + 0x2c);
      iVar7 = *(int *)(param_3 + 0xc);
      if ((iVar6 <= iVar7 && iVar7 <= *(int *)(lVar2 + 0xc) + iVar6 + -1) &&
         (uVar3 = (iVar7 - iVar6) + (iVar4 - iVar5) * *(int *)(lVar2 + 0xc),
         uVar3 < *(uint *)(lVar2 + 0x10))) {
        return (undefined2 *)(*(long *)(lVar2 + 0x18) + (long)(int)uVar3 * 8);
      }
    }
  }
LAB_01a50228:
  return &DAT_05586008;
}

