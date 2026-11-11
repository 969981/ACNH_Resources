
ulong FUN_003c5234(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  if (param_2 != 0) {
    lVar2 = *param_1;
    uVar4 = (param_3 + lVar2 + param_1[1]) - 1U & -param_3;
    uVar1 = uVar4 + param_2;
    if (uVar1 <= (ulong)(param_1[2] + lVar2)) {
      param_1[1] = uVar1 - lVar2;
      uVar3 = uVar4;
    }
  }
  return uVar3;
}

