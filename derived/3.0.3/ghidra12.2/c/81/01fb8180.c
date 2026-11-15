
ulong FUN_01fb8180(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *__s;
  long lVar6;
  long lVar7;
  undefined *local_7b0;
  char *apcStack_7a8 [234];
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  undefined1 auStack_40 [8];
  ushort local_38;
  
  if ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 0) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    return 0;
  }
  FUN_0376bed0(auStack_40,*(undefined8 *)(param_1 + 8));
  if (local_38 < 500) {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    apcStack_7a8[0] = "GiveDrinkDone";
    local_7b0 = puVar2;
    uVar5 = FUN_0376c020(auStack_40,&local_7b0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    apcStack_7a8[0] = "GiveGiftDone";
    local_7b0 = puVar2;
    iVar3 = FUN_0376c020(auStack_40,&local_7b0);
    if (iVar3 < 1) {
      FUN_0252d11c(&local_7b0);
      if ((7 < (byte)local_7b0) || (iVar3 = FUN_026731d0(&local_7b0), 0 < iVar3)) {
        local_7b0 = PTR_DAT_04bbfe60 + 0x10;
        memset(apcStack_7a8,0,0x754);
        uVar4 = nn::os::GetSystemTick();
        local_54 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
        local_50 = (local_54 ^ local_54 >> 0x1e) * 0x6c078965 + 2;
        local_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 3;
        local_48 = (local_4c ^ local_4c >> 0x1e) * 0x6c078965 + 4;
        __s = (void *)FUN_01a451fc(&local_7b0);
        memset(__s,0,0x754);
        FUN_03753ab0(&local_7b0,auStack_40);
        lVar6 = (**(code **)(local_7b0 + 0x20))(&local_7b0);
        lVar7 = 0;
        iVar3 = 0;
        do {
          puVar1 = (uint *)(lVar6 + lVar7);
          lVar7 = lVar7 + 4;
          uVar4 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
          uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
          uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
          uVar4 = uVar4 + (uVar4 >> 8);
          iVar3 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar3;
        } while (lVar7 != 0x754);
        return (ulong)(iVar3 != 0);
      }
    }
  }
  return 0;
}

