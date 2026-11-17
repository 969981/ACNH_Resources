
uint FUN_02d6f230(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_171c [28];
  int local_1700;
  undefined1 auStack_16e2 [2];
  undefined1 auStack_16e0 [5792];
  
  FUN_007ef010(auStack_171c);
  FUN_007e4920(auStack_16e0,auStack_171c);
  uVar1 = FUN_007e85b0(auStack_16e0);
  uVar2 = FUN_0344cc40(param_2);
  uVar4 = 2;
  if ((uVar2 & 1) == 0) {
    uVar4 = uVar1 & 1;
  }
  uVar1 = (uVar1 | uVar2) ^ 1;
  FUN_007ef010(auStack_16e2,param_2);
  FUN_007e4920(auStack_16e0,auStack_16e2);
  FUN_007e6230(auStack_171c,auStack_16e0);
  if (local_1700 != (int)DAT_04ccacbc) {
    uVar2 = FUN_02d6f0e0(param_1,param_2);
    uVar1 = uVar2 & uVar1;
    if ((uVar2 & 1) == 0) {
      uVar4 = 3;
    }
  }
  FUN_007ef010(auStack_171c,param_2);
  FUN_007e4920(auStack_16e0,auStack_171c);
  iVar3 = FUN_007e4d10(auStack_16e0);
  if (iVar3 != -1) {
    uVar2 = FUN_0308bab0(param_1,param_2);
    uVar1 = uVar1 & uVar2;
    if ((uVar2 & 1) == 0) {
      uVar4 = 4;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar4;
  }
  return uVar1 & 1;
}

