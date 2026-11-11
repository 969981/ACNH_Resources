
undefined8 FUN_003b9c9c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)FUN_003b91c0(*(undefined8 *)(param_1 + 0x40));
  uVar4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *param_3 = *puVar2;
    lVar3 = FUN_003b9250(*(undefined8 *)(param_1 + 0x40));
    uVar4 = 0;
    if (lVar3 != 0) {
      iVar1 = FUN_003b9930();
      if (iVar1 == 1) {
        FUN_003b9980(lVar3);
        uVar5 = 0xffffffff;
      }
      else {
        if (iVar1 != 0) {
          return 0;
        }
        lVar3 = FUN_003b9964(lVar3);
        uVar5 = *(undefined4 *)(lVar3 + 8);
      }
      uVar4 = 1;
      param_3[1] = uVar5;
    }
  }
  return uVar4;
}

