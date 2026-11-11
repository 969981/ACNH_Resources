
bool FUN_003e2698(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_64 [16];
  int local_54;
  
  FUN_003b8780(param_2,auStack_64);
  FUN_003b8780(param_2,auStack_64);
  uVar1 = FUN_003b8780(param_2,auStack_64);
  lVar3 = (long)local_54;
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  uVar1 = *(int *)(param_1 + 0xb0) * lVar3 * 0x2900;
  if (uVar1 <= param_4) {
    uVar2 = FUN_003b8780(param_2,auStack_64);
    if ((uVar2 & 1) == 0) {
      local_54 = 0;
    }
    FUN_003dd550(param_1 + 0x80,param_3,param_4,local_54);
  }
  return uVar1 <= param_4;
}

