
void FUN_011bd9d0(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *local_48;
  undefined **local_40;
  undefined **ppuStack_38;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_40 = (undefined **)CONCAT44(local_40._4_4_,3);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      FUN_011a1b10();
      if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x77130016) ||
         (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x2a789248)) {
        local_48 = PTR_DAT_04bbbab0 + 0x10;
        FUN_011b8490(&local_48);
        local_40 = &PTR_FUN_049863b0;
        ppuStack_38 = &local_48;
        FUN_011bc6f0(&local_40);
      }
      else {
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
      }
      FUN_011a2cac(param_1 + 0x10);
    }
  }
  FUN_0118ced0(param_1 + 0x8c0);
  return;
}

