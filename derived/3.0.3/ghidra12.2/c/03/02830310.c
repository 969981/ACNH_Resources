
long FUN_02830310(long param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = FUN_02828794();
  if ((uVar1 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0x1e) {
        param_1 = 0;
        iVar3 = -1;
        goto LAB_0283037c;
      }
      lVar2 = param_1 + (long)iVar3 * 0x2b8;
      uVar1 = FUN_02828794(lVar2);
    } while ((uVar1 & 1) != 0);
    param_1 = lVar2;
  }
LAB_0283037c:
  *param_2 = iVar3;
  return param_1;
}

