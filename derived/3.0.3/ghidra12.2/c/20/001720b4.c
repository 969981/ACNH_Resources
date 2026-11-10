
void FUN_001720b4(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_2 + 0x100;
  if (0x3fff < uVar1) {
    uVar1 = 0x4000;
  }
  lVar3 = FUN_00171a9c(param_1,param_2,uVar1);
  if (-0x385 < (int)lVar3) {
    lVar4 = *param_2;
    iVar2 = FUN_00168418(param_1 + 0x158,param_2,lVar3 - lVar4,0);
    if (iVar2 == 0) {
      param_2[2] = lVar3 - lVar4;
    }
  }
  return;
}

