
undefined8 FUN_0043a530(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  uint __c;
  
  __c = (uint)*param_2;
  if (*param_2 == 0) {
    return 1;
  }
  do {
    param_2 = param_2 + 1;
    iVar1 = tolower((uint)*param_1);
    iVar2 = tolower(__c);
    if (iVar1 != iVar2) {
      return 0;
    }
    __c = (uint)*param_2;
    param_1 = param_1 + 1;
  } while (__c != 0);
  return 1;
}

