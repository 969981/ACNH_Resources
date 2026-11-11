
long * FUN_00424080(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  
  iVar3 = (int)param_1[1];
  lVar6 = (long)iVar3 + -1;
  iVar7 = -1;
  lVar5 = lVar6;
  do {
    lVar2 = lVar5 + -1;
    if (lVar5 < 1) goto LAB_004240c8;
    lVar1 = *param_1 + lVar5;
    lVar5 = lVar2;
  } while (*(char *)(lVar1 + -1) != '\\');
  iVar7 = (int)lVar2;
LAB_004240c8:
  iVar9 = -1;
  lVar5 = lVar6;
  do {
    lVar2 = lVar5 + -1;
    if (lVar5 < 1) goto LAB_004240f4;
    lVar1 = *param_1 + lVar5;
    lVar5 = lVar2;
  } while (*(char *)(lVar1 + -1) != '/');
  iVar9 = (int)lVar2;
LAB_004240f4:
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  lVar5 = lVar6;
  uVar4 = 1 - iVar3;
  do {
    uVar10 = uVar4;
    if (lVar5 <= iVar7 + 1) goto LAB_00424138;
    lVar2 = lVar5 + -1;
    lVar5 = lVar5 + -1;
    uVar4 = uVar10 + 1;
  } while (((undefined1 *)*param_1)[lVar2] != '.');
  if (uVar10 == 0) {
LAB_00424138:
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == 0) {
      lVar5 = FUN_00426720(PTR_DAT_048607c0,1,1,*param_1);
      iVar3 = (int)param_1[1];
      *param_1 = lVar5;
    }
    if (iVar3 != 1) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    *(undefined1 *)*param_1 = 0;
  }
  else {
    iVar7 = -(uVar10 + 1);
    if ((int)lVar6 <= iVar7) {
      iVar7 = (int)lVar6;
    }
    if (0 < iVar7) {
      iVar7 = iVar3 - iVar7;
      *(int *)(param_1 + 1) = iVar7;
      if (0 < iVar7) {
        if ((int)uVar10 <= -iVar3) {
          uVar10 = -iVar3;
        }
        lVar5 = 0;
        puVar8 = (undefined1 *)*param_1;
        do {
          lVar5 = (lVar5 << 0x20) + 0x100000000 >> 0x20;
          *puVar8 = puVar8[(int)~uVar10];
          puVar8 = puVar8 + 1;
        } while (lVar5 < iVar7);
      }
    }
  }
  return param_1;
}

