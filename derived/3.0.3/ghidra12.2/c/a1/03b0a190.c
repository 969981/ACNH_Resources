
int FUN_03b0a190(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  
  lVar18 = *(long *)PTR_DAT_04bbdcb8;
  nn::os::LockMutex((MutexType *)(lVar18 + 0x138));
  if (*(long *)(lVar18 + 0x160) == lVar18 + 0x158) {
    iVar17 = 0;
  }
  else {
    lVar12 = (long)*(int *)(lVar18 + 0x16c);
    iVar17 = 0;
    lVar13 = *(long *)(lVar18 + 0x160) - lVar12;
    do {
      if ((((*(uint *)(param_1 + 0x39c) >> 2 & 1) != 0) &&
          (lVar14 = *(long *)(lVar13 + 0x70), lVar14 != 0)) && (0 < (int)*(uint *)(lVar14 + 0x108)))
      {
        uVar15 = 0;
        uVar16 = (long)*(int *)(lVar13 + 0x30) - 1U & 0x1fffffffffffffff;
        uVar2 = uVar16 + 1;
        uVar7 = uVar2 & 3;
        do {
          if (*(int *)(lVar13 + 0x30) == 0) {
            uVar10 = 0;
          }
          else {
            puVar8 = *(undefined8 **)(lVar13 + 0x38);
            if (uVar16 < 3) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              uVar11 = uVar2 & 0x3ffffffffffffffc;
              do {
                plVar4 = (long *)*puVar8;
                puVar5 = puVar8 + 1;
                uVar11 = uVar11 - 4;
                puVar1 = puVar8 + 2;
                puVar6 = puVar8 + 3;
                puVar8 = puVar8 + 4;
                uVar10 = *(uint *)(*(long *)*puVar6 + 0xa8) |
                         *(uint *)(*(long *)*puVar1 + 0xa8) | *(uint *)(*(long *)*puVar5 + 0xa8) |
                         *(uint *)(*plVar4 + 0xa8) | uVar10;
              } while (uVar11 != 0);
            }
            if (uVar7 != 0) {
              uVar11 = uVar7;
              do {
                uVar11 = uVar11 - 1;
                uVar10 = *(uint *)(*(long *)*puVar8 + 0xa8) | uVar10;
                puVar8 = puVar8 + 1;
              } while (uVar11 != 0);
            }
          }
          if (((uVar10 >> (ulong)((uint)uVar15 & 0x1f) & 1) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar14 + 0x110) + uVar15 * 0x430 + 0x3d0), lVar9 != 0)) {
            cVar3 = *(char *)(lVar9 + 0x90);
            if (*(char *)(lVar9 + 0x91) != -1) {
              cVar3 = *(char *)(lVar9 + 0x91);
            }
            if (cVar3 == '\0') {
              iVar17 = iVar17 + 1;
              break;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != *(uint *)(lVar14 + 0x108));
      }
      lVar13 = *(long *)(lVar13 + lVar12 + 8) - lVar12;
    } while (lVar13 != (lVar18 + 0x158) - lVar12);
  }
  nn::os::UnlockMutex((MutexType *)(lVar18 + 0x138));
  return iVar17;
}

