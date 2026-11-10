
int FUN_00173d9c(long param_1,long param_2)

{
  long lVar1;
  
  param_2 = *(long *)(param_1 + 0x48) + param_2;
  *(long *)(param_1 + 0x48) = param_2;
  if ((*(ushort *)(param_1 + 0xe2) >> 0xe & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    return -(uint)((lVar1 != -1 && param_2 != lVar1) && (lVar1 == -1 || lVar1 <= param_2));
  }
  return -1;
}

