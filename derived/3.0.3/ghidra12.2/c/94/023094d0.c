
void FUN_023094d0(char *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *local_40;
  char *pcStack_38;
  byte local_18 [4];
  undefined4 local_14;
  
  if (*param_1 != '\0') {
    pcVar1 = param_1 + 1;
    FUN_01224344(pcVar1);
    local_18[0] = param_1[1];
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
    pcStack_38 = "WishStarCount";
    local_40 = puVar2;
    local_14 = FUN_02582fe0(local_18);
    FUN_021294b0(&local_40,1,&local_14);
    pcStack_38 = "PrayShootingStar";
    local_40 = puVar2;
    FUN_0279a9f0(pcVar1,&local_40,1);
    if (*param_1 != '\0') {
      pcStack_38 = "PV_WishShootingStar";
      local_40 = puVar2;
      FUN_01b5c520(&local_40,1,pcVar1);
    }
  }
  return;
}

