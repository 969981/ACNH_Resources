
byte FUN_01251468(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  byte local_38 [4];
  uint local_34;
  undefined *local_30;
  char *pcStack_28;
  
  iVar1 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0x2e) {
    local_38[0] = *param_2;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    uVar2 = FUN_02582fe0(local_38);
    if (uVar2 != 0xffffffff) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "TodayFortune";
      local_34 = uVar2;
      iVar1 = FUN_0274ce10(&local_34,&local_30);
      if (iVar1 != 2) {
        return *(byte *)(param_1 + 0xc) >> (ulong)(uVar2 & 0x1f) & 1;
      }
    }
  }
  return 0;
}

