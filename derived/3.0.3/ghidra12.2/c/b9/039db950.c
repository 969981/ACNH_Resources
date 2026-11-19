
void FUN_039db950(long param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  
  pMVar1 = (MutexType *)(param_1 + 0x5d18);
  nn::os::LockMutex(pMVar1);
  lVar13 = 0;
  lVar6 = param_1 + 0x4190;
  do {
    lVar15 = 0;
    do {
      if ((*(int **)(lVar6 + lVar15) != (int *)0x0) &&
         (iVar9 = **(int **)(lVar6 + lVar15), iVar9 != -0x52fff2e2 && iVar9 != -0x2ea54e13)) {
        nn::os::LockMutex(pMVar1);
        nn::os::UnlockMutex(pMVar1);
      }
      lVar15 = lVar15 + 8;
    } while (lVar15 != 0x100);
    lVar13 = lVar13 + 1;
    lVar6 = lVar6 + 0x100;
  } while (lVar13 != 0x1b);
  lVar13 = 0;
  lVar6 = param_1 + 0x98;
  do {
    lVar15 = 0;
    do {
      if ((*(int **)(lVar6 + lVar15) != (int *)0x0) &&
         (iVar9 = **(int **)(lVar6 + lVar15), iVar9 != -0x52fff2e2 && iVar9 != -0x2ea54e13)) {
        nn::os::LockMutex(pMVar1);
        nn::os::UnlockMutex(pMVar1);
      }
      lVar15 = lVar15 + 8;
    } while (lVar15 != 0x100);
    lVar13 = lVar13 + 1;
    lVar6 = lVar6 + 0x100;
  } while (lVar13 != 0x20);
  if (*(int *)(param_1 + 0x10) != 0) {
    nn::os::LockMutex(pMVar1);
    uVar4 = *(uint *)(param_1 + 0x4120);
    if (uVar4 != 0) {
      uVar8 = uVar4;
      do {
        uVar7 = (uint)LZCOUNT(uVar8) ^ 0x1f;
        uVar8 = *(uint *)(param_1 + 0x4124 + (ulong)uVar7 * 4);
        do {
          lVar13 = (long)(int)uVar7;
          piVar10 = (int *)0x0;
          uVar11 = 0;
          piVar12 = *(int **)(param_1 + 0x4190 + lVar13 * 0x100 + (0x1f - LZCOUNT(uVar8)) * 8);
          piVar14 = piVar12;
          do {
            uVar5 = (ulong)piVar14[1];
            uVar2 = uVar11;
            if (uVar11 <= uVar5 - 0x20) {
              uVar2 = uVar5 - 0x20;
            }
            if (0x1f < (long)uVar5 && uVar11 < uVar5) {
              uVar11 = uVar2;
              piVar10 = piVar14;
            }
            iVar9 = piVar14[5];
            piVar14 = (int *)((long)iVar9 + (long)(piVar14 + 5));
            piVar3 = (int *)0x0;
            if (iVar9 != 0) {
              piVar3 = piVar14;
            }
          } while (*piVar3 == -0x2ea54e13 && piVar12 != piVar3);
          if (piVar10 != (int *)0x0) goto LAB_039dbb6c;
          iVar9 = (int)LZCOUNT(uVar8);
          if (iVar9 == 0x1f) {
            if (uVar7 == 0) goto LAB_039dbb6c;
            uVar7 = uVar7 - 1;
            iVar9 = -0x1f;
            lVar13 = (long)(int)uVar7;
          }
          else {
            iVar9 = iVar9 + -0x1e;
          }
          uVar8 = *(uint *)(param_1 + 0x4124 + lVar13 * 4) &
                  0xffffffffU >> (ulong)(iVar9 + 0x1fU & 0x1f);
        } while (uVar8 != 0);
        uVar8 = 0x7fffffffU >> (ulong)(~uVar7 & 0x1f) & uVar4;
      } while (uVar8 != 0);
    }
LAB_039dbb6c:
    nn::os::UnlockMutex(pMVar1);
    piVar14 = *(int **)(param_1 + 0x5ce0);
    do {
      if (*piVar14 != -0x52fff2e2 && *piVar14 != -0x2ea54e13) {
        nn::os::LockMutex(pMVar1);
        nn::os::UnlockMutex(pMVar1);
      }
      piVar10 = piVar14 + 1;
      piVar12 = (int *)((long)*piVar10 + (long)piVar14);
      piVar14 = (int *)0x0;
      if (*piVar10 != 0) {
        piVar14 = piVar12;
      }
    } while (*(int **)(param_1 + 0x5cf0) != piVar14);
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar4 = uVar4 - 1 & (uVar4 ^ 0xffffffff);
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    uVar11 = (ulong)(uVar4 + (uVar4 >> 0x10) & 0x3f);
    uVar4 = ((uint *)(param_1 + 0x10))[uVar11 + 1];
    uVar4 = uVar4 - 1 & (uVar4 ^ 0xffffffff);
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    piVar14 = *(int **)(param_1 + 0x98 + uVar11 * 0x100 +
                       (ulong)(uVar4 + (uVar4 >> 0x10) & 0x3f) * 8);
    do {
      piVar10 = piVar14;
      do {
        if (*piVar10 != -0x52fff2e2 && *piVar10 != -0x2ea54e13) {
          nn::os::LockMutex(pMVar1);
          nn::os::UnlockMutex(pMVar1);
        }
        iVar9 = piVar10[3];
        piVar10 = (int *)((long)iVar9 + (long)(piVar10 + 3));
        piVar12 = (int *)0x0;
        if (iVar9 != 0) {
          piVar12 = piVar10;
        }
      } while (piVar12 != piVar14);
      piVar14 = (int *)FUN_039dc8c0(param_1,(int *)(param_1 + 0x10),piVar14,0);
    } while (piVar14 != (int *)0x0);
    lVar13 = param_1 + 0x2098;
    uVar4 = *(uint *)(param_1 + 0x2098) - 1 & (*(uint *)(param_1 + 0x2098) ^ 0xffffffff);
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    uVar11 = (ulong)(uVar4 + (uVar4 >> 0x10) & 0x3f);
    uVar4 = *(uint *)(lVar13 + uVar11 * 4 + 4);
    uVar4 = uVar4 - 1 & (uVar4 ^ 0xffffffff);
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    lVar6 = *(long *)(lVar13 + uVar11 * 0x100 + (ulong)(uVar4 + (uVar4 >> 0x10) & 0x3f) * 8 + 0x88);
    do {
      lVar15 = lVar6;
      do {
        piVar14 = (int *)(lVar15 + 0xc);
        iVar9 = *piVar14;
        lVar15 = 0;
        if (iVar9 != 0) {
          lVar15 = (long)iVar9 + (long)piVar14;
        }
      } while (lVar15 != lVar6);
      lVar6 = FUN_039dc8c0(param_1,lVar13,lVar6,0);
    } while (lVar6 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

