
void FUN_019d5c60(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04bb2698;
  pvVar7 = (void *)param_1[300];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[300] = 0;
    *(undefined4 *)(param_1 + 299) = 0;
  }
  FUN_01935740(param_1 + 0xfa);
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0xf9] = 0;
  param_1[0xf3] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xed] = 0;
  param_1[0xe7] = 0;
  param_1[0xf4] = (long)puVar1;
  param_1[0xee] = (long)puVar1;
  param_1[0xe8] = (long)puVar1;
  param_1[0xe2] = (long)puVar1;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0xdb] = (long)(PTR_DAT_04bb2fe8 + 0x10);
  uVar6 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xe1]);
  if (((uVar6 & 1) != 0) && (pvVar7 = (void *)param_1[0xe1], pvVar7 != (void *)0x0)) {
    if (*(long *)puVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  puVar2 = PTR_DAT_04bbfb80;
  puVar1 = PTR_DAT_04bb62c0;
  param_1[0xe1] = 0;
  param_1[0xda] = 0;
  param_1[0xd5] = (long)(puVar1 + 0x10);
  param_1[0x98] = (long)(puVar2 + 0x10);
  param_1[0x9c] = (long)(puVar2 + 0x98);
  plVar5 = (long *)param_1[0xa1];
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0xa1];
  }
  *(undefined4 *)(param_1 + 0xa7) = 0;
  if (param_1[0xa4] != 0) {
    if (0 < (int)param_1[0xa3]) {
      lVar8 = 0;
      do {
        plVar5 = *(long **)(param_1[0xa4] + lVar8 * 8);
        (**(code **)*plVar5)(plVar5);
        lVar8 = lVar8 + 1;
        *plVar5 = param_1[0xa5];
        param_1[0xa5] = (long)plVar5;
      } while (lVar8 < (int)param_1[0xa3]);
    }
    pvVar7 = (void *)param_1[0xa6];
    *(undefined4 *)(param_1 + 0xa3) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar4 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x534) = 0;
    *(undefined8 *)((long)param_1 + 0x52c) = 0;
    *(undefined8 *)((long)param_1 + 0x524) = 0;
    *(undefined8 *)((long)param_1 + 0x51c) = 0;
  }
  puVar1 = PTR_DAT_04bd0d40;
  lVar8 = param_1[0x99];
  param_1[0x98] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar8 == 0) {
LAB_019d5ed8:
    param_1[0x99] = 1;
  }
  else if (lVar8 != 1) {
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x4c0);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
    goto LAB_019d5ed8;
  }
  puVar2 = PTR_DAT_04bbfa38 + 0x98;
  param_1[0x74] = (long)(PTR_DAT_04bbfa38 + 0x10);
  param_1[0x78] = (long)puVar2;
  plVar5 = (long *)param_1[0x7d];
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x7d];
  }
  *(undefined4 *)(param_1 + 0x83) = 0;
  if (param_1[0x80] != 0) {
    if (0 < (int)param_1[0x7f]) {
      lVar8 = 0;
      do {
        plVar5 = *(long **)(param_1[0x80] + lVar8 * 8);
        (**(code **)*plVar5)(plVar5);
        lVar8 = lVar8 + 1;
        *plVar5 = param_1[0x81];
        param_1[0x81] = (long)plVar5;
      } while (lVar8 < (int)param_1[0x7f]);
    }
    pvVar7 = (void *)param_1[0x82];
    *(undefined4 *)(param_1 + 0x7f) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar4 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x414) = 0;
    *(undefined8 *)((long)param_1 + 0x40c) = 0;
    *(undefined8 *)((long)param_1 + 0x404) = 0;
    *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  }
  lVar8 = param_1[0x75];
  param_1[0x74] = (long)(puVar1 + 0x10);
  if (lVar8 == 0) {
LAB_019d6030:
    param_1[0x75] = 1;
  }
  else if (lVar8 != 1) {
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x3a0);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
    goto LAB_019d6030;
  }
  puVar2 = PTR_DAT_04bbf850 + 0x98;
  param_1[0x50] = (long)(PTR_DAT_04bbf850 + 0x10);
  param_1[0x54] = (long)puVar2;
  plVar5 = (long *)param_1[0x59];
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x59];
  }
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (param_1[0x5c] != 0) {
    if (0 < (int)param_1[0x5b]) {
      lVar8 = 0;
      do {
        plVar5 = *(long **)(param_1[0x5c] + lVar8 * 8);
        (**(code **)*plVar5)(plVar5);
        lVar8 = lVar8 + 1;
        *plVar5 = param_1[0x5d];
        param_1[0x5d] = (long)plVar5;
      } while (lVar8 < (int)param_1[0x5b]);
    }
    pvVar7 = (void *)param_1[0x5e];
    *(undefined4 *)(param_1 + 0x5b) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar4 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x2f4) = 0;
    *(undefined8 *)((long)param_1 + 0x2ec) = 0;
    *(undefined8 *)((long)param_1 + 0x2e4) = 0;
    *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  }
  lVar8 = param_1[0x51];
  param_1[0x50] = (long)(puVar1 + 0x10);
  if (lVar8 != 0) {
    if (lVar8 == 1) goto LAB_019d6198;
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x280);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[0x51] = 1;
LAB_019d6198:
  *param_1 = (long)(PTR_DAT_04bb2e88 + 0x10);
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar9 = (long)*(int *)((long)param_1 + 0xbc);
    plVar5 = (long *)(param_1[0x16] - lVar9);
    lVar8 = (long)plVar5 + lVar9;
    do {
      plVar3 = (long *)((long)plVar5 + (long)*(int *)((long)param_1 + 0xbc));
      lVar8 = *(long *)(lVar8 + 8);
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      (**(code **)(*plVar5 + 0x28))();
      plVar5 = (long *)(lVar8 - lVar9);
    } while (plVar5 != (long *)((long)(param_1 + 0x15) - lVar9));
  }
  return;
}

