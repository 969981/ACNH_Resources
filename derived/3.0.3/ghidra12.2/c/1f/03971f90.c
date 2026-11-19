
undefined8 FUN_03971f90(long param_1,long param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  void *__dest;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  
  pMVar1 = (MutexType *)(param_1 + 0x4f8);
  nn::os::LockMutex(pMVar1);
  if (param_2 != 0) {
    nn::os::LockMutex(pMVar1);
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar13 = 0;
      uVar8 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 0x28) +
                     (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3)) == param_2) {
          nn::os::UnlockMutex(pMVar1);
          iVar3 = *(int *)(param_1 + 0x10);
          if (iVar3 != 0) {
            lVar14 = *(long *)(param_1 + 0x18);
            uVar8 = 0;
            do {
              lVar15 = *(long *)(lVar14 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
              iVar7 = *(int *)(lVar15 + 0x6b8);
              if (iVar7 != 0) {
                lVar5 = 0;
                iVar6 = 1;
LAB_03972094:
                if (*(long *)(*(long *)(lVar15 + 0x6c0) + lVar5) != param_2) goto code_r0x039720a0;
                plVar10 = *(long **)(lVar15 + 0xbd0);
                uVar4 = *(uint *)(lVar15 + 0xbc8);
                if (uVar4 != 0) {
                  if ((uVar4 & 1) == 0) {
                    plVar9 = plVar10;
                  }
                  else {
                    lVar11 = *plVar10;
                    if (*(long *)(lVar11 + 0x260) == param_2) {
                      *(byte *)(lVar11 + 600) = *(byte *)(lVar11 + 600) & 0xfc;
                    }
                    plVar9 = plVar10 + 1;
                  }
                  if (((long)(int)uVar4 - 1U & 0x1fffffffffffffff) != 0) {
                    do {
                      lVar11 = *plVar9;
                      if (*(long *)(lVar11 + 0x260) == param_2) {
                        *(byte *)(lVar11 + 600) = *(byte *)(lVar11 + 600) & 0xfc;
                      }
                      lVar11 = plVar9[1];
                      if (*(long *)(lVar11 + 0x260) == param_2) {
                        *(byte *)(lVar11 + 600) = *(byte *)(lVar11 + 600) & 0xfc;
                      }
                      plVar9 = plVar9 + 2;
                    } while (plVar9 != plVar10 + (int)uVar4);
                  }
                  iVar7 = *(int *)(lVar15 + 0x6b8);
                }
                if (iVar6 + -1 < iVar7) {
                  uVar4 = iVar7 - iVar6;
                  if (uVar4 != 0 && iVar6 <= iVar7) {
                    __dest = (void *)(*(long *)(lVar15 + 0x6c0) + lVar5);
                    memmove(__dest,(void *)((long)__dest + 8),
                            -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
                    iVar7 = *(int *)(lVar15 + 0x6b8);
                  }
                  *(int *)(lVar15 + 0x6b8) = iVar7 + -1;
                }
              }
LAB_03972060:
              uVar2 = uVar8 + 1;
              uVar8 = uVar2 & 0xffffffff;
            } while (iVar3 != (int)uVar2);
          }
          if (*(uint *)(param_1 + 0x20) <= uVar13) {
            uVar13 = 0;
          }
          *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar13 * 8) = 0;
          *(undefined8 *)(*(long *)(param_2 + 200) + 0x20) = 0;
          *(undefined8 *)(*(long *)(param_2 + 0xd0) + 0x20) = 0;
          *(undefined8 *)(*(long *)(param_2 + 0xd8) + 0x20) = 0;
          *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 1;
          uVar12 = 1;
          goto LAB_03972010;
        }
        uVar2 = uVar8 + 1;
        uVar13 = uVar13 + 1;
        uVar8 = uVar2 & 0xffffffff;
      } while (*(int *)(param_1 + 0x20) != (int)uVar2);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  uVar12 = 0;
LAB_03972010:
  nn::os::UnlockMutex(pMVar1);
  return uVar12;
code_r0x039720a0:
  lVar5 = lVar5 + 8;
  iVar6 = iVar6 + 1;
  if ((long)iVar7 * 8 == lVar5) goto LAB_03972060;
  goto LAB_03972094;
}

