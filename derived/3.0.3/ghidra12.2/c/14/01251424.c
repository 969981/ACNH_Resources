
void FUN_01251424(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0x2d) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe | ~param_2 & 1;
  }
  return;
}

