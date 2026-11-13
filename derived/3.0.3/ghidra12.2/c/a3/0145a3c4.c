
void FUN_0145a3c4(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 0x2c8;
  iVar3 = FUN_0277d6c4(lVar1);
  if (((iVar3 == 0x3606) || (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0x39d)) ||
     (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0x390)) {
    bVar2 = false;
  }
  else {
    iVar3 = FUN_0277d6c4(lVar1);
    bVar2 = iVar3 != 0x3b5;
  }
  uVar4 = FUN_0277e294(lVar1);
  if ((!bVar2) && ((uVar4 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x35c) = 1;
  }
  return;
}

