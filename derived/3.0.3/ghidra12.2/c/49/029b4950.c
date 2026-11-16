
void FUN_029b4950(long param_1)

{
  undefined4 *puVar1;
  MutexType *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  lVar6 = DAT_055e74f0;
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar11 = *(long **)(param_1 + 0x28);
    if (plVar11 != (long *)(param_1 + 0x20)) {
      plVar7 = plVar11 + -9;
      plVar10 = (long *)(param_1 + -0x28);
      plVar8 = plVar11;
      plVar9 = plVar7;
LAB_029b4994:
      if (*(char *)((long)plVar9 + 10) == '\x02') goto code_r0x029b49a0;
      puVar1 = (undefined4 *)(DAT_055e74f0 + 0x5bd20);
      pMVar2 = (MutexType *)(DAT_055e74f0 + 0x5bd48);
      nn::os::LockMutex(pMVar2);
      if (*(long **)(lVar6 + 0x5cf8) != (long *)(lVar6 + 0x5cf0)) {
        plVar11 = *(long **)(lVar6 + 0x5cf8);
        do {
          plVar7 = (long *)plVar11[1];
          plVar8 = plVar7;
          if (*plVar11 != 0) {
            *(long **)(*plVar11 + 8) = plVar7;
            plVar8 = (long *)plVar11[1];
          }
          if (plVar8 != (long *)0x0) {
            *plVar8 = *plVar11;
          }
          *plVar11 = 0;
          plVar11[1] = 0;
          *(int *)(lVar6 + 0x5d00) = *(int *)(lVar6 + 0x5d00) + -1;
          plVar11[-0x29] = *(long *)(lVar6 + 0x5d08);
          *(long **)(lVar6 + 0x5d08) = plVar11 + -0x29;
          plVar11 = plVar7;
        } while (plVar7 != (long *)(lVar6 + 0x5cf0));
      }
      *puVar1 = 0;
      nn::os::UnlockMutex(pMVar2);
      plVar11 = *(long **)(param_1 + 0x28);
      plVar7 = plVar11 + -9;
joined_r0x029b49b4:
      if (plVar7 != plVar10) {
        do {
          lVar6 = DAT_055e74f0;
          lVar12 = plVar7[8];
          if (lVar12 != 0) {
            nn::os::LockMutex((MutexType *)&DAT_055e9108);
            iVar4 = *(int *)(lVar6 + 0x1b70);
            iVar5 = *(int *)(lVar6 + 0x1b68);
            if (iVar4 < iVar5) {
              *(int *)(lVar6 + 0x1b70) = iVar4 + 1;
              iVar4 = *(int *)(lVar6 + 0x1b6c) + iVar4;
              iVar3 = 0;
              if (iVar5 <= iVar4) {
                iVar3 = iVar5;
              }
              *(long *)(*(long *)(lVar6 + 0x1b60) + (long)(iVar4 - iVar3) * 8) = lVar12;
            }
            nn::os::UnlockMutex((MutexType *)&DAT_055e9108);
          }
          plVar11 = (long *)plVar11[1];
          plVar7 = plVar11 + -9;
        } while (plVar7 != plVar10);
        plVar11 = *(long **)(param_1 + 0x28);
      }
    }
    while (plVar11 != (long *)(param_1 + 0x20)) {
      plVar7 = (long *)plVar11[1];
      plVar8 = plVar7;
      if (*plVar11 != 0) {
        *(long **)(*plVar11 + 8) = plVar7;
        plVar8 = (long *)plVar11[1];
      }
      if (plVar8 != (long *)0x0) {
        *plVar8 = *plVar11;
      }
      *plVar11 = 0;
      plVar11[1] = 0;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      plVar11[-9] = *(long *)(param_1 + 0x38);
      *(long **)(param_1 + 0x38) = plVar11 + -9;
      plVar11 = plVar7;
    }
  }
  return;
code_r0x029b49a0:
  plVar8 = (long *)plVar8[1];
  plVar9 = plVar8 + -9;
  if (plVar9 == plVar10) goto joined_r0x029b49b4;
  goto LAB_029b4994;
}

