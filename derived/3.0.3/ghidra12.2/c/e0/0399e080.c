
void FUN_0399e080(undefined8 *param_1)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  void *__ptr;
  long lVar9;
  
  *param_1 = &PTR_FUN_04b69b60;
  puVar6 = (undefined8 *)param_1[0x44];
  if ((undefined8 *)param_1[0x44] != (undefined8 *)0x0) {
    do {
      puVar5 = puVar6;
      puVar6 = (undefined8 *)puVar5[0x43];
      if (puVar6 == (undefined8 *)0x0) goto LAB_0399e0d4;
    } while (puVar6 != param_1);
    puVar5[0x43] = param_1[0x43];
    param_1[0x44] = 0;
    param_1[0x43] = 0;
  }
LAB_0399e0d4:
  if ((long *)param_1[0x42] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x42] + 8))();
    param_1[0x42] = 0;
  }
  if (param_1[0x131] != 0) {
    FUN_039499cc(DAT_05ae90c0);
  }
  lVar8 = param_1[0x150];
  param_1[0x14f] = &PTR_FUN_04b64428;
  if (lVar8 == 0) {
LAB_0399e188:
    param_1[0x150] = 1;
  }
  else if (lVar8 != 1) {
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0xa78);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
    goto LAB_0399e188;
  }
  puVar3 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0xa6a) != -1) {
    lVar8 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar2 = (int)*(short *)((long)param_1 + 0xa6a) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar2) {
      uVar2 = 0;
    }
    lVar9 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar2 * 0x80;
    sVar1 = *(short *)(lVar9 + 0x76) + -1;
    *(short *)(lVar9 + 0x76) = sVar1;
    if (sVar1 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0xa6a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x13c);
  param_1[0x115] = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 0x120);
  FUN_039a727c(param_1 + 0x6c);
  if (*(short *)((long)param_1 + 0x312) != -1) {
    lVar8 = *(long *)puVar3;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar2 = (int)*(short *)((long)param_1 + 0x312) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar2) {
      uVar2 = 0;
    }
    lVar9 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar2 * 0x80;
    sVar1 = *(short *)(lVar9 + 0x76) + -1;
    *(short *)(lVar9 + 0x76) = sVar1;
    if (sVar1 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x312) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x51);
  *param_1 = &PTR_LAB_04b68398;
  FUN_03971f90(param_1[4],param_1);
  puVar3 = PTR_DAT_04bb2698;
  if (param_1[0x17] != 0) {
    pvVar7 = (void *)(param_1[0x17] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  pvVar7 = (void *)param_1[0x3f];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)((long)pvVar7 + 0x3a8) != 0) {
      lVar8 = *(long *)puVar3;
      __ptr = (void *)(*(long *)((long)pvVar7 + 0x3a8) + -8);
      if (lVar8 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(lVar8,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
      *(undefined8 *)((long)pvVar7 + 0x3a8) = 0;
      *(undefined4 *)((long)pvVar7 + 0x3a0) = 0;
      pvVar7 = (void *)param_1[0x3f];
      if (pvVar7 == (void *)0x0) goto LAB_039690cc;
    }
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar8,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
  }
LAB_039690cc:
  lVar8 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar8 != 0) {
    if (lVar8 == 1) {
      return;
    }
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)param_1);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

