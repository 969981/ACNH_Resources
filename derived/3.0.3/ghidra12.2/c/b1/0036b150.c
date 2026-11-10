
long FUN_0036b150(long param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  
  lVar4 = (**(code **)PTR_DAT_04bd0800)(0x70,0x10,*(undefined8 *)PTR_DAT_04bd0810);
  if (lVar4 != 0) {
    FUN_0036eb5c(lVar4,param_2);
  }
  plVar7 = *(long **)(param_1 + 0x30);
  lVar10 = *plVar7;
  iVar3 = (int)plVar7[1];
  plVar8 = (long *)(lVar10 + (long)iVar3 * 0x30);
  *(int *)(plVar7 + 1) = iVar3 + 1;
  *plVar8 = lVar4;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar7 = plVar8 + 4;
  lVar9 = *plVar7;
  plVar8[1] = 0;
  plVar11 = (long *)(param_1 + 0x38);
  *plVar7 = *plVar11;
  *(long **)(lVar9 + 8) = plVar11;
  *(long **)(*plVar11 + 8) = plVar7;
  *plVar11 = lVar9;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  piVar5 = (int *)FUN_0038ce00(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*plVar8 + 0x10));
  lVar9 = *(long *)(param_1 + 0x18) + (ulong)(uint)piVar5[1];
  piVar12 = *(int **)(param_1 + 0x28);
  if ((piVar12 != (int *)0x0) && (0 < *piVar12)) {
    lVar14 = 0;
    lVar13 = 0x1c;
    do {
      uVar6 = FUN_003606c0(lVar9,*(long *)(piVar12 + 2) + lVar13 + -0x1c);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(piVar12 + 2) != 0) {
          uVar2 = *(uint *)(*(long *)(piVar12 + 2) + lVar13);
          piVar12 = (int *)0x0;
          if (((uVar2 != 0) && (lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar14 != 0))
             && (piVar1 = (int *)(lVar14 + (ulong)uVar2), piVar12 = piVar1 + 0x15,
                *piVar1 != 0x31747063)) {
            piVar12 = (int *)0x0;
          }
          goto LAB_0036b2b4;
        }
        break;
      }
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x28;
    } while (lVar14 < *piVar12);
  }
  piVar12 = (int *)0x0;
LAB_0036b2b4:
  if (piVar12 != (int *)0x0) {
    piVar5 = piVar12;
  }
  plVar8[1] = (long)piVar5;
  *(long *)(lVar10 + (long)iVar3 * 0x30 + 0x18) = lVar9;
  return lVar4;
}

