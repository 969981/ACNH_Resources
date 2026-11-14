
undefined8 * FUN_0155b210(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar5 = DAT_0521b5b8;
  iVar8 = *(int *)(param_1 + 1);
  iVar9 = *(int *)((long)param_1 + 0xc);
  if (((DAT_0521b628 <= iVar8 && iVar8 <= DAT_0521b638) && DAT_0521b62c <= iVar9) &&
      iVar9 == DAT_0521b63c ||
      (((DAT_0521b628 <= iVar8 && iVar8 <= DAT_0521b638) && DAT_0521b62c <= iVar9) &&
      iVar9 - DAT_0521b63c < 0) !=
      (((DAT_0521b628 <= iVar8 && iVar8 <= DAT_0521b638) && DAT_0521b62c <= iVar9) &&
      SBORROW4(iVar9,DAT_0521b63c))) {
    iVar1 = DAT_0521b5cc + 1;
    if (iVar8 < DAT_0521b5c8) {
      iVar8 = iVar8 + 1;
    }
    else {
      iVar9 = iVar9 + 1;
      iVar8 = DAT_0521b5b8;
    }
    if (DAT_0521b5b8 != iVar8 || iVar1 != iVar9) {
      do {
        puVar10 = (uint *)*param_1;
        uVar6 = (*(code *)**(undefined8 **)(puVar10 + 4))();
        if (((uint)(iVar8 - DAT_0521b5b8) < 0x70) && ((uint)(iVar9 - DAT_0521b5bc) < 0x60)) {
          uVar4 = (iVar8 - DAT_0521b5b8) + (iVar9 - DAT_0521b5bc) * 0x70;
          lVar7 = *(long *)(puVar10 + 2) + (long)(int)uVar6 * 0x580;
          if (*puVar10 <= uVar6) {
            lVar7 = 0;
          }
          if ((*(uint *)(lVar7 + (ulong)(uVar4 >> 5) * 4 + 8) >> (ulong)(uVar4 & 0x1f) & 1) != 0)
          goto LAB_0155b31c;
        }
        if (iVar8 < DAT_0521b5c8) {
          iVar8 = iVar8 + 1;
        }
        else {
          iVar9 = iVar9 + 1;
          iVar8 = DAT_0521b5b8;
        }
      } while (iVar5 != iVar8 || iVar1 != iVar9);
    }
    iVar8 = iVar5;
    iVar9 = iVar1;
LAB_0155b31c:
    iVar2 = -0x80000000;
    if (iVar5 != iVar8 || iVar1 != iVar9) {
      iVar2 = iVar8;
    }
    iVar3 = -0x80000000;
    if (iVar5 != iVar8 || iVar1 != iVar9) {
      iVar3 = iVar9;
    }
    *(int *)(param_1 + 1) = iVar2;
    *(int *)((long)param_1 + 0xc) = iVar3;
  }
  return param_1;
}

