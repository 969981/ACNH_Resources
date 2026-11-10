
undefined2 FUN_001a1094(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_001a0e60(param_1 + 8);
  if (*(long *)(lVar1 + 0x10) == 0) {
    return 0;
  }
  lVar1 = FUN_001a0e60(param_1 + 8);
  return *(undefined2 *)(*(long *)(lVar1 + 8) + 0x28);
}

