
void FUN_01ba83f4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = param_2;
  lVar2 = DAT_0533ec08;
  lVar1 = DAT_0533ec08 + 8;
  *(long *)(DAT_0533ec08 + 0xc0) = param_2;
  *(long *)(lVar2 + 200) = param_2;
  *(long *)(param_2 + 0x10) = lVar1;
  *(long **)(param_2 + 0x18) = param_1;
  if (*(int *)(lVar2 + 0x50) == 0) {
    FUN_03ebb160(lVar2 + 0x48,8);
    return;
  }
  return;
}

