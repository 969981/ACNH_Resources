
uint FUN_03efd02c(long param_1)

{
  uint uVar1;
  long *local_8;
  
  local_8 = (long *)0x0;
  uVar1 = FUN_03efced0(param_1,&local_8);
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    *(long *)(*local_8 + 0x58) = *(long *)(param_1 + 0x58);
  }
  return uVar1 & 1;
}

