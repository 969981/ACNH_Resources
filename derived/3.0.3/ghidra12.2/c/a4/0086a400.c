
void FUN_0086a400(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *__src;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  void *__dest;
  
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0x40;
  param_1[2] = (undefined1 *)((long)param_1 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0xe) = 0x40;
  *(undefined1 *)((long)param_1 + 0xb3) = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x19) = 0x40;
  *(undefined1 *)((long)param_1 + 0x10b) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x40;
  *(undefined1 *)((long)param_1 + 0x163) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1bb) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x40;
  *(undefined1 *)((long)param_1 + 0x213) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x40;
  *(undefined1 *)((long)param_1 + 0x26b) = 0;
  param_1[0x43] = puVar1;
  *(undefined4 *)(param_1 + 0x50) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2c3) = 0;
  param_1[0x4e] = puVar1;
  *(undefined4 *)(param_1 + 0x5b) = 0x40;
  *(undefined1 *)((long)param_1 + 0x31b) = 0;
  param_1[0x59] = puVar1;
  *(undefined4 *)(param_1 + 0x66) = 0x40;
  *(undefined1 *)((long)param_1 + 0x373) = 0;
  param_1[100] = puVar1;
  *(undefined4 *)(param_1 + 0x71) = 0x40;
  *(undefined1 *)((long)param_1 + 0x3cb) = 0;
  param_1[0x6f] = puVar1;
  *(undefined4 *)(param_1 + 0x7c) = 0x40;
  *(undefined1 *)((long)param_1 + 0x423) = 0;
  *param_1 = &PTR_LAB_0491d7f0;
  param_1[1] = puVar1;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  param_1[0xc] = puVar1;
  param_1[0xd] = (undefined1 *)((long)param_1 + 0x74);
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  param_1[0x17] = puVar1;
  param_1[0x18] = (undefined1 *)((long)param_1 + 0xcc);
  *(undefined1 *)((long)param_1 + 0x17c) = 0;
  param_1[0x2d] = puVar1;
  param_1[0x2e] = (undefined1 *)((long)param_1 + 0x17c);
  *(undefined1 *)((long)param_1 + 0x22c) = 0;
  param_1[0x44] = (undefined1 *)((long)param_1 + 0x22c);
  *(undefined1 *)((long)param_1 + 0x284) = 0;
  param_1[0x22] = puVar1;
  param_1[0x23] = (long)param_1 + 0x124;
  *(undefined1 *)((long)param_1 + 0x1d4) = 0;
  param_1[0x38] = puVar1;
  param_1[0x39] = (undefined1 *)((long)param_1 + 0x1d4);
  param_1[0x4f] = (long)param_1 + 0x284;
  *(undefined1 *)((long)param_1 + 0x2dc) = 0;
  param_1[0x5a] = (undefined1 *)((long)param_1 + 0x2dc);
  *(undefined1 *)((long)param_1 + 0x334) = 0;
  param_1[0x65] = (undefined1 *)((long)param_1 + 0x334);
  *(undefined1 *)((long)param_1 + 0x38c) = 0;
  param_1[0x70] = (undefined1 *)((long)param_1 + 0x38c);
  param_1[0x7b] = (long)param_1 + 0x3e4;
  puVar5 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  *(undefined1 *)((long)param_1 + 0x3e4) = 0;
  param_1[0x7a] = puVar1;
  puVar1 = PTR_DAT_04bb3350;
  param_1[0x85] = 0;
  if (lVar11 == 0) {
    plVar8 = malloc(0x60);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x60,8);
    }
  }
  puVar6 = PTR_DAT_04bd0d40;
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = (long)puVar2;
  plVar8[1] = 0;
  if (*(long *)puVar5 != 0) {
    lVar11 = FUN_038cb610(*(long *)puVar5,plVar8);
    plVar8[1] = lVar11;
    if (lVar11 != 0) {
      if ((*(uint *)(lVar11 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar11 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar11 + 0xb0));
      }
      plVar10 = (long *)(lVar11 + 0x70);
      lVar9 = *plVar10;
      plVar3 = (long *)((long)*(int *)(lVar11 + 0x84) + (long)plVar8);
      *plVar10 = (long)plVar3;
      *plVar3 = lVar9;
      plVar3[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar3;
      }
      *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  plVar8[8] = (long)&PTR_LAB_0491d850;
  *plVar8 = (long)&PTR_FUN_0491d810;
  plVar8[4] = 0;
  plVar8[5] = 0;
  lVar11 = *(long *)puVar5;
  plVar8[6] = (long)plVar8;
  plVar8[7] = 0;
  param_1[0x86] = plVar8;
  if (lVar11 == 0) {
    plVar8 = malloc(0x60);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x60,8);
    }
  }
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = (long)(puVar6 + 0x10);
  plVar8[1] = 0;
  if (*(long *)puVar5 != 0) {
    lVar11 = FUN_038cb610(*(long *)puVar5,plVar8);
    plVar8[1] = lVar11;
    if (lVar11 != 0) {
      if ((*(uint *)(lVar11 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar11 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar11 + 0xb0));
      }
      plVar10 = (long *)(lVar11 + 0x70);
      lVar9 = *plVar10;
      plVar3 = (long *)((long)*(int *)(lVar11 + 0x84) + (long)plVar8);
      *plVar10 = (long)plVar3;
      *plVar3 = lVar9;
      plVar3[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar3;
      }
      *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  plVar8[8] = (long)&PTR_LAB_0491d8b8;
  *plVar8 = (long)&PTR_LAB_0491d878;
  plVar8[4] = 0;
  plVar8[5] = 0;
  lVar11 = *(long *)puVar5;
  plVar8[6] = (long)plVar8;
  plVar8[7] = 0;
  param_1[0x87] = plVar8;
  if (lVar11 == 0) {
    plVar8 = malloc(0x60);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x60,8);
    }
  }
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = (long)(puVar6 + 0x10);
  plVar8[1] = 0;
  if (*(long *)puVar5 != 0) {
    lVar11 = FUN_038cb610(*(long *)puVar5,plVar8);
    plVar8[1] = lVar11;
    if (lVar11 != 0) {
      if ((*(uint *)(lVar11 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar11 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar11 + 0xb0));
      }
      plVar10 = (long *)(lVar11 + 0x70);
      lVar9 = *plVar10;
      plVar3 = (long *)((long)*(int *)(lVar11 + 0x84) + (long)plVar8);
      *plVar10 = (long)plVar3;
      *plVar3 = lVar9;
      plVar3[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar3;
      }
      *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  plVar8[8] = (long)&PTR_LAB_0491d920;
  *plVar8 = (long)&PTR_LAB_0491d8e0;
  lVar11 = DAT_04ce66b8;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = (long)plVar8;
  plVar8[7] = 0;
  param_1[0x88] = plVar8;
  __dest = (void *)param_1[0x39];
  (**(code **)(lVar11 + 0x18))(&DAT_04ce66b8);
  __src = DAT_04ce66c0;
  if (__dest != DAT_04ce66c0) {
    (**(code **)(DAT_04ce66b8 + 0x18))(&DAT_04ce66b8);
    lVar11 = 0;
    do {
      if (*(char *)((long)DAT_04ce66c0 + lVar11) == '\0') goto LAB_0086a8dc;
      if (*(char *)((long)DAT_04ce66c0 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0086a8dc;
      }
      if (*(char *)((long)DAT_04ce66c0 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0086a8dc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0086a8dc:
    iVar4 = (int)lVar11;
    if (*(int *)(param_1 + 0x3a) <= (int)lVar11) {
      iVar4 = *(int *)(param_1 + 0x3a) + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  return;
}

