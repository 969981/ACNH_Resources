
void FUN_00322d30(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x80)) {
    if (*(char *)(*(long *)(*(long *)(lVar1 + 0x240) + 0x10) + 0x794) == '\x01') {
      FUN_003315e0(lVar1 + 0xa8,*(undefined4 *)(param_1 + 0x3c));
      FUN_0031dc44(lVar1);
    }
  }
  return;
}

