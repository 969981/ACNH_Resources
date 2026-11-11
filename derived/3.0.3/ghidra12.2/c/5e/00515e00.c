
bool FUN_00515e00(long param_1,int param_2,int param_3,long *param_4)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_048607b8;
  if (param_3 != 1) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x60) + (long)param_2 * 8);
    iVar6 = *(int *)(lVar4 + 0x38);
    if (iVar6 != 0) {
      piVar5 = *(int **)(lVar4 + 0x30);
      lVar4 = (long)iVar6 << 4;
      do {
        iVar6 = *piVar5;
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) + 0x20) == param_3) {
          uVar3 = *(uint *)(param_4 + 1);
          if (uVar3 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar2,param_4,4);
            uVar3 = *(uint *)(param_4 + 1);
          }
          *(int *)(*param_4 + (long)(int)uVar3 * 4) = iVar6;
          *(uint *)(param_4 + 1) = uVar3 + 1;
        }
        piVar5 = piVar5 + 4;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
    return (int)param_4[1] != 0;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + (long)param_2 * 8);
  if (*(int *)(lVar4 + 0x38) != 0) {
    piVar5 = *(int **)(lVar4 + 0x30);
    lVar7 = (long)*(int *)(lVar4 + 0x38) << 4;
    do {
      iVar6 = *piVar5;
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) + 0x20) == 1) {
        uVar3 = *(uint *)(param_4 + 1);
        if (uVar3 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
          FUN_00426990(puVar2,param_4,4);
          uVar3 = *(uint *)(param_4 + 1);
        }
        *(int *)(*param_4 + (long)(int)uVar3 * 4) = iVar6;
        *(uint *)(param_4 + 1) = uVar3 + 1;
      }
      piVar5 = piVar5 + 4;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  puVar2 = PTR_DAT_048607b8;
  if (*(int *)(lVar4 + 0x58) == 0) {
LAB_00516078:
    return 0 < (int)param_4[1];
  }
  piVar5 = *(int **)(lVar4 + 0x50);
  piVar1 = piVar5 + *(int *)(lVar4 + 0x58);
LAB_00515fa8:
  do {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar4 = 0;
      do {
        lVar7 = *(long *)(*(long *)(param_1 + 0x30) + lVar4 * 8);
        if ((*(int *)(lVar7 + 0x20) == 1) && (*(int *)(lVar7 + 0x24) == *piVar5)) {
          iVar6 = (int)lVar4;
          if (-1 < iVar6) {
            uVar3 = *(uint *)(param_4 + 1);
            if ((int)uVar3 < 1) goto LAB_00516038;
            lVar4 = 0;
            goto LAB_00516008;
          }
          break;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x38));
    }
LAB_00516028:
    piVar5 = piVar5 + 1;
  } while (piVar5 != piVar1);
  goto LAB_00516078;
  while (lVar4 = lVar4 + 1, lVar4 < (int)uVar3) {
LAB_00516008:
    if (*(int *)(*param_4 + lVar4 * 4) == iVar6) {
      if (-1 < (int)lVar4) goto LAB_00516028;
      break;
    }
  }
LAB_00516038:
  if (uVar3 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
    FUN_00426990(puVar2,param_4,4);
    uVar3 = *(uint *)(param_4 + 1);
  }
  *(int *)(*param_4 + (long)(int)uVar3 * 4) = iVar6;
  *(uint *)(param_4 + 1) = uVar3 + 1;
  piVar5 = piVar5 + 1;
  if (piVar5 == piVar1) goto LAB_00516078;
  goto LAB_00515fa8;
}

