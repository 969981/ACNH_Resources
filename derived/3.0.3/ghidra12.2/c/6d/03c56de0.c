
void FUN_03c56de0(undefined8 *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  void *__ptr;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  __ptr = (void *)param_1[2];
  *param_1 = &PTR_LAB_04b81328;
  puVar3 = PTR_DAT_04bb28d0;
  if (__ptr != (void *)0x0) {
    puVar1 = (uint *)(param_1 + 1);
    uVar5 = *puVar1;
    if ((int)uVar5 < 1) {
      *puVar1 = 0;
    }
    else {
      uVar7 = 0;
      lVar8 = *(long *)PTR_DAT_04bb28d0;
      do {
        if ((uVar7 < uVar5) && (lVar9 = *(long *)(param_1[2] + uVar7 * 8), lVar9 != 0)) {
          nn::os::LockMutex((MutexType *)(lVar8 + 400));
          iVar2 = *(int *)(lVar9 + 0x24) + -1;
          *(int *)(lVar9 + 0x24) = iVar2;
          if ((iVar2 == 0) && ((*(uint *)(lVar9 + 0x20) & 1) == 0)) {
            *(undefined4 *)(lVar9 + 0x28) = 1;
            *(uint *)(lVar9 + 0x20) = *(uint *)(lVar9 + 0x20) | 2;
            lVar6 = *(long *)(lVar8 + 0x1d0);
            plVar4 = (long *)(*(int *)(lVar8 + 0x1e4) + lVar9);
            *(long **)(lVar8 + 0x1d0) = plVar4;
            *plVar4 = lVar6;
            plVar4[1] = lVar8 + 0x1d0;
            if (lVar6 != 0) {
              *(long **)(lVar6 + 8) = plVar4;
            }
            *(int *)(lVar8 + 0x1e0) = *(int *)(lVar8 + 0x1e0) + 1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar8 + 400));
          lVar8 = *(long *)puVar3;
          uVar5 = *puVar1;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar5);
      __ptr = (void *)param_1[2];
      *(undefined4 *)(param_1 + 1) = 0;
      if (__ptr == (void *)0x0) {
        return;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

