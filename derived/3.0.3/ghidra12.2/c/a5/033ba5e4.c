
void FUN_033ba5e4(long param_1,uint param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x50) != -1 && param_2 != 0xffffffff) &&
     (uVar1 = *(uint *)(param_1 + 0x50), uVar1 == param_2)) {
    if (0x13 < uVar1) {
      uVar1 = 0xffffffff;
    }
    if (uVar1 != 0xffffffff) {
      FUN_033ba674(param_1);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_03ebb160(param_1 + 8,0);
      return;
    }
  }
  return;
}

