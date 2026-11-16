
void FUN_02640130(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    DAT_0555a030 = DAT_0555a030 + 1;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = param_2;
  for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
    FUN_02640130(lVar1,param_2);
  }
  return;
}

