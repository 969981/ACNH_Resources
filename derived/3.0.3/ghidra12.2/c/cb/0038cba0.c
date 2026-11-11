
bool FUN_0038cba0(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar1 == 0)) {
    return false;
  }
  return *(char *)(lVar1 + 0x110) == '\x01';
}

