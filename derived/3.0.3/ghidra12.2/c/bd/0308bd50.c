
bool FUN_0308bd50(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auStack_16c0 [5792];
  undefined1 auStack_2 [2];
  
  FUN_007ef010(auStack_2,param_1);
  FUN_007e4920(auStack_16c0,auStack_2);
  uVar3 = FUN_007e4bb0(auStack_16c0);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_007e68d0(auStack_16c0);
    bVar1 = iVar2 == 0x1d;
  }
  return bVar1;
}

