
ulong FUN_003c5280(long *param_1,long param_2,long param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
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
  if ((1 < param_4) && (param_2 != 0)) {
    lVar2 = *param_1;
    lVar5 = param_1[1];
    param_4 = param_4 + -1;
    do {
      uVar1 = (param_3 + lVar2 + -1 + lVar5 & -param_3) + param_2;
      if (uVar1 <= (ulong)(param_1[2] + lVar2)) {
        lVar5 = uVar1 - lVar2;
        param_1[1] = lVar5;
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return uVar3;
}

