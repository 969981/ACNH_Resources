
undefined8 FUN_035789b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  local_14[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  uVar4 = FUN_02669430(local_14);
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar4 & 1) != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "MakeVillagePlayerFlag";
    local_40 = puVar1;
    uVar5 = FUN_0274bce0(param_1 + 0x1f8,&local_40);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    pcStack_38 = "RcoBuildCampsiteComplete";
    local_40 = puVar1;
    uVar4 = FUN_0273f0a0(&local_40);
    lVar3 = DAT_055588d0;
    if (((uVar4 & 1) == 0) && (DAT_055588d0 != 0)) {
      local_40 = puVar2 + 0x10;
      pcStack_38 = "RcoBuildCampsiteOngoing";
      uVar4 = FUN_0273f0a0(&local_40);
      if ((uVar4 & 1) != 0) {
        local_40 = (undefined *)0x142e;
        FUN_0277d4ac(&local_40);
        uVar4 = FUN_0261eeb8(lVar3,&local_40,param_1 + 0x1f8);
        if ((uVar4 & 1) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

