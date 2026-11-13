
void FUN_0124fff0(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if ((param_2 - 1U < 3) && (iVar1 - 0x12U < 6)) {
    *(uint *)(param_1 + 0xc) =
         *(uint *)(param_1 + 0xc) & 0xffffff00 |
         *(uint *)(param_1 + 0xc) & 0x1f | (param_2 * 0x20 + 0xe0U >> 5 & 7) << 5;
    return;
  }
  FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  return;
}

