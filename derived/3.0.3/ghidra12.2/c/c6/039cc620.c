
void FUN_039cc620(undefined4 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  MutexType *pMVar3;
  int *piVar4;
  void *__dest;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0xf8));
  *(undefined4 *)(param_2 + 0x30) = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    plVar17 = *(long **)(param_2 + 0x18);
    plVar2 = plVar17 + *(int *)(param_2 + 0x10);
    do {
      lVar18 = *plVar17;
      pMVar3 = (MutexType *)(lVar18 + 0x5728);
      nn::os::LockMutex(pMVar3);
      if (*(int *)(lVar18 + 0x108) != 0) {
        iVar11 = 0;
        do {
          lVar13 = *(long *)(*(long *)(lVar18 + 0x110) + (long)iVar11 * 0x430 + 0x3d0);
          if (((lVar13 != 0) && (*(char *)(lVar13 + 0x92) != '\0')) &&
             (((*(ushort *)(lVar13 + 0xa74) >> 4 & 1) == 0 || (*(long *)(lVar13 + 0x230) == 0)))) {
            nn::os::UnlockMutex(pMVar3);
            goto LAB_039cc714;
          }
          iVar11 = iVar11 + 1;
        } while (*(int *)(lVar18 + 0x108) != iVar11);
      }
      piVar4 = (int *)(lVar18 + 0x4e58);
      uVar6 = *(uint *)(lVar18 + 0x5598);
      nn::os::UnlockMutex(pMVar3);
      if ((uVar6 >> 0xd & 1) == 0) {
        do {
          iVar11 = *piVar4;
          if (*piVar4 != 0) {
            lVar13 = 0;
            iVar9 = 1;
            do {
              lVar14 = *(long *)(*(long *)(lVar18 + 0x4e60) + lVar13);
              if ((*(byte *)(lVar14 + 0x280) & 0x10) != 0 || (*(byte *)(lVar14 + 0x281) & 1) != 0) {
                *(byte *)(lVar14 + 0x281) = *(byte *)(lVar14 + 0x281) & 0xf9;
                iVar7 = *piVar4;
                if (iVar9 + -1 < iVar7) {
                  uVar6 = iVar7 - iVar9;
                  if (uVar6 != 0 && iVar9 <= iVar7) {
                    __dest = (void *)(*(long *)(lVar18 + 0x4e60) + lVar13);
                    memmove(__dest,(void *)((long)__dest + 8),
                            -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3);
                  }
                  *piVar4 = iVar7 + -1;
                }
                break;
              }
              lVar13 = lVar13 + 8;
              iVar9 = iVar9 + 1;
            } while ((long)*piVar4 * 8 != lVar13);
          }
        } while (iVar11 != *piVar4);
        plVar10 = *(long **)(lVar18 + 0x4e60);
        uVar12 = (ulong)*piVar4;
        if (*piVar4 != 0) {
          plVar8 = plVar10;
          for (uVar5 = uVar12 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(byte *)(*plVar8 + 0x281) = *(byte *)(*plVar8 + 0x281) & 0xf9;
            plVar8 = plVar8 + 1;
          }
          if (2 < (uVar12 - 1 & 0x1fffffffffffffff)) {
            do {
              *(byte *)(*plVar8 + 0x281) = *(byte *)(*plVar8 + 0x281) & 0xf9;
              *(byte *)(plVar8[1] + 0x281) = *(byte *)(plVar8[1] + 0x281) & 0xf9;
              *(byte *)(plVar8[2] + 0x281) = *(byte *)(plVar8[2] + 0x281) & 0xf9;
              plVar1 = plVar8 + 3;
              plVar8 = plVar8 + 4;
              *(byte *)(*plVar1 + 0x281) = *(byte *)(*plVar1 + 0x281) & 0xf9;
            } while (plVar8 != plVar10 + uVar12);
          }
        }
      }
      else {
LAB_039cc714:
        if (*(int *)(param_2 + 0x30) < *(int *)(param_2 + 0x34)) {
          *(long *)(*(long *)(param_2 + 0x38) + (long)*(int *)(param_2 + 0x30) * 8) = lVar18;
          *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0xf8));
  if ((DAT_05aea958 != 0) && (*(int *)(DAT_05aea958 + 0x398) != 2)) {
    memset((void *)(DAT_05aea958 + 0x4f8),0,0x1400);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    lVar18 = (long)*(int *)(param_2 + 0x30) << 3;
    puVar16 = *(undefined8 **)(param_2 + 0x38);
    do {
      uVar15 = *puVar16;
      FUN_03a077e0(uVar15);
      FUN_03a04220(param_1,uVar15);
      lVar18 = lVar18 + -8;
      puVar16 = puVar16 + 1;
    } while (lVar18 != 0);
  }
  FUN_039cd5b0(param_2 + 0x50,(undefined4 *)(param_2 + 0x30));
  return;
}

