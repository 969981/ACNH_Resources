
void FUN_0047df70(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_0046fbb0();
  param_1[3] = param_2;
  *param_1 = &PTR_LAB_04865590;
  uVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  param_1[4] = uVar3;
  iVar1 = 0x10000;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  lVar4 = FUN_0043c4e0(DAT_04c6f050);
  lVar2 = DAT_04c6f058;
  if (lVar4 != 0) {
    lVar2 = lVar4;
  }
  uVar3 = FUN_004389a0(*(undefined8 *)(lVar2 + 0x58),(long)iVar1,0x40);
  param_1[5] = uVar3;
  param_1[6] = 0;
  *(int *)(param_1 + 7) = iVar1;
  FUN_004435a0(param_1[3]);
  return;
}

