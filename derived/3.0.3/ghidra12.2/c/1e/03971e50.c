
void FUN_03971e50(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x4f8));
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    lVar8 = *(long *)(param_1 + 0x28);
    uVar13 = 0;
    do {
      lVar9 = *(long *)(lVar8 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
      if ((lVar9 != 0) && (iVar5 = *(int *)(lVar9 + 0xb0), iVar5 != 0)) {
        lVar9 = *(long *)(lVar9 + 0xb8);
        iVar14 = 0;
        do {
          lVar15 = lVar9 + (long)iVar14 * 0x820;
          piVar16 = (int *)(lVar15 + 8);
          iVar7 = *piVar16;
          if (iVar7 != 0) {
            plVar3 = (long *)(lVar15 + 0x10);
            uVar11 = 0;
            plVar10 = (long *)*plVar3;
            plVar12 = plVar10;
            do {
              if (*plVar12 == param_2) {
                if ((-1 < (int)uVar11) && ((int)uVar11 < iVar7)) {
                  uVar1 = uVar11 + 1;
                  uVar6 = iVar7 - uVar1;
                  if (uVar6 != 0 && (int)uVar1 <= iVar7) {
                    memmove(plVar10 + uVar11,plVar10 + uVar1,
                            -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3);
                    iVar7 = *piVar16;
                    plVar10 = (long *)*plVar3;
                  }
                  iVar7 = iVar7 + -1;
                  *piVar16 = iVar7;
                }
              }
              else {
                uVar11 = uVar11 + 1;
                plVar12 = plVar12 + 1;
              }
            } while (plVar12 != plVar10 + iVar7);
          }
          iVar14 = iVar14 + 1;
        } while (iVar5 != iVar14);
      }
      uVar2 = uVar13 + 1;
      uVar13 = uVar2 & 0xffffffff;
    } while (iVar4 != (int)uVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4f8));
  return;
}

