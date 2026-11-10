
bool FUN_00333d7c(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x44) <= param_2) {
    return false;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x58) + (long)param_2 * 8);
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      return false;
    }
    lVar2 = *(long *)(param_1 + 0x50) + (long)param_2 * 0x38;
    cVar1 = *(char *)(lVar2 + 0x29);
  }
  else {
    cVar1 = *(char *)(lVar2 + 0x29);
  }
  if (cVar1 == '\0') {
    return *(char *)(lVar2 + 0x2a) != '\0';
  }
  return true;
}

