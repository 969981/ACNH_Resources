
void FUN_03a03fd0(long param_1,byte param_2,ulong param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  void *__dest;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  param_2 = *(byte *)(param_1 + 0x5598) & param_2;
  if ((param_2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x4e45) & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x4ec8));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x4ec8));
    }
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass((undefined4 *)(param_1 + 0x4e58),0x10);
      if (bVar6) {
        *(undefined4 *)(param_1 + 0x4e58) = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar7 = *(uint *)(param_1 + 0x5598) & 0xfffffffd | 0x100;
  }
  else {
    do {
      iVar3 = *(int *)(param_1 + 0x4e58);
      if (*(int *)(param_1 + 0x4e58) != 0) {
        lVar8 = 0;
        iVar11 = 1;
        do {
          lVar14 = *(long *)(*(long *)(param_1 + 0x4e60) + lVar8);
          if ((*(byte *)(lVar14 + 0x280) & 0x10) != 0 || (*(byte *)(lVar14 + 0x281) & 1) != 0) {
            *(byte *)(lVar14 + 0x281) = *(byte *)(lVar14 + 0x281) & 0xf9;
            iVar4 = *(int *)(param_1 + 0x4e58);
            if (iVar11 + -1 < iVar4) {
              uVar7 = iVar4 - iVar11;
              if (uVar7 != 0 && iVar11 <= iVar4) {
                __dest = (void *)(*(long *)(param_1 + 0x4e60) + lVar8);
                memmove(__dest,(void *)((long)__dest + 8),
                        -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3);
              }
              *(int *)(param_1 + 0x4e58) = iVar4 + -1;
            }
            break;
          }
          lVar8 = lVar8 + 8;
          iVar11 = iVar11 + 1;
        } while ((long)*(int *)(param_1 + 0x4e58) * 8 != lVar8);
      }
    } while (iVar3 != *(int *)(param_1 + 0x4e58));
    plVar9 = *(long **)(param_1 + 0x4e60);
    uVar7 = *(uint *)(param_1 + 0x4e58);
    uVar13 = (ulong)(int)uVar7;
    if (uVar7 != 0) {
      uVar12 = uVar13 - 1 & 0x1fffffffffffffff;
      if ((param_3 & 1) == 0) {
        plVar10 = plVar9;
        if ((uVar7 & 1) != 0) {
          plVar10 = plVar9 + 1;
          *(byte *)(*plVar9 + 0x281) = *(byte *)(*plVar9 + 0x281) & 0xfd;
        }
        if (uVar12 != 0) {
          do {
            *(byte *)(*plVar10 + 0x281) = *(byte *)(*plVar10 + 0x281) & 0xfd;
            plVar1 = plVar10 + 1;
            plVar10 = plVar10 + 2;
            *(byte *)(*plVar1 + 0x281) = *(byte *)(*plVar1 + 0x281) & 0xfd;
          } while (plVar10 != plVar9 + uVar13);
        }
      }
      else {
        plVar10 = plVar9;
        if ((uVar13 & 1) != 0) {
          plVar10 = plVar9 + 1;
          *(byte *)(*plVar9 + 0x281) = *(byte *)(*plVar9 + 0x281) | 2;
        }
        if (uVar12 != 0) {
          do {
            *(byte *)(*plVar10 + 0x281) = *(byte *)(*plVar10 + 0x281) | 2;
            plVar1 = plVar10 + 1;
            plVar10 = plVar10 + 2;
            *(byte *)(*plVar1 + 0x281) = *(byte *)(*plVar1 + 0x281) | 2;
          } while (plVar10 != plVar9 + uVar13);
        }
      }
    }
    uVar7 = *(uint *)(param_1 + 0x5598) & 0xfffffeff;
  }
  *(uint *)(param_1 + 0x5598) = uVar7;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass((undefined4 *)(param_1 + 0x4e80),0x10);
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x4e80) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((*(long *)(param_1 + 0x55c8) != 0) && (*(char *)(*(long *)(param_1 + 0x118) + 0x6b0) != '\0'))
  {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x55c8) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = *(long **)(param_1 + 0x5590);
  if (plVar9 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03a04208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x20))(plVar9,param_1,param_2 & 1);
  return;
}

