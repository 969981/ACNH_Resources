
undefined8 FUN_03578aa4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  local_14[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  uVar5 = FUN_02669430(local_14);
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar5 & 1) != 0) {
    param_1 = param_1 + 0x1f8;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "MakeVillagePlayerFlag";
    local_40 = puVar1;
    uVar6 = FUN_0274bce0(param_1,&local_40);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    pcStack_38 = "ImmQ_SetBridge";
    local_40 = puVar1;
    uVar5 = FUN_0273f0a0(&local_40);
    lVar3 = DAT_055588d0;
    if (((uVar5 & 1) == 0) && (DAT_055588d0 != 0)) {
      local_40 = puVar2 + 0x10;
      pcStack_38 = "ImmQFirstExplain";
      iVar4 = FUN_0274bce0(param_1,&local_40);
      if (iVar4 != 0) {
        local_40 = (undefined *)0x1c2b;
        FUN_0277d4ac(&local_40);
        uVar5 = FUN_0261eeb8(lVar3,&local_40,param_1);
        if ((uVar5 & 1) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

