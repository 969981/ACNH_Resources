
void FUN_012291bc(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *local_38;
  char *pcStack_30;
  byte local_28 [4];
  undefined4 local_24;
  
  bVar1 = FUN_011e36b0(param_2,param_3,0);
  if ((((*param_2 < 8) && (uVar2 = FUN_02582d8c(param_2,1), uVar2 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) {
    local_28[0] = *param_2;
    local_38 = PTR_DAT_04bb2020 + 0x10;
    pcStack_30 = "HitStoneCount";
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
    local_24 = FUN_02582fe0(local_28);
    FUN_021294b0(&local_38,1,&local_24);
  }
  if (7 < bVar1) {
    local_38 = PTR_DAT_04bb2020 + 0x10;
    pcStack_30 = "StrikeRock8Times";
    FUN_0279a9f0(param_2,&local_38,1);
  }
  return;
}

