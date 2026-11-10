
uint FUN_0028d450(long param_1,ulong param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  uVar1 = nn::util::VSNPrintf();
  if (((int)uVar1 < 0) || (param_2 <= uVar1)) {
    *(undefined *)(param_2 + param_1 + -1) = *PTR_DAT_04bcdcc8;
  }
  if (param_2 <= (ulong)(long)(int)uVar1) {
    uVar1 = (int)param_2 - 1;
  }
  return uVar1;
}

