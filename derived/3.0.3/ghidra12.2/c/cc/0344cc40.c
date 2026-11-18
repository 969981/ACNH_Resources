
bool FUN_0344cc40(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auStack_2d6a [2];
  undefined1 auStack_2d68 [5798];
  undefined1 auStack_16c2 [2];
  int local_16c0 [7];
  int local_16a4;
  
  FUN_007ef010(auStack_2d6a,param_1);
  FUN_007e4920(auStack_2d68,auStack_2d6a);
  FUN_007ef010(auStack_16c2,param_1);
  FUN_007e4920(local_16c0,auStack_16c2);
  uVar2 = FUN_007e85b0(local_16c0);
  if ((uVar2 & 1) == 0) {
    FUN_007e6230(local_16c0,auStack_2d68);
    bVar1 = local_16a4 == DAT_04ccacf4 && local_16c0[0] == DAT_04ccacd8;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

