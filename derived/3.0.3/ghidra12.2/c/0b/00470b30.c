
void FUN_00470b30(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_0046fbf0();
  param_1[3] = param_2;
  *param_1 = &PTR_LAB_04864d28;
  *(undefined1 *)(param_1 + 6) = 1;
  if (param_2 != 0) {
    FUN_004435a0(param_2);
  }
  iVar1 = 0x10000;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  lVar3 = FUN_0043c4e0(DAT_04c6f050);
  lVar2 = DAT_04c6f058;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  uVar4 = FUN_004389a0(*(undefined8 *)(lVar2 + 0x58),(long)iVar1,0x40);
  param_1[4] = uVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  *(int *)((long)param_1 + 0x2c) = iVar1;
  return;
}

