
undefined4 FUN_0021f84c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_0410d274,0x10);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_0410d274,0x10);
  uVar2 = 6;
  if (iVar1 != 0) {
    iVar1 = memcmp((void *)(param_1 + 0xc),&DAT_0410d274,0xc);
    uVar2 = 6;
    if (iVar1 != 0) {
      uVar2 = 0x12;
    }
  }
  return uVar2;
}

