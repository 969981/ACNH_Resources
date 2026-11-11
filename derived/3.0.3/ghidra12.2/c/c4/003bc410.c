
long FUN_003bc410(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_18;
  
  iVar2 = *param_1;
  local_18 = FUN_003cd670();
  lVar3 = FUN_003c0150(&local_18);
  lVar1 = 0x5a0;
  if (lVar3 != 0) {
    lVar1 = lVar3 * 2 + 0x5d0;
  }
  lVar3 = (long)param_2 + -1;
  uVar4 = -(long)param_2;
  return (lVar3 + lVar1 * iVar2 & uVar4) + (lVar3 + (long)*param_1 * 0x4b0 & uVar4);
}

