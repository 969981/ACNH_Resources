
undefined4 FUN_002c0fbc(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar2 = FUN_002c3aa4();
    uVar1 = *(undefined4 *)(lVar2 + 0x28);
  }
  return uVar1;
}

