
int FUN_0328d070(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x50);
  param_1 = param_1 + 0x48;
  if (lVar4 == param_1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    lVar2 = lVar4;
    do {
      lVar2 = *(long *)(lVar2 + 8);
      iVar3 = iVar3 + 1;
    } while (lVar2 != param_1);
    do {
      iVar1 = FUN_0328d070(*(undefined8 *)(lVar4 + 0x10));
      lVar4 = *(long *)(lVar4 + 8);
      iVar3 = iVar1 + iVar3;
    } while (lVar4 != param_1);
  }
  return iVar3;
}

