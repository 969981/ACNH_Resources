
void FUN_00260e40(long param_1,long param_2,byte param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 8);
    if (lVar1 == param_1) {
      return;
    }
  } while (*(long *)(lVar1 + 0x10) != param_2);
  *(byte *)(lVar1 + 0x19) = param_3 & 1;
  return;
}

