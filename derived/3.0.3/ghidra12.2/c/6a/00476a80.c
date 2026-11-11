
long FUN_00476a80(long param_1,ulong *param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  int iVar13;
  ulong uVar14;
  
  *param_2 = *param_2 + 0x7f & 0xffffffffffffff80;
  nn::os::LockMutex((MutexType *)(param_1 + 0x440));
  iVar13 = *(int *)(param_1 + 0x38);
  lVar7 = (long)iVar13;
  if (*(int *)(param_1 + 0x20) + 1 < (int)((*(uint *)(param_1 + 0x3c) & 0x3fffffff) * 2 - iVar13)) {
    uVar5 = *param_2;
    if (iVar13 < 1) {
LAB_00476b80:
      lVar7 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(param_1 + 0x10) - lVar7) < uVar5) goto LAB_00476b90;
      *(ulong *)(param_1 + 0x18) = lVar7 + uVar5;
      *param_2 = uVar5;
    }
    else {
      iVar6 = -1;
      uVar10 = 0x7ffffff;
      puVar12 = (ulong *)(*(long *)(param_1 + 0x30) + lVar7 * 0x10 + -8);
      do {
        iVar13 = iVar13 + -1;
        uVar14 = *puVar12;
        lVar7 = lVar7 + -1;
        uVar2 = uVar14;
        iVar4 = iVar13;
        if (uVar10 <= uVar14) {
          uVar2 = uVar10;
          iVar4 = iVar6;
        }
        if (uVar5 <= uVar14) {
          uVar10 = uVar2;
          iVar6 = iVar4;
        }
        puVar12 = puVar12 + -2;
      } while (0 < lVar7);
      if (iVar6 < 0) goto LAB_00476b80;
      lVar8 = *(long *)(param_1 + 0x30);
      plVar1 = (long *)(lVar8 + (long)iVar6 * 0x10);
      lVar7 = *plVar1;
      if (((uVar10 == uVar5) || ((param_3 & 1) == 0)) &&
         ((uVar5 < 0x401 || (uVar10 * 2 <= uVar5 * 3)))) {
        lVar11 = (long)iVar6 * 0x10;
        *param_2 = *(ulong *)(lVar8 + lVar11 + 8);
        iVar13 = *(int *)(param_1 + 0x38) + -1;
        uVar3 = iVar13 - iVar6;
        *(int *)(param_1 + 0x38) = iVar13;
        if (0 < (int)uVar3) {
          lVar8 = 0;
          puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar11 + 0x10);
          do {
            lVar8 = (lVar8 << 0x20) + 0x800000000 >> 0x20;
            puVar9[-2] = *puVar9;
            puVar9 = puVar9 + 1;
          } while (lVar8 < (long)(-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4))
          ;
        }
      }
      else {
        lVar8 = lVar8 + (long)iVar6 * 0x10;
        *(ulong *)(lVar8 + 8) = *(long *)(lVar8 + 8) - uVar5;
        *plVar1 = lVar7 + uVar5;
      }
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    uVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 8);
    if (*(ulong *)(param_1 + 0x28) < uVar5) {
      *(ulong *)(param_1 + 0x28) = uVar5;
    }
  }
  else {
LAB_00476b90:
    lVar7 = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x440));
  return lVar7;
}

