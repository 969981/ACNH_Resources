
undefined1  [16] FUN_004771b0(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  uint local_6c;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 10));
  FUN_0043bd90(&local_68,*param_2,param_2[1]);
  lVar7 = param_1[9];
  uVar4 = FUN_0047c5a0(param_1,&local_68);
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == uVar4) {
    uVar6 = uVar4;
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar4) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
      uVar6 = *(uint *)(param_1 + 1);
    }
    puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x10);
    *puVar1 = local_68;
    local_68 = 0;
    *(int *)(puVar1 + 1) = (int)lVar7;
    *(uint *)(param_1 + 1) = uVar6 + 1;
  }
  lVar7 = *param_1;
  FUN_0043be10(&local_68);
  local_6c = *(uint *)(lVar7 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8);
  uVar3 = (ulong)local_6c | param_3 << 0x20;
  if (uVar5 == uVar4) {
    uVar5 = *(uint *)(param_1 + 9);
    if (uVar5 == (*(uint *)((long)param_1 + 0x4c) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 8,8);
      uVar5 = *(uint *)(param_1 + 9);
    }
    FUN_0043bd90(param_1[8] + (long)(int)uVar5 * 8,*param_2,param_2[1]);
    *(uint *)(param_1 + 9) = uVar5 + 1;
    lVar7 = FUN_00429910(param_2,0x3c,0);
    uVar10 = uVar3;
    if (lVar7 != 0) {
      uVar9 = *param_2;
      FUN_0043bd90(&local_68,uVar9,lVar7);
      lVar11 = param_1[9];
      uVar4 = FUN_0047c5a0(param_1,&local_68);
      uVar5 = *(uint *)(param_1 + 1);
      if (uVar5 == uVar4) {
        uVar6 = uVar4;
        if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar4) {
          FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
          uVar6 = *(uint *)(param_1 + 1);
        }
        puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x10);
        *puVar1 = local_68;
        local_68 = 0;
        *(int *)(puVar1 + 1) = (int)lVar11;
        *(uint *)(param_1 + 1) = uVar6 + 1;
      }
      lVar11 = *param_1;
      FUN_0043be10(&local_68);
      uVar6 = *(uint *)(lVar11 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8);
      if (uVar5 == uVar4) {
        uVar5 = *(uint *)(param_1 + 9);
        if (uVar5 == (*(uint *)((long)param_1 + 0x4c) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,param_1 + 8,8);
          uVar5 = *(uint *)(param_1 + 9);
        }
        FUN_0043bd90(param_1[8] + (long)(int)uVar5 * 8,uVar9,lVar7);
        *(uint *)(param_1 + 9) = uVar5 + 1;
      }
      plVar2 = param_1 + 4;
      uVar10 = param_3 << 0x20 | (ulong)uVar6;
      uVar5 = FUN_0047c260(plVar2,&local_6c);
      if (*(uint *)(param_1 + 5) == uVar5) {
        if ((*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) == uVar5) {
          FUN_00426990(PTR_DAT_048607b8,plVar2,8);
          uVar5 = *(uint *)(param_1 + 5);
        }
        puVar8 = (uint *)(param_1[4] + (long)(int)uVar5 * 8);
        *puVar8 = local_6c;
        puVar8[1] = uVar6;
        *(uint *)(param_1 + 5) = uVar5 + 1;
      }
      else {
        *(uint *)(*plVar2 + ((long)((ulong)uVar5 << 0x20) >> 0x1d) + 4) = uVar6;
      }
    }
  }
  else {
    puVar8 = &local_6c;
    lVar7 = FUN_0047c1e0(param_1 + 4,&local_6c);
    if (lVar7 != 0) {
      puVar8 = (uint *)(param_1[4] + (long)*(int *)(lVar7 + 4) * 8 + 4);
    }
    uVar10 = param_3 << 0x20 | (ulong)*puVar8;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 10));
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = uVar3;
  return auVar12;
}

