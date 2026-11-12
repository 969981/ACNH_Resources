
void FUN_00688790(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int local_34;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  iVar4 = (int)param_2[1];
  lVar3 = *param_2;
  if (iVar4 < 1) {
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
  }
  else {
    local_34 = iVar4;
    lVar1 = FUN_00421ed0(PTR_DAT_048607b8,0x40,&local_34);
    *param_1 = lVar1;
    *(int *)(param_1 + 1) = iVar4;
    *(int *)((long)param_1 + 0xc) = local_34;
    do {
      FUN_0043bd50(lVar1,lVar3);
      FUN_0043bd50(lVar1 + 8,lVar3 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
      *(undefined8 *)(lVar1 + 0x28) = uVar2;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
      uVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      iVar4 = iVar4 + -1;
      lVar1 = lVar1 + 0x40;
      lVar3 = lVar3 + 0x40;
    } while (iVar4 != 0);
  }
  return;
}

