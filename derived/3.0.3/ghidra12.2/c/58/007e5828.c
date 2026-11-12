
void FUN_007e5828(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  uint local_24;
  
  FUN_02582a24(param_2);
  uVar1 = FUN_02582d8c(param_2,1);
  if (((uVar1 < 8) &&
      (lVar2 = *(long *)PTR_DAT_04bb4fb8, *(char *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')
      ) && (*(int *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d0) == 0)) {
    local_24 = (uint)*(byte *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d5);
  }
  else {
    local_24 = 0xffffffff;
  }
  FUN_007e5260(param_1,&local_24);
  return;
}

