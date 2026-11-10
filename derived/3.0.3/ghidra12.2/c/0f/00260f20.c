
bool FUN_00260f20(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 8);
    if (lVar1 == param_1) {
      return false;
    }
  } while (*(long *)(lVar1 + 0x10) != param_2);
  return *(char *)(lVar1 + 0x19) != '\0';
}

