
undefined8 FUN_015d7f00(long param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  float *pfVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_a8;
  undefined **local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined *local_50;
  char *local_48;
  
  if (*(char *)(param_1 + 0x16c) == '\0') {
    return 0;
  }
  uVar3 = *param_2;
  if (uVar3 == 0xffffffff) {
    return 0;
  }
  if (*param_3 == -1) {
    return 0;
  }
  if ((uVar3 & 0xe000) == 0x6000) {
    if (2 < (uint)((ulong)uVar3 & 7)) {
      return 0;
    }
    pcVar2 = (char *)(param_1 + 0x5e8);
    if ((uVar3 & 0xfff8) != 0x6008) {
      pcVar2 = (char *)(param_1 + ((ulong)uVar3 & 7) * 0x20 + 0x528);
    }
    if (*pcVar2 == '\0') {
      return 0;
    }
    uVar4 = *(uint *)(param_1 + 0x170);
  }
  else {
    if (uVar3 != *(uint *)(param_1 + 0x5fc)) {
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 0x5d8);
    uVar4 = *(uint *)(param_1 + 0x170);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x4a0));
  if (*(int *)(param_1 + 0x478) < 1) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x470);
    if (*plVar11 != 0) {
      *(long *)(*plVar11 + 8) = plVar11[1];
    }
    if ((long *)plVar11[1] != (long *)0x0) {
      *(long *)plVar11[1] = *plVar11;
    }
    *plVar11 = 0;
    plVar11[1] = 0;
    *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) + -1;
  }
  iVar5 = *(int *)(param_1 + 0x47c);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4a0));
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar10 = (long)plVar11 - (long)iVar5;
  if (lVar10 == 0) {
    return 0;
  }
  puVar1 = (uint *)(param_1 + 0x170);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 | 4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(lVar10 + 0x3c) = 1;
  *(ushort *)(lVar10 + 0x38) = *(ushort *)(lVar10 + 0x38) | 0x20;
  *(int *)(lVar10 + 0x20) = *param_3;
  *(uint *)(param_1 + 0x5f8) = uVar3;
  lVar12 = *(long *)(param_1 + 0x40);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar12 + 0x158) + 0xf0))(lVar12 + 0x158);
  *(int *)(lVar10 + 0x28) = (int)*pfVar8;
  lVar12 = (**(code **)(*(long *)(lVar12 + 0x158) + 0xf0))(lVar12 + 0x158);
  *(int *)(lVar10 + 0x2c) = (int)*(float *)(lVar12 + 4);
  if ((uVar3 & 0xfff8) == 0x6008) {
    lVar12 = param_1 + 0x5d8;
  }
  else {
    lVar12 = param_1 + 0x518 + (ulong)(uVar3 & 7) * 0x20;
    if (2 < (uVar3 & 7)) {
      lVar12 = param_1 + 0x518;
    }
  }
  uVar9 = *(undefined8 *)(lVar12 + 8);
  *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
  *(undefined8 *)(lVar10 + 0x18) = uVar9;
  *(undefined4 *)(lVar10 + 0x24) = *(undefined4 *)(lVar12 + 4);
  *(undefined4 *)(lVar10 + 0x3c) = 2;
  lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x120) + 0x38);
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x20) != 0)) {
    local_88 = 0;
    local_90 = PTR_DAT_04bb5070 + 0x10;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_80 = 0;
    local_a8 = 0;
    local_86 = 1;
    lStack_70 = param_1 + 0xe8;
    local_78 = *(undefined8 *)(lVar12 + 8);
    uStack_60 = 0;
    local_58 = 0;
    local_48 = "WherearenPhotographTemporaryCaptureSave";
    local_a0 = &local_90;
    uStack_98 = 0;
    local_68 = lVar10;
    FUN_03f45184(*(long *)(lVar12 + 0x20),&local_a8);
  }
  return 1;
}

