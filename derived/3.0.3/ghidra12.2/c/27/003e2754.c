
long FUN_003e2754(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_44 [16];
  int local_34;
  
  uVar1 = FUN_003b8780(param_2,auStack_44);
  lVar2 = (long)local_34;
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  return *(int *)(param_1 + 0xb0) * lVar2 * 0x2900;
}

