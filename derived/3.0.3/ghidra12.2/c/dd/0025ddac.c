
void FUN_0025ddac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x48) = 1;
    FUN_00227860(lVar1,2);
    FUN_0025e2f8(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x184) = 0;
  return;
}

