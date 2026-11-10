
bool FUN_00291e30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar1 == param_1 + 8) {
      return false;
    }
    if (*(long *)(lVar1 + 0x20) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  return *(char *)(lVar1 + 0x2e) != '\0';
}

