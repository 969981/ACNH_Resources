
void FUN_02162f78(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0216b148(0x41200000);
  if ((uVar1 & 1) == 0) {
    FUN_0216b148(0x40a00000,param_1,param_2);
    return;
  }
  return;
}

