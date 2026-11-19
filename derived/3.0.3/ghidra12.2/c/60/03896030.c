
void FUN_03896030(undefined8 *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined *local_60;
  char *pcStack_58;
  
  puVar4 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "enl::TaskThread";
  FUN_038e1f88(param_1,&local_60,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),1,
               0x7fffffff,*(undefined4 *)(param_2 + 0x20),0x20);
  *param_1 = &PTR_LAB_04b61720;
  param_1[0x21] = 0x200000000;
  param_1[0x22] = param_1 + 0x23;
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb2698;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    puVar9 = malloc(0x200);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar16 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    puVar9 = (undefined8 *)0x0;
    if (plVar8 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x200,8);
    }
  }
  puVar9[0x31] = 0;
  puVar9[0x1d] = puVar9 + 0x22;
  puVar9[0x18] = puVar9 + 0x1d;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[0x13] = puVar9 + 0x18;
  puVar9[0xe] = puVar9 + 0x13;
  puVar9[9] = puVar9 + 0xe;
  puVar9[0x22] = puVar9 + 0x27;
  puVar14 = puVar9 + 4;
  *puVar14 = puVar9 + 9;
  puVar9[0x27] = puVar9 + 0x2c;
  puVar9[2] = puVar14;
  puVar9[3] = puVar14;
  puVar9[0x2c] = puVar9 + 0x31;
  if (puVar9 + 0x36 != (undefined8 *)0x0) {
    puVar9[1] = puVar9 + 0x36;
    *(undefined4 *)((long)puVar9 + 4) = 10;
  }
  if (*(int *)(param_1 + 0x21) < *(int *)((long)param_1 + 0x10c)) {
    *(undefined8 **)(param_1[0x22] + (long)*(int *)(param_1 + 0x21) * 8) = puVar9;
    *(int *)(param_1 + 0x21) = *(int *)(param_1 + 0x21) + 1;
  }
  lVar16 = *(long *)puVar5;
  if (lVar16 == 0) {
    puVar9 = malloc(0x200);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar8 = (long *)(lVar16 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    puVar9 = (undefined8 *)0x0;
    if (plVar8 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x200,8);
    }
  }
  puVar9[0x31] = 0;
  puVar9[0x1d] = puVar9 + 0x22;
  puVar9[0x18] = puVar9 + 0x1d;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[0x13] = puVar9 + 0x18;
  puVar9[0xe] = puVar9 + 0x13;
  puVar9[0x22] = puVar9 + 0x27;
  puVar9[9] = puVar9 + 0xe;
  puVar9[0x27] = puVar9 + 0x2c;
  puVar14 = puVar9 + 4;
  *puVar14 = puVar9 + 9;
  puVar9[0x2c] = puVar9 + 0x31;
  puVar9[2] = puVar14;
  puVar9[3] = puVar14;
  if (puVar9 + 0x36 != (undefined8 *)0x0) {
    puVar9[1] = puVar9 + 0x36;
    *(undefined4 *)((long)puVar9 + 4) = 10;
  }
  if (*(int *)(param_1 + 0x21) < *(int *)((long)param_1 + 0x10c)) {
    *(undefined8 **)(param_1[0x22] + (long)*(int *)(param_1 + 0x21) * 8) = puVar9;
    *(int *)(param_1 + 0x21) = *(int *)(param_1 + 0x21) + 1;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x29] = param_1 + 0x2c;
  param_1[0x2a] = param_1 + 0x2c;
  plVar8 = param_1 + 0x26;
  param_1[0x2c] = param_1 + 0x2f;
  param_1[0x4e] = param_1 + 0x4f;
  param_1[0x2f] = param_1 + 0x32;
  param_1[0x4f] = param_1 + 0x50;
  param_1[0x32] = param_1 + 0x35;
  param_1[0x50] = param_1 + 0x51;
  param_1[0x35] = param_1 + 0x38;
  param_1[0x51] = param_1 + 0x52;
  param_1[0x38] = param_1 + 0x3b;
  param_1[0x52] = param_1 + 0x53;
  param_1[0x3b] = param_1 + 0x3e;
  param_1[0x53] = param_1 + 0x54;
  param_1[0x3e] = param_1 + 0x41;
  param_1[0x54] = param_1 + 0x55;
  param_1[0x41] = param_1 + 0x44;
  param_1[0x55] = param_1 + 0x56;
  param_1[0x44] = param_1 + 0x47;
  param_1[0x56] = param_1 + 0x57;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 10;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = param_1 + 0x4e;
  param_1[0x57] = 0;
  param_1[0x4d] = param_1 + 0x4e;
  param_1[0x26] = plVar8;
  param_1[0x27] = plVar8;
  if (param_1 + 0x58 != (undefined8 *)0x0) {
    param_1[0x4b] = param_1 + 0x58;
    *(undefined4 *)((long)param_1 + 0x254) = 10;
  }
  FUN_038e18e4(param_1 + 0x62);
  FUN_038e18e4(param_1 + 0x6a);
  puVar6 = PTR_DAT_04bd0d40;
  lVar16 = *(long *)puVar5;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = puVar6 + 0x10;
  if (lVar16 != 0) {
    lVar16 = FUN_038cb610(lVar16,param_1 + 0x75);
    param_1[0x76] = lVar16;
    if (lVar16 != 0) {
      if ((*(uint *)(lVar16 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar16 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar16 + 0xb0));
      }
      plVar13 = (long *)(lVar16 + 0x70);
      lVar11 = *plVar13;
      plVar1 = (long *)((long)*(int *)(lVar16 + 0x84) + (long)(param_1 + 0x75));
      *plVar13 = (long)plVar1;
      *plVar1 = lVar11;
      plVar1[1] = (long)plVar13;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar1;
      }
      *(int *)(lVar16 + 0x80) = *(int *)(lVar16 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  puVar5 = PTR_DAT_04bd0e58;
  param_1[0x7b] = 0;
  param_1[0x75] = puVar5 + 0x10;
  local_60 = puVar4 + 0x10;
  pcStack_58 = "enl::TaskThread::TaskHeap";
  uVar10 = FUN_038c6d48(*(undefined4 *)(param_2 + 0x2c),&local_60,*(undefined8 *)(param_2 + 8),8,1,0
                       );
  param_1[0x72] = uVar10;
  nn::os::LockMutex((MutexType *)(param_1 + 0x66));
  piVar12 = (int *)0x0;
  if (*(uint *)(param_1 + 0x25) < *(uint *)(param_1 + 0x21)) {
    piVar12 = *(int **)(param_1[0x22] + (long)(int)*(uint *)(param_1 + 0x25) * 8);
  }
  if (0 < *piVar12) {
    lVar16 = 0;
    puVar9 = *(undefined8 **)(piVar12 + 4);
    do {
      puVar14 = *(undefined8 **)(*(long *)(piVar12 + 2) + lVar16 * 8);
      lVar16 = lVar16 + 1;
      *puVar14 = puVar9;
      *(undefined8 **)(piVar12 + 4) = puVar14;
      puVar9 = puVar14;
    } while (lVar16 < *piVar12);
  }
  *piVar12 = 0;
  uVar2 = *(int *)(param_1 + 0x25) + 1U & 1;
  uVar3 = -uVar2;
  if (-2 < *(int *)(param_1 + 0x25)) {
    uVar3 = uVar2;
  }
  if (uVar3 < *(uint *)(param_1 + 0x21)) {
    piVar12 = *(int **)(param_1[0x22] + (ulong)uVar3 * 8);
  }
  else {
    piVar12 = (int *)0x0;
  }
  if (0 < *piVar12) {
    lVar16 = 0;
    puVar9 = *(undefined8 **)(piVar12 + 4);
    do {
      puVar14 = *(undefined8 **)(*(long *)(piVar12 + 2) + lVar16 * 8);
      lVar16 = lVar16 + 1;
      *puVar14 = puVar9;
      *(undefined8 **)(piVar12 + 4) = puVar14;
      puVar9 = puVar14;
    } while (lVar16 < *piVar12);
  }
  *piVar12 = 0;
  plVar1 = (long *)param_1[0x27];
  while (plVar1 != plVar8) {
    plVar13 = (long *)plVar1[1];
    plVar15 = plVar13;
    if (*plVar1 != 0) {
      *(long **)(*plVar1 + 8) = plVar13;
      plVar15 = (long *)plVar1[1];
    }
    if (plVar15 != (long *)0x0) {
      *plVar15 = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    plVar1[-1] = param_1[0x29];
    param_1[0x29] = plVar1 + -1;
    plVar1 = plVar13;
  }
  if (0 < *(int *)(param_1 + 0x4a)) {
    lVar16 = 0;
    puVar9 = (undefined8 *)param_1[0x4c];
    do {
      puVar14 = *(undefined8 **)(param_1[0x4b] + lVar16 * 8);
      lVar16 = lVar16 + 1;
      *puVar14 = puVar9;
      param_1[0x4c] = puVar14;
      puVar9 = puVar14;
    } while (lVar16 < *(int *)(param_1 + 0x4a));
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  (**(code **)(*(long *)param_1[0x72] + 0x58))();
  *(undefined4 *)(param_1 + 0x73) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x66));
  lVar16 = *(long *)PTR_DAT_04bb29d0;
  param_1[0x74] = (long)(lVar16 * (ulong)*(uint *)(param_2 + 0x24)) / 1000;
  param_1[0x7b] = (long)(lVar16 * (ulong)*(uint *)(param_2 + 0x34)) / 1000;
  nn::os::InitializeLightEvent(param_1 + 0x79,0,1);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x7d) = 4;
  return;
}

