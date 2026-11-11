
void FUN_006725b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int local_34;
  
  *param_1 = &PTR_LAB_048eb2c8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  lVar2 = *(long *)(param_2 + 0x28);
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    FUN_004435a0();
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  iVar4 = *(int *)(param_2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x30);
  if (iVar4 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_34 = iVar4;
    lVar3 = FUN_00421ed0(PTR_DAT_048607b8,0x18,&local_34);
    param_1[6] = lVar3;
    *(int *)(param_1 + 7) = iVar4;
    *(int *)((long)param_1 + 0x3c) = local_34;
    do {
      FUN_006731d0(lVar3,lVar2);
      iVar4 = iVar4 + -1;
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + 0x18;
    } while (iVar4 != 0);
  }
  return;
}

