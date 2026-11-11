
long FUN_00392b20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x50) < 1) {
    return 0;
  }
  iVar4 = 0;
  lVar3 = 0;
  do {
    lVar1 = FUN_0038cb40(param_2,0x10,0x40);
    lVar2 = FUN_0038cb40(param_2,0x10,0x10);
    iVar4 = iVar4 + 1;
    lVar3 = lVar1 + lVar3 + lVar2;
  } while (iVar4 < *(int *)(param_1 + 0x50));
  return lVar3;
}

