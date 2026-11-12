
void FUN_007f6210(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auStack_16f0 [2];
  undefined1 auStack_16ee [2];
  undefined1 auStack_16ec [2];
  undefined1 auStack_16ea [2];
  short local_16e8 [4];
  long local_16e0;
  long lStack_16d8;
  ushort local_44 [2];
  
  puVar3 = PTR_DAT_04bb3170;
  puVar2 = PTR_DAT_04bb3128;
  puVar1 = PTR_DAT_04bb3120;
  iVar5 = 0;
  do {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
      FUN_00706e58(puVar1);
      __cxa_guard_release(puVar2);
    }
    if (0 < (int)*(uint *)puVar1) {
      uVar7 = 0;
      do {
        if (*(int *)(*(long *)(puVar1 + 8) + uVar7 * 4) == 0) goto LAB_007f6298;
        uVar7 = uVar7 + 1;
      } while (*(uint *)puVar1 != uVar7);
    }
    uVar7 = 0;
LAB_007f6298:
    local_44[0] = 0;
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
      FUN_00706e58(puVar1);
      __cxa_guard_release(puVar2);
    }
    uVar6 = (uint)uVar7;
    if (*(uint *)puVar1 <= uVar6) {
      uVar6 = 0;
    }
    local_44[0] = (ushort)iVar5 |
                  (ushort)(*(int *)(*(long *)(puVar1 + 8) + (long)(int)uVar6 * 4) << 0xb);
    FUN_007ef010(auStack_16ea,local_44);
    FUN_007e4920(local_16e8,auStack_16ea);
    if ((local_16e8[0] != *(short *)puVar3) && (lStack_16d8 != 0 || local_16e0 != 0)) {
      FUN_007e80d0(local_16e8);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 100);
  iVar5 = 0;
  do {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
      FUN_00706e58(puVar1);
      __cxa_guard_release(puVar2);
    }
    if (0 < (int)*(uint *)puVar1) {
      uVar7 = 0;
      do {
        if (*(int *)(*(long *)(puVar1 + 8) + uVar7 * 4) == 1) goto LAB_007f639c;
        uVar7 = uVar7 + 1;
      } while (*(uint *)puVar1 != uVar7);
    }
    uVar7 = 0;
LAB_007f639c:
    local_44[0] = 0;
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
      FUN_00706e58(puVar1);
      __cxa_guard_release(puVar2);
    }
    uVar6 = (uint)uVar7;
    if (*(uint *)puVar1 <= uVar6) {
      uVar6 = 0;
    }
    local_44[0] = (ushort)iVar5 |
                  (ushort)(*(int *)(*(long *)(puVar1 + 8) + (long)(int)uVar6 * 4) << 0xb);
    FUN_007ef010(auStack_16ec,local_44);
    FUN_007e4920(local_16e8,auStack_16ec);
    if ((local_16e8[0] != *(short *)puVar3) && (lStack_16d8 != 0 || local_16e0 != 0)) {
      FUN_007e80d0(local_16e8);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 100);
  if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar5 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar1) {
    uVar7 = 0;
    do {
      if (*(int *)(*(long *)(puVar1 + 8) + uVar7 * 4) == 2) goto LAB_007f647c;
      uVar7 = uVar7 + 1;
    } while (*(uint *)puVar1 != uVar7);
  }
  uVar7 = 0;
LAB_007f647c:
  local_44[0] = 0;
  if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar5 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar6 = (uint)uVar7;
  if (*(uint *)puVar1 <= uVar6) {
    uVar6 = 0;
  }
  local_44[0] = (ushort)(*(int *)(*(long *)(puVar1 + 8) + (long)(int)uVar6 * 4) << 0xb);
  FUN_007ef010(auStack_16ee,local_44);
  FUN_007e4920(local_16e8,auStack_16ee);
  if ((local_16e8[0] != *(short *)puVar3) && (lStack_16d8 != 0 || local_16e0 != 0)) {
    FUN_007e80d0(local_16e8);
  }
  iVar5 = 0;
  do {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
      FUN_00706e58(puVar1);
      __cxa_guard_release(puVar2);
    }
    if (0 < (int)*(uint *)puVar1) {
      uVar7 = 0;
      do {
        if (*(int *)(*(long *)(puVar1 + 8) + uVar7 * 4) == 3) goto LAB_007f653c;
        uVar7 = uVar7 + 1;
      } while (*(uint *)puVar1 != uVar7);
    }
    uVar7 = 0;
LAB_007f653c:
    local_44[0] = 0;
    if ((*puVar2 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(puVar2);
      if (iVar4 != 0) {
        FUN_00706e58(puVar1);
        __cxa_guard_release(puVar2);
      }
    }
    uVar6 = (uint)uVar7;
    if (*(uint *)puVar1 <= uVar6) {
      uVar6 = 0;
    }
    local_44[0] = (ushort)iVar5 |
                  (ushort)(*(int *)(*(long *)(puVar1 + 8) + (long)(int)uVar6 * 4) << 0xb);
    FUN_007ef010(auStack_16f0,local_44);
    FUN_007e4920(local_16e8,auStack_16f0);
    if ((local_16e8[0] != *(short *)puVar3) && (lStack_16d8 != 0 || local_16e0 != 0)) {
      FUN_007e80d0(local_16e8);
      FUN_007e64e0(local_16e8,&DAT_04ccacd8);
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 8) {
      FUN_007f6680();
      FUN_007f2e80();
      return;
    }
  } while( true );
}

