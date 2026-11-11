
undefined8 FUN_003b9d24(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003b9250(*(undefined8 *)(param_1 + 0x40));
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_003b9930();
    if (iVar1 == 1) {
      uVar3 = FUN_003b9980(lVar2);
      *(undefined8 *)(param_3 + 2) = uVar3;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      lVar2 = FUN_003b9964(lVar2);
      *param_3 = *(undefined4 *)(lVar2 + 8);
      iVar1 = *(int *)(lVar2 + 4) + 8;
      if (*(int *)(lVar2 + 4) == -1) {
        iVar1 = -1;
      }
      param_3[1] = iVar1;
    }
    uVar3 = 1;
  }
  return uVar3;
}

