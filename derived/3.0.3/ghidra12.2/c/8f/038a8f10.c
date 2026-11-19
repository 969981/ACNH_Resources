
void FUN_038a8f10(undefined8 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  
  puVar2 = PTR_DAT_04bd0d40;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  plVar5 = param_1 + 1;
  *plVar5 = (long)(puVar2 + 0x10);
  *param_1 = &PTR_LAB_04b62790;
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar4 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar5);
    param_1[2] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar10 = (long *)(lVar4 + 0x70);
      lVar8 = *plVar10;
      plVar12 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar5);
      *plVar10 = (long)plVar12;
      *plVar12 = lVar8;
      plVar12[1] = (long)plVar10;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar12;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  plVar12 = param_1 + 0xd;
  *plVar12 = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bcbba0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar3 = PTR_DAT_04bcbba8;
  lVar4 = *(long *)puVar1;
  param_1[0xe] = 0;
  param_1[7] = plVar5;
  param_1[8] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[1] = puVar2 + 0x10;
  param_1[9] = puVar3 + 0x10;
  if (lVar4 != 0) {
    lVar4 = FUN_038cb610(lVar4,plVar12);
    param_1[0xe] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar10 = (long *)(lVar4 + 0x70);
      lVar8 = *plVar10;
      plVar5 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar12);
      *plVar10 = (long)plVar5;
      *plVar5 = lVar8;
      plVar5[1] = (long)plVar10;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar5;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  param_1[0xd] = puVar2 + 0x10;
  param_1[0x15] = puVar3 + 0x10;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = plVar12;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_038e18e4(param_1 + 0x1d);
  FUN_038e18e4(param_1 + 0x25);
  lVar4 = *(long *)puVar1;
  param_1[9] = &PTR_LAB_04b62848;
  param_1[10] = param_1;
  param_1[0x15] = &PTR_LAB_04b62848;
  param_1[0x16] = param_1;
  param_1[0x2d] = 0;
  param_1[0xb] = 0x48;
  param_1[0xc] = 1;
  param_1[0x17] = 0x50;
  param_1[0x18] = 1;
  if (lVar4 == 0) {
    puVar6 = malloc(0x48);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar4 + 8);
    if (lVar13 != 0) {
      plVar5 = (long *)(lVar13 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) goto LAB_038a9148;
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x48,8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    param_1[0x1b] = puVar6;
    *puVar6 = 0;
    param_1[0x1c] = puVar6;
    if (puVar6 + 8 != (undefined8 *)0x0) {
      param_1[0x19] = 0x100000000;
      param_1[0x1a] = puVar6 + 8;
    }
  }
LAB_038a9148:
  iVar7 = *(int *)((long)param_1 + 0xcc);
  if (0 < iVar7) {
    iVar9 = *(int *)(param_1 + 0x19);
    iVar11 = 0;
    do {
      if (iVar9 < iVar7) {
        puVar6 = (undefined8 *)param_1[0x1b];
        if (puVar6 != (undefined8 *)0x0) {
          param_1[0x1b] = *puVar6;
        }
        FUN_038a8ae0(puVar6,*param_2);
        iVar9 = *(int *)(param_1 + 0x19);
        iVar7 = *(int *)((long)param_1 + 0xcc);
        if (iVar9 < iVar7) {
          *(undefined8 **)(param_1[0x1a] + (long)iVar9 * 8) = puVar6;
          iVar7 = *(int *)((long)param_1 + 0xcc);
          iVar9 = *(int *)(param_1 + 0x19) + 1;
          *(int *)(param_1 + 0x19) = iVar9;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar7);
  }
  return;
}

