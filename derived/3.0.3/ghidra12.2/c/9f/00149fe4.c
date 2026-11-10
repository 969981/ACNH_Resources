
void FUN_00149fe4(long param_1,byte param_2)

{
  long lVar1;
  
  if ((param_1 != 0) &&
     ((lVar1 = *(long *)(param_1 + 0xe0), lVar1 != 0 ||
      (lVar1 = *(long *)(param_1 + 0xd8), lVar1 != 0)))) {
    *(byte *)(lVar1 + 0x1e0) = param_2 & 1;
  }
  return;
}

