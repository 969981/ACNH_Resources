
void FUN_0124c44c(long param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if ((iVar1 == 0x21) ||
     (iVar1 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10)), iVar1 == 0x22)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xe3 | (param_2 & 7) << 2;
  }
  return;
}

