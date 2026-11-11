
void FUN_003dde40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 * 4;
      lVar1 = lVar1 + 1;
      *(undefined4 *)(param_2 + lVar2) = *(undefined4 *)(param_1 + 0x50 + lVar2);
    } while (lVar1 < *(int *)(param_1 + 0x2c));
  }
  return;
}

