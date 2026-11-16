
void FUN_025b66c0(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined *local_50;
  char *pcStack_48;
  
  puVar4 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "PlayerState";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605980(*(long *)(param_1 + 8),&local_50,param_2 + 1);
  }
  lVar11 = *(long *)PTR_DAT_04bcb7d8;
  nn::os::LockMutex((MutexType *)(lVar11 + 0xd0));
  puVar5 = PTR_DAT_04bcb8b8;
  if (*(long *)PTR_DAT_04bcb8b8 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_00223668(&local_50,*(undefined8 *)PTR_DAT_04bcb8c0);
    if (((int)local_50 == 0) && (iVar8 = FUN_0029b330(*(undefined8 *)puVar5), iVar8 == 3)) {
      uVar9 = FUN_0029becc(*(undefined8 *)puVar5);
    }
    else {
      uVar9 = *(undefined4 *)
               (*(long *)puVar5 + (ulong)*(byte *)(*(long *)puVar5 + 0x162) * 4 + 0x180);
    }
  }
  local_50 = puVar4 + 0x10;
  pcStack_48 = "SessionID";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_50,uVar9);
  }
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0xd0));
  puVar6 = PTR_DAT_04bbaed0;
  puVar5 = PTR_DAT_04bb27d0;
  if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
    lVar11 = *(long *)(param_1 + 8);
    if (lVar11 != 0) {
      lVar10 = -1;
      goto LAB_025b681c;
    }
  }
  else {
    lVar10 = (long)*(int *)(*(long *)PTR_DAT_04bbaed0 + 0x3c);
    lVar11 = *(long *)(param_1 + 8);
    if (lVar11 != 0) {
LAB_025b681c:
      pcStack_48 = "MultiPlaySession";
      local_50 = puVar4 + 0x10;
      FUN_026054d0(lVar11,&local_50,lVar10);
    }
  }
  lVar11 = **(long **)puVar5;
  bVar3 = *(byte *)(lVar11 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar11 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) != 0) {
      bVar7 = *(byte *)(lVar11 + 0x472) == bVar3;
      goto LAB_025b6868;
    }
  }
  bVar7 = true;
LAB_025b6868:
  pcStack_48 = "IsHost";
  if (*(long *)(param_1 + 8) != 0) {
    local_50 = puVar4 + 0x10;
    FUN_026054d0(*(long *)(param_1 + 8),&local_50,bVar7);
    pcStack_48 = "POPID";
    if (*(long *)(param_1 + 8) != 0) {
      puVar2 = (undefined8 *)(*(long *)puVar6 + 0xd8) + (ulong)(uint)(int)*(char *)*param_2 * 6;
      if (7 < (uint)(int)*(char *)*param_2) {
        puVar2 = (undefined8 *)(*(long *)puVar6 + 0xd8);
      }
      local_50 = puVar4 + 0x10;
      FUN_02605660(*(long *)(param_1 + 8),&local_50,*puVar2);
    }
  }
  return;
}

