
void FUN_01829590(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined4 in_w9;
  undefined4 local_4;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    in_w9 = *(undefined4 *)(lVar2 + 0x230);
  }
  local_4 = *(undefined4 *)PTR_DAT_04bb3238;
  if (lVar2 != 0) {
    local_4 = in_w9;
  }
  if (*(char *)(param_1 + 0x4c0) == '\0') {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_011e27b0(param_1 + 0x4c4,&local_4);
  }
  *(byte *)(param_1 + 0x3e0) = *(byte *)(param_1 + 0x3e0) & 0xfe | bVar1 & 1;
  return;
}

