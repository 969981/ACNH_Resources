
void FUN_011a19f0(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_48;
  undefined **local_40;
  undefined **ppuStack_38;
  
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  ppuStack_38 = (undefined **)0x40b55e1;
  local_40 = ppuVar1;
  FUN_0273f3c4(&local_40,1);
  ppuStack_38 = (undefined **)0x40d47bd;
  local_40 = ppuVar1;
  FUN_0273f3c4(&local_40,1);
  ppuStack_38 = (undefined **)0x40bfcce;
  local_40 = ppuVar1;
  uVar3 = FUN_0273f0a0(&local_40);
  if ((uVar3 & 1) == 0) {
    ppuStack_38 = (undefined **)0x40f3fac;
    local_40 = ppuVar1;
    FUN_0273f3c4(&local_40,1);
  }
  FUN_011a1b10();
  puVar2 = PTR_DAT_04bb5c90;
  lVar4 = *(long *)PTR_DAT_04bb5c90;
  if (*(char *)(lVar4 + 0x9c8) != '\0') {
    FUN_009392c8(lVar4 + 0x928);
  }
  FUN_011b71a0(lVar4 + 0x920);
  FUN_011a2cac(*(long *)puVar2 + 0x10);
  local_48 = PTR_DAT_04bbbab0 + 0x10;
  FUN_011b8490(&local_48);
  local_40 = &PTR_FUN_049863b0;
  ppuStack_38 = &local_48;
  FUN_011bc6f0(&local_40);
  local_40 = &PTR_LAB_049863d8;
  ppuStack_38 = &local_48;
  FUN_011bc6f0(&local_40);
  FUN_011b7d14(&local_48);
  FUN_011b7e44(&local_48);
  FUN_011beacc();
  return;
}

