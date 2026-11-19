
uint FUN_038d4840(long param_1,ulong param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = nn::util::VSNPrintf();
    if (((int)uVar1 < 0) || (param_2 <= uVar1)) {
      *(undefined1 *)(param_2 + param_1 + -1) = 0;
    }
    if (param_2 <= (ulong)(long)(int)uVar1) {
      uVar1 = (int)param_2 - 1;
    }
  }
  return uVar1;
}

