
void FUN_03ca1c60(long *param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  void *__ptr;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar2 = (undefined8 *)(lVar14 + 8);
  if (lVar7 != 0) {
    puVar2 = (undefined8 *)(lVar7 + 0xa8);
  }
  local_90 = *puVar2;
  uStack_88 = 0;
  pMVar1 = (MutexType *)(PTR_DAT_04bd44e8 + 0x20);
  nn::os::LockMutex(pMVar1);
  puVar4 = PTR_DAT_04bd44c8;
  local_80 = *(undefined8 *)PTR_DAT_04bd44c8;
  *(undefined8 **)PTR_DAT_04bd44c8 = &local_90;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  puVar6 = PTR_LAB_04bd44e0;
  puVar5 = PTR_LAB_04bd44d8;
  iVar9 = (int)param_1[4];
  if (iVar9 != 0) {
    do {
      if (iVar9 < 1) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = (long *)param_1[2];
        if (*plVar10 != 0) {
          *(long *)(*plVar10 + 8) = plVar10[1];
        }
        if ((long *)plVar10[1] != (long *)0x0) {
          *(long *)plVar10[1] = *plVar10;
        }
        *plVar10 = 0;
        plVar10[1] = 0;
        *(int *)(param_1 + 4) = (int)param_1[4] + -1;
      }
      lVar7 = *param_1;
      __ptr = (void *)0x0;
      if (plVar10 != (long *)0x0) {
        __ptr = (void *)((long)plVar10 - (long)*(int *)((long)param_1 + 0x24));
      }
      plVar15 = *(long **)((long)__ptr + 0x28);
      nn::os::LockMutex((MutexType *)(lVar7 + 0x60));
      iVar9 = *(int *)((long)plVar15 + 0x3c);
      plVar10 = (long *)((long)__ptr + (long)iVar9 + 0x10);
      if (*plVar10 != 0) {
        *(undefined8 *)(*plVar10 + 8) = *(undefined8 *)((long)__ptr + (long)iVar9 + 0x18);
      }
      plVar12 = *(long **)((long)__ptr + (long)iVar9 + 0x18);
      if (plVar12 != (long *)0x0) {
        *plVar12 = *plVar10;
      }
      *plVar10 = 0;
      *(undefined8 *)((long)__ptr + (long)iVar9 + 0x18) = 0;
      *(int *)(plVar15 + 7) = (int)plVar15[7] + -1;
      uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
      if (((uVar8 & 1) != 0) && ((int)plVar15[7] == 0)) {
        local_78 = *(undefined8 *)(*(long *)(plVar15[4] + 0x28) + 0x40);
        uStack_70 = 0;
        nn::os::LockMutex(pMVar1);
        local_68 = *(undefined8 *)puVar4;
        *(undefined8 **)puVar4 = &local_78;
        FUN_00367a40(puVar5,puVar6,0);
        (**(code **)(*plVar15 + 0x10))(plVar15);
        (**(code **)(*plVar15 + 8))(plVar15);
        *(undefined8 *)puVar4 = local_68;
        FUN_00367a40(puVar5,puVar6,0);
        nn::os::UnlockMutex(pMVar1);
      }
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x60));
      if (*(long *)puVar3 == 0) {
        free(__ptr);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)puVar3,__ptr);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,__ptr);
        }
      }
      iVar9 = (int)param_1[4];
    } while (iVar9 != 0);
  }
  *(undefined8 *)puVar4 = local_80;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  nn::os::UnlockMutex(pMVar1);
  lVar7 = *param_1;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x60));
  lVar14 = *param_1;
  if (*(long *)(lVar14 + 0x10) != lVar14 + 8) {
    lVar11 = (long)*(int *)(lVar14 + 0x1c);
    lVar13 = *(long *)(lVar14 + 0x10) - lVar11;
    do {
      lVar13 = *(long *)(lVar13 + lVar11 + 8) - lVar11;
    } while (lVar13 != (lVar14 + 8) - lVar11);
  }
  pMVar1 = (MutexType *)(PTR_DAT_04bd44e8 + 0x20);
  nn::os::LockMutex(pMVar1);
  local_80 = *(undefined8 *)puVar4;
  *(undefined8 **)puVar4 = &local_90;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  puVar5 = PTR_LAB_04bd44e0;
  puVar3 = PTR_LAB_04bd44d8;
  lVar14 = *param_1;
  if (*(long *)(lVar14 + 0x28) != lVar14 + 0x20) {
    lVar11 = (long)*(int *)(lVar14 + 0x34);
    plVar10 = (long *)(*(long *)(lVar14 + 0x28) - lVar11);
    lVar13 = (long)plVar10 + lVar11;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      if ((long *)plVar10[4] == param_1) {
        local_78 = *(undefined8 *)(param_1[5] + 0x40);
        uStack_70 = 0;
        nn::os::LockMutex(pMVar1);
        local_68 = *(undefined8 *)puVar4;
        *(undefined8 **)puVar4 = &local_78;
        FUN_00367a40(puVar3,puVar5,0);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        (**(code **)(*plVar10 + 8))(plVar10);
        *(undefined8 *)puVar4 = local_68;
        FUN_00367a40(puVar3,puVar5,0);
        nn::os::UnlockMutex(pMVar1);
      }
      plVar10 = (long *)(lVar13 - lVar11);
    } while (plVar10 != (long *)((lVar14 + 0x20) - lVar11));
  }
  *(undefined8 *)puVar4 = local_80;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x60));
  param_1[5] = 0;
  return;
}

