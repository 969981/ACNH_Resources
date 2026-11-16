
void FUN_02930750(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  byte *pbVar6;
  
  puVar1 = (undefined8 *)((long)param_1 + 0x14);
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 2) = 0x20;
  param_1[1] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2028;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if ((*PTR_DAT_04bb3998 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3998);
    if (iVar3 != 0) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
  }
  pbVar6 = PTR_DAT_04bb3998;
  puVar5 = (uint *)PTR_DAT_04bb3990;
  if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar4 * 4) == 0) goto LAB_029307e8;
      uVar4 = uVar4 + 1;
    } while (*(uint *)PTR_DAT_04bb3990 != uVar4);
  }
  uVar4 = 0;
LAB_029307e8:
  *(int *)(param_1 + 10) = (int)uVar4;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((*pbVar6 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3998);
    puVar5 = (uint *)PTR_DAT_04bb3990;
    pbVar6 = PTR_DAT_04bb3998;
    if (iVar3 != 0) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
      puVar5 = (uint *)PTR_DAT_04bb3990;
      pbVar6 = PTR_DAT_04bb3998;
    }
  }
  if (0 < (int)*puVar5) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(puVar5 + 2) + uVar4 * 4) == 0) goto LAB_0293082c;
      uVar4 = uVar4 + 1;
    } while (*puVar5 != uVar4);
  }
  uVar4 = 0;
LAB_0293082c:
  *(int *)((long)param_1 + 0x6c) = (int)uVar4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  if ((*pbVar6 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3998);
    puVar5 = (uint *)PTR_DAT_04bb3990;
    pbVar6 = PTR_DAT_04bb3998;
    if (iVar3 != 0) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
      puVar5 = (uint *)PTR_DAT_04bb3990;
      pbVar6 = PTR_DAT_04bb3998;
    }
  }
  if (0 < (int)*puVar5) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(puVar5 + 2) + uVar4 * 4) == 0) goto LAB_02930878;
      uVar4 = uVar4 + 1;
    } while (*puVar5 != uVar4);
  }
  uVar4 = 0;
LAB_02930878:
  *(int *)(param_1 + 0x11) = (int)uVar4;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined2 *)((long)param_1 + 0x9c) = 0x101;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((*pbVar6 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3998);
    puVar5 = (uint *)PTR_DAT_04bb3990;
    pbVar6 = PTR_DAT_04bb3998;
    if (iVar3 != 0) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
      puVar5 = (uint *)PTR_DAT_04bb3990;
      pbVar6 = PTR_DAT_04bb3998;
    }
  }
  if (0 < (int)*puVar5) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(puVar5 + 2) + uVar4 * 4) == 0) goto LAB_029308d8;
      uVar4 = uVar4 + 1;
    } while (*puVar5 != uVar4);
  }
  uVar4 = 0;
LAB_029308d8:
  *(int *)((long)param_1 + 0xb4) = (int)uVar4;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0xff;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  if ((*pbVar6 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3998);
    puVar5 = (uint *)PTR_DAT_04bb3990;
    pbVar6 = PTR_DAT_04bb3998;
    if (iVar3 != 0) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
      puVar5 = (uint *)PTR_DAT_04bb3990;
      pbVar6 = PTR_DAT_04bb3998;
    }
  }
  if (0 < (int)*puVar5) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(puVar5 + 2) + uVar4 * 4) == 0) goto LAB_02930928;
      uVar4 = uVar4 + 1;
    } while (*puVar5 != uVar4);
  }
  uVar4 = 0;
LAB_02930928:
  *(int *)((long)param_1 + 0xe4) = (int)uVar4;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  if ((*pbVar6 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3998);
    puVar5 = (uint *)PTR_DAT_04bb3990;
    pbVar6 = PTR_DAT_04bb3998;
    if (iVar3 != 0) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
      puVar5 = (uint *)PTR_DAT_04bb3990;
      pbVar6 = PTR_DAT_04bb3998;
    }
  }
  if (0 < (int)*puVar5) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(puVar5 + 2) + uVar4 * 4) == 0) goto LAB_02930968;
      uVar4 = uVar4 + 1;
    } while (*puVar5 != uVar4);
  }
  uVar4 = 0;
LAB_02930968:
  *(int *)(param_1 + 10) = (int)uVar4;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((*pbVar6 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3998);
    puVar5 = (uint *)PTR_DAT_04bb3990;
    pbVar6 = PTR_DAT_04bb3998;
    if (iVar3 != 0) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
      puVar5 = (uint *)PTR_DAT_04bb3990;
      pbVar6 = PTR_DAT_04bb3998;
    }
  }
  if (0 < (int)*puVar5) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(puVar5 + 2) + uVar4 * 4) == 0) goto LAB_029309a8;
      uVar4 = uVar4 + 1;
    } while (*puVar5 != uVar4);
  }
  uVar4 = 0;
LAB_029309a8:
  *(int *)((long)param_1 + 0x6c) = (int)uVar4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  if ((*pbVar6 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3998);
    puVar5 = (uint *)PTR_DAT_04bb3990;
    if (iVar3 != 0) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
      puVar5 = (uint *)PTR_DAT_04bb3990;
    }
  }
  if (0 < (int)*puVar5) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(puVar5 + 2) + uVar4 * 4) == 0) goto LAB_029309e8;
      uVar4 = uVar4 + 1;
    } while (*puVar5 != uVar4);
  }
  uVar4 = 0;
LAB_029309e8:
  *(int *)(param_1 + 0x11) = (int)uVar4;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  return;
}

