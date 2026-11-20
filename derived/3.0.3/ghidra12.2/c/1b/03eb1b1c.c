
int FUN_03eb1b1c(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 8);
  iVar3 = *piVar4;
  if (((((iVar3 == -1) || (piVar4[1 < uVar2] < iVar3)) && (iVar3 = piVar4[1 < uVar2], iVar3 == -1))
      || (piVar4[(ulong)(2 < uVar2) * 2] < iVar3)) &&
     (iVar3 = piVar4[(ulong)(2 < uVar2) * 2], iVar3 == -1)) {
LAB_03eb1ba0:
    lVar1 = 0xc;
    if (uVar2 < 4) {
      lVar1 = 0;
    }
    iVar3 = *(int *)((long)piVar4 + lVar1);
    if (iVar3 != -1) goto LAB_03eb1bb8;
LAB_03eb1bd0:
    iVar3 = piVar4[(ulong)(4 < uVar2) * 4];
    if (iVar3 != -1) goto LAB_03eb1be8;
LAB_03eb1c00:
    lVar1 = 0x14;
    if (uVar2 < 6) {
      lVar1 = 0;
    }
    iVar3 = *(int *)((long)piVar4 + lVar1);
    if (iVar3 != -1) goto LAB_03eb1c18;
LAB_03eb1c30:
    lVar1 = 0x18;
    if (uVar2 < 7) {
      lVar1 = 0;
    }
    iVar3 = *(int *)((long)piVar4 + lVar1);
    if (iVar3 != -1) goto LAB_03eb1c48;
LAB_03eb1c60:
    lVar1 = 0x1c;
    if (uVar2 < 8) {
      lVar1 = 0;
    }
    iVar3 = *(int *)((long)piVar4 + lVar1);
    if (iVar3 == -1) goto LAB_03eb1c90;
  }
  else {
    lVar1 = 0xc;
    if (uVar2 < 4) {
      lVar1 = 0;
    }
    if (*(int *)((long)piVar4 + lVar1) < iVar3) goto LAB_03eb1ba0;
LAB_03eb1bb8:
    if (piVar4[(ulong)(4 < uVar2) * 4] < iVar3) goto LAB_03eb1bd0;
LAB_03eb1be8:
    lVar1 = 0x14;
    if (uVar2 < 6) {
      lVar1 = 0;
    }
    if (*(int *)((long)piVar4 + lVar1) < iVar3) goto LAB_03eb1c00;
LAB_03eb1c18:
    lVar1 = 0x18;
    if (uVar2 < 7) {
      lVar1 = 0;
    }
    if (*(int *)((long)piVar4 + lVar1) < iVar3) goto LAB_03eb1c30;
LAB_03eb1c48:
    lVar1 = 0x1c;
    if (uVar2 < 8) {
      lVar1 = 0;
    }
    if (*(int *)((long)piVar4 + lVar1) < iVar3) goto LAB_03eb1c60;
  }
  if (iVar3 <= piVar4[(ulong)(8 < uVar2) * 8]) {
    return iVar3;
  }
LAB_03eb1c90:
  return piVar4[(ulong)(8 < uVar2) * 8];
}

