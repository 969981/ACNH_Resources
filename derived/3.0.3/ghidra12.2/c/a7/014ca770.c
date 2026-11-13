
uint FUN_014ca770(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *local_30;
  char *pcStack_28;
  
  if (*(int *)(param_1 + 0xb58) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xa2c) >> 3 & 1) != 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "EnableDiyRemake";
    iVar1 = FUN_0274bce0(param_1 + 0x5d0,&local_30);
    if ((0 < iVar1) && (*(int *)(param_1 + 0xb58) != 0)) {
      uVar2 = FUN_014ecf14(param_1 + 0xb40,param_1 + 0x5d0);
      goto LAB_014ca7e0;
    }
  }
  uVar2 = 0;
LAB_014ca7e0:
  return uVar2 & 1;
}

