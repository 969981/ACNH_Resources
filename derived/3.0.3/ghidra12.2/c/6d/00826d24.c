
void FUN_00826d24(long param_1)

{
  int iVar1;
  undefined **local_58 [4];
  int local_34;
  undefined *local_30;
  char *pcStack_28;
  
  FUN_00826090();
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "sys_end_multi_villagers";
  FUN_025ffac8(local_58,&local_30,param_1 + 0x158);
  local_58[0] = &PTR_FUN_04a86598;
  if (*(char *)(DAT_05554928 + 0xb1) == '\0') {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,1);
    *(ulong *)(DAT_05554928 + 0xb8) = *(ulong *)(DAT_05554928 + 0xb8) & 0xfffffffffffffffd;
  }
  FUN_025df3b0(local_58,&local_30);
  local_58[0] = &PTR_FUN_04a86598;
  iVar1 = FUN_025df5d8(local_58);
  if (iVar1 != -1) {
    iVar1 = (*(code *)local_58[0][4])(local_58);
    local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar1);
    if (iVar1 < 0xd) goto LAB_00826df4;
  }
  if (local_34 == 0) {
    local_34 = 1;
  }
LAB_00826df4:
  FUN_02601530(local_58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  local_58[0] = (undefined **)((ulong)local_58[0] & 0xffffffff00000000);
  FUN_03ebb160(param_1 + 8,0);
  return;
}

