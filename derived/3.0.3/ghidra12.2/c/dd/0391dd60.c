
void FUN_0391dd60(undefined4 param_1,long param_2,undefined8 param_3,long param_4,undefined4 param_5
                 ,uint param_6,undefined4 param_7,uint param_8,uint param_9)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined *local_168;
  char *pcStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined7 uStack_118;
  undefined1 local_111;
  undefined7 uStack_110;
  undefined1 auStack_108 [64];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_94;
  undefined1 local_92;
  uint local_84;
  byte local_80;
  short local_7e;
  
  FUN_0390cee0(&local_158);
  local_80 = local_80 & 0xdf | *(byte *)(param_4 + 0xd8) & 0x20;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_84,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      local_84 = local_84 & 0xffffffbf | 0x40;
    }
  } while (cVar2 != '\0');
  local_92 = 0;
  local_94 = 0x101;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_84,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      local_84 = local_84 & 0xfffffffb | 4;
    }
  } while (cVar2 != '\0');
  uVar6 = *(ushort *)(param_4 + 0x30) >> (ulong)(param_6 & 0x1f);
  uVar1 = *(undefined2 *)(param_2 + 0x178);
  lVar11 = *(long *)PTR_DAT_04bbd510;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  local_168 = PTR_DAT_04bb2020 + 0x10;
  pcStack_160 = "cubemap_gaussian";
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar9 == 0) {
    iVar8 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar8 = (int)lVar9 + -1;
  }
  puVar10 = (undefined4 *)
            FUN_03948e10(lVar11,param_3,lVar11 + (long)iVar8 * 0x290 + 0x10,&local_168,uVar1,8,uVar6
                         ,uVar6,1,0,1,0,1,0,0,0);
  local_158 = *puVar10;
  uStack_154 = puVar10[1];
  local_128 = *(undefined8 *)(puVar10 + 0xc);
  local_150 = *(undefined8 *)(puVar10 + 2);
  uStack_148 = *(undefined8 *)(puVar10 + 4);
  local_140 = puVar10[6];
  uStack_13c = puVar10[7];
  local_138 = *(undefined8 *)(puVar10 + 8);
  uStack_130 = *(undefined8 *)(puVar10 + 10);
  local_120 = *(undefined8 *)(puVar10 + 0xe);
  uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0x47) >> 8);
  uStack_118 = (undefined7)*(undefined8 *)(puVar10 + 0x10);
  local_111 = (undefined1)((ulong)*(undefined8 *)(puVar10 + 0x10) >> 0x38);
  FUN_038fd1e0(auStack_108);
  FUN_038fd2f0(auStack_108,puVar10 + 0x14);
  local_c8 = *(undefined8 *)(puVar10 + 0x24);
  local_c0 = puVar10[0x26];
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_84,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      local_84 = local_84 | 1;
    }
  } while (cVar2 != '\0');
  FUN_0391d7d0(param_1,param_2,param_3,param_4,&local_158,param_5,param_6,param_7,param_8);
  puVar7 = PTR_DAT_04bbd510;
  FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar10);
  if (1 < param_9) {
    lVar11 = *(long *)puVar7;
    uVar6 = *(ushort *)(param_2 + 0x30) >> (ulong)(param_8 & 0x1f);
    uVar1 = *(undefined2 *)(param_2 + 0x178);
    local_168 = PTR_DAT_04bb2020 + 0x10;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    pcStack_160 = "cubemap_gaussian";
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar9 == 0) {
      iVar8 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar8 = (int)lVar9 + -1;
    }
    puVar10 = (undefined4 *)
              FUN_03948e10(lVar11,param_3,lVar11 + (long)iVar8 * 0x290 + 0x10,&local_168,uVar1,8,
                           uVar6,uVar6,1,0,1,0,1,0,0,0);
    local_158 = *puVar10;
    uStack_154 = puVar10[1];
    local_128 = *(undefined8 *)(puVar10 + 0xc);
    local_150 = *(undefined8 *)(puVar10 + 2);
    uStack_148 = *(undefined8 *)(puVar10 + 4);
    local_140 = puVar10[6];
    uStack_13c = puVar10[7];
    local_138 = *(undefined8 *)(puVar10 + 8);
    uStack_130 = *(undefined8 *)(puVar10 + 10);
    local_120 = *(undefined8 *)(puVar10 + 0xe);
    uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0x47) >> 8);
    uStack_118 = (undefined7)*(undefined8 *)(puVar10 + 0x10);
    local_111 = (undefined1)((ulong)*(undefined8 *)(puVar10 + 0x10) >> 0x38);
    FUN_038fd1e0(auStack_108);
    FUN_038fd2f0(auStack_108,puVar10 + 0x14);
    local_c8 = *(undefined8 *)(puVar10 + 0x24);
    local_c0 = puVar10[0x26];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(&local_84,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        local_84 = local_84 | 1;
      }
    } while (cVar2 != '\0');
    iVar8 = param_9 - 1;
    do {
      FUN_0391d7d0(param_1,param_2,param_3,param_2,&local_158,param_7,param_8,param_7,param_8);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar10);
  }
  if (local_7e != -1) {
    lVar11 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar11 + 0x580));
    uVar5 = (int)local_7e - (uint)*(ushort *)(lVar11 + 0x5c0);
    if (*(uint *)(lVar11 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar9 = *(long *)(lVar11 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar9 + 0x76) + -1;
    *(short *)(lVar9 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar11 + 0x5c4) = *(short *)(lVar11 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar11 + 0x580));
    local_7e = -1;
  }
  FUN_038fd0e0(auStack_108);
  return;
}

