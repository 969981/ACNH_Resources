
undefined8 FUN_04002ef8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_2 == -1) || (uVar1 = nn::os::TimedWaitEvent(param_1 + 0x208), (uVar1 & 1) != 0)) {
    FUN_04002c24(param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

