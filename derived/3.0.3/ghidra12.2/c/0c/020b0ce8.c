
void FUN_020b0ce8(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  undefined *local_30;
  char *pcStack_28;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,0xe);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0xe & 1) != 0) {
      FUN_01e27720(param_1 + 0xda0);
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "SeasonEventIndoorSceneChangeUpdate";
  local_30 = puVar1;
  iVar4 = FUN_02743000(&local_30);
  if (iVar4 != 0) {
    pcStack_28 = "SeasonEventIndoorUpdateHour";
    local_30 = puVar1;
    FUN_02743234(&local_30,0);
    pcStack_28 = "SeasonEventIndoorUpdateMinute";
    local_30 = puVar1;
    FUN_02743234(&local_30,0);
    pcStack_28 = "SeasonEventIndoorSceneChangeUpdate";
    local_30 = puVar1;
    FUN_02743234(&local_30,0);
  }
  uVar5 = FUN_0290d828();
  if (((uVar5 & 1) == 0) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,1);
    uVar5 = FUN_021b92e0(&DAT_053fe348,&local_30,1);
    if ((uVar5 & 1) == 0) {
      local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
      uVar5 = FUN_021b92e0(&DAT_053fe348,&local_30,1);
      if ((uVar5 & 1) == 0) {
        local_30 = (undefined *)CONCAT44(local_30._4_4_,3);
        FUN_021b92e0(&DAT_053fe348,&local_30,1);
      }
    }
  }
  FUN_021bb190(&DAT_053fe348);
  FUN_021bd940(&DAT_053fe348);
  return;
}

