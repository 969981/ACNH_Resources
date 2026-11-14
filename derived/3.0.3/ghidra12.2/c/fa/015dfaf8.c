
bool FUN_015dfaf8(undefined8 *param_1,long param_2)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  int local_280 [20];
  undefined1 auStack_230 [138];
  short local_1a6;
  undefined *local_1a0;
  char *pcStack_198;
  undefined1 auStack_150 [138];
  short local_c6;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined4 uStack_ac;
  Buffer aBStack_a8 [72];
  
  movie::Buffer::Buffer(aBStack_a8);
  pMVar1 = (MutexType *)(param_1 + 0x31);
  nn::os::LockMutex(pMVar1);
  iVar7 = *(int *)(param_1 + 0x2c);
  if (iVar7 < 1) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x2b) <= *(int *)((long)param_1 + 0x15c)) {
      iVar3 = *(int *)(param_1 + 0x2b);
    }
    puVar2 = param_1 + 2 + (ulong)*(uint *)(param_1 + 0x28) * 7;
    if (1 < *(uint *)(param_1 + 0x28)) {
      puVar2 = param_1 + 2;
    }
    if (puVar2[4] == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = (ulong)(uint)(*(int *)(puVar2 + 1) - *(int *)(puVar2[4] + 0x10));
    }
    puVar10 = (undefined4 *)(param_1[0x2a] + (long)(*(int *)((long)param_1 + 0x15c) - iVar3) * 0x10)
    ;
    lVar14 = 0;
    if (puVar2[3] != 0) {
      lVar14 = (**(code **)PTR_DAT_04bb2cd8)();
    }
    movie::Buffer::SetDataAndCapacity(aBStack_a8,lVar14 + uVar19);
    movie::Buffer::SetRange((int)aBStack_a8,0);
    (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,*puVar10,aBStack_a8);
    (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,*puVar10);
    param_1[0x35] = *(undefined8 *)(puVar10 + 2);
    if (0 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      iVar3 = 0;
      if (*(int *)((long)param_1 + 0x15c) + 1 < *(int *)(param_1 + 0x2b)) {
        iVar3 = *(int *)((long)param_1 + 0x15c) + 1;
      }
      *(int *)((long)param_1 + 0x15c) = iVar3;
    }
    nn::os::UnlockMutex(pMVar1);
    puVar13 = PTR_DAT_04bbd510;
    puVar12 = PTR_DAT_04bb3508;
    puVar11 = PTR_DAT_04bb2020;
    uVar4 = *(undefined4 *)(param_1 + 1);
    uVar5 = *(undefined4 *)((long)param_1 + 0xc);
    local_c0 = 0;
    local_b8 = 0;
    uStack_ac = 1;
    lVar17 = *(long *)PTR_DAT_04bbd510;
    local_1a0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_198 = "MovieVideoRenderer";
    local_b4 = uVar4;
    local_b0 = uVar5;
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar14 == 0) {
      local_280[0] = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_280[0] = (int)lVar14 + -1;
    }
    lVar14 = FUN_03948e10(lVar17,param_2,lVar17 + (long)local_280[0] * 0x290 + 0x10,&local_1a0,1,1,
                          uVar4,uVar5,1,0,1,0,1,0,0,0);
    local_1a0 = puVar11 + 0x10;
    pcStack_198 = "MovieVideoRenderer";
    lVar17 = *(long *)puVar13;
    iVar3 = *(int *)(param_1 + 1);
    iVar6 = *(int *)((long)param_1 + 0xc);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
    if (lVar15 == 0) {
      local_280[0] = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_280[0] = (int)lVar15 + -1;
    }
    lVar17 = FUN_03948e10(lVar17,param_2,lVar17 + (long)local_280[0] * 0x290 + 0x10,&local_1a0,10,1,
                          iVar3 >> 1,iVar6 >> 1,1,0,1,0,1,0,0,0);
    puVar11 = PTR_DAT_04bbd560;
    uVar18 = *(undefined8 *)(param_2 + 0xb8);
    puVar2 = param_1 + 0x10 + (ulong)*(uint *)(param_1 + 0x28) * 6;
    if (1 < *(uint *)(param_1 + 0x28)) {
      puVar2 = param_1 + 0x10;
    }
    uVar16 = (**(code **)PTR_DAT_04bbd560)(puVar2);
    puVar13 = PTR_DAT_04bc1010;
    puVar12 = PTR_DAT_04bbd7d8;
    lVar15 = *(long *)PTR_DAT_04bc1010;
    uVar9 = *(int *)(lVar14 + 0x50) - (uint)*(ushort *)(lVar15 + 0x3da);
    if (*(uint *)(lVar15 + 0x368) <= uVar9) {
      uVar9 = 0;
    }
    (**(code **)PTR_DAT_04bbd7d8)
              (uVar18,uVar16,
               *(undefined8 *)(*(long *)(lVar15 + 0x370) + (long)(int)uVar9 * 0x20 + 0x18),0,
               &local_c0,0);
    local_b4 = *(int *)(param_1 + 1);
    local_b0 = *(int *)((long)param_1 + 0xc);
    uVar18 = *(undefined8 *)(param_2 + 0xb8);
    if (local_b4 < 0) {
      local_b4 = local_b4 + 1;
    }
    if (local_b0 < 0) {
      local_b0 = local_b0 + 1;
    }
    local_b4 = local_b4 >> 1;
    local_b0 = local_b0 >> 1;
    puVar2 = param_1 + 0x1c + (ulong)*(uint *)(param_1 + 0x28) * 6;
    if (1 < *(uint *)(param_1 + 0x28)) {
      puVar2 = param_1 + 0x1c;
    }
    uVar16 = (**(code **)puVar11)(puVar2);
    lVar15 = *(long *)puVar13;
    uVar9 = *(int *)(lVar17 + 0x50) - (uint)*(ushort *)(lVar15 + 0x3da);
    if (*(uint *)(lVar15 + 0x368) <= uVar9) {
      uVar9 = 0;
    }
    (**(code **)puVar12)
              (uVar18,uVar16,
               *(undefined8 *)(*(long *)(lVar15 + 0x370) + (long)(int)uVar9 * 0x20 + 0x18),0,
               &local_c0,0);
    FUN_0390d120(&local_1a0,lVar14);
    FUN_0390d120(local_280,lVar17);
    FUN_0394b240(param_2,&local_1a0,local_280,1);
    puVar11 = PTR_DAT_04bbd510;
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,lVar14);
    FUN_039499cc(*(undefined8 *)puVar11,lVar17);
    *(int *)(param_1 + 0x28) = 1 - *(int *)(param_1 + 0x28);
    if (local_1a6 != -1) {
      lVar14 = *(long *)puVar13;
      nn::os::LockMutex((MutexType *)(lVar14 + 0x580));
      uVar9 = (int)local_1a6 - (uint)*(ushort *)(lVar14 + 0x5c0);
      if (*(uint *)(lVar14 + 0x5a0) <= uVar9) {
        uVar9 = 0;
      }
      lVar17 = *(long *)(lVar14 + 0x5a8) + (long)(int)uVar9 * 0x80;
      sVar8 = *(short *)(lVar17 + 0x76) + -1;
      *(short *)(lVar17 + 0x76) = sVar8;
      if (sVar8 == 0) {
        *(short *)(lVar14 + 0x5c4) = *(short *)(lVar14 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar14 + 0x580));
      local_1a6 = -1;
    }
    FUN_038fd0e0(auStack_230);
    if (local_c6 != -1) {
      lVar14 = *(long *)puVar13;
      nn::os::LockMutex((MutexType *)(lVar14 + 0x580));
      uVar9 = (int)local_c6 - (uint)*(ushort *)(lVar14 + 0x5c0);
      if (*(uint *)(lVar14 + 0x5a0) <= uVar9) {
        uVar9 = 0;
      }
      lVar17 = *(long *)(lVar14 + 0x5a8) + (long)(int)uVar9 * 0x80;
      sVar8 = *(short *)(lVar17 + 0x76) + -1;
      *(short *)(lVar17 + 0x76) = sVar8;
      if (sVar8 == 0) {
        *(short *)(lVar14 + 0x5c4) = *(short *)(lVar14 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar14 + 0x580));
      local_c6 = -1;
    }
    FUN_038fd0e0(auStack_150);
  }
  movie::Buffer::~Buffer(aBStack_a8);
  return 0 < iVar7;
}

