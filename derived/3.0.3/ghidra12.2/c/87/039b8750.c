
long FUN_039b8750(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  MutexType *pMVar3;
  undefined *puVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined4 local_490;
  undefined4 local_48c;
  undefined8 local_488;
  undefined8 local_480;
  undefined *local_478;
  undefined1 local_470 [8];
  undefined8 local_468;
  undefined8 local_3c0;
  undefined **local_390;
  undefined8 local_388;
  undefined1 local_380;
  undefined2 local_37f;
  undefined8 local_378;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  char *local_2a8;
  undefined **local_2a0;
  undefined1 *local_298;
  undefined1 auStack_290 [520];
  undefined4 local_88;
  int iStack_84;
  undefined8 local_80;
  byte local_78;
  int local_6c;
  
  puVar8 = PTR_DAT_04bbd7c0;
  if ((*(byte *)(param_1 + 0x1110) & 1) != 0) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x5b) == '\0') {
    lVar13 = 0;
  }
  else {
    uVar14 = 0;
    lVar13 = 0;
    lVar11 = *(long *)PTR_DAT_04bd1630;
    puVar1 = PTR_DAT_04bd1150 + 0x10;
    puVar2 = PTR_DAT_04bd0d18 + 0x10;
    pMVar3 = (MutexType *)(lVar11 + 0xd0);
    puVar4 = PTR_DAT_04bd0f88 + 0x10;
    do {
      local_2a0 = (undefined **)0x0;
      local_80 = 0;
      local_78 = 0;
      local_2a8 = "untitled";
      local_2c8 = 0;
      uStack_2c0 = 0;
      local_88 = 0x200;
      iStack_84 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_478 = puVar2;
      local_2d0 = puVar1;
      local_298 = auStack_290;
      FUN_00347d68(local_470);
      local_468 = *(undefined8 *)(*(long *)puVar8 + 0x48);
      local_388 = 0;
      local_380 = 0;
      local_378 = 0;
      local_470[0] = 2;
      local_37f = 4;
      local_3c0 = *(undefined8 *)(*(long *)puVar8 + 0x40);
      local_478 = puVar4;
      local_390 = &local_2d0;
      local_2a0 = &local_478;
      nn::os::LockMutex(pMVar3);
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar9 == 0) {
        local_6c = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_6c = (int)lVar9 + -1;
      }
      lVar9 = lVar11 + 0x18 + (long)local_6c * 0x30;
      local_490 = *(undefined4 *)(lVar9 + 0x18);
      local_48c = *(undefined4 *)(lVar9 + 0x1c);
      local_488 = *(undefined8 *)(lVar9 + 0x20);
      local_480 = *(undefined8 *)(lVar9 + 0x28);
      uVar10 = FUN_038fea40(&local_2d0,&local_490,0x800,1);
      if ((uVar10 & 1) != 0) {
        lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x18) + uVar14 * 0x38;
        FUN_003a127c(lVar9,local_470,0,*(undefined2 *)(lVar9 + 0x34),1);
        puVar12 = local_2a0[0x17];
        local_80 = (**(code **)PTR_DAT_04bcf108)(puVar12);
        iStack_84 = (**(code **)PTR_DAT_04bcfce8)(puVar12);
        lVar9 = (**(code **)PTR_DAT_04bcfcd0)(puVar12);
        uStack_2b0 = CONCAT44((int)lVar9,(undefined4)uStack_2b0);
        local_78 = local_78 & 0xfe | (lVar9 != 0 || iStack_84 != 0);
        lVar9 = *(long *)PTR_DAT_04bc1010;
        (**(code **)PTR_DAT_04bcf0e8)(puVar12);
        piVar5 = (int *)(lVar9 + 0x644);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar7) {
            *piVar5 = *piVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_78 = local_78 & 0xfb | 2;
      }
      nn::os::UnlockMutex(pMVar3);
      lVar13 = ((uStack_2b0 >> 0x20) + 3 & 0x1fffffffc) + lVar13;
      FUN_038f43d0(&local_478);
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(byte *)(*(long *)(param_1 + 8) + 0x5b));
  }
  return lVar13 + (ulong)*(uint *)(param_1 + 0x1060);
}

