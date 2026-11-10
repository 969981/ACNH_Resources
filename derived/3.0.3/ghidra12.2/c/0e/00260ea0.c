
void FUN_00260ea0(long param_1,char param_2,byte param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 8);
    if (lVar1 == param_1) {
      return;
    }
  } while (*(char *)(lVar1 + 0x18) != param_2);
  *(byte *)(lVar1 + 0x19) = param_3 & 1;
  return;
}

