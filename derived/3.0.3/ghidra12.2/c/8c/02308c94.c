
void FUN_02308c94(char *param_1)

{
  undefined *puVar1;
  undefined *local_40;
  char *pcStack_38;
  byte local_18 [4];
  undefined4 local_14;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*param_1 != '\0') {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "RiverEditCount";
    local_18[0] = param_1[1];
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
    local_14 = FUN_02582fe0(local_18);
    FUN_021294b0(&local_40,1,&local_14);
  }
  FUN_0279f1f4(param_1 + 1,1);
  if (*param_1 != '\0') {
    local_40 = puVar1 + 0x10;
    pcStack_38 = "PV_ConstructRiver";
    FUN_01b5c520(&local_40,1,param_1 + 1);
  }
  return;
}

