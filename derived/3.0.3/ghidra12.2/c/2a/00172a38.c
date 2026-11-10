
void FUN_00172a38(long param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  iVar1 = FUN_00172cdc(*(undefined8 *)(param_1 + 0x70),param_1);
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}

