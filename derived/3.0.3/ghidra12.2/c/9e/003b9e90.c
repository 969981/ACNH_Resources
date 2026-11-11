
undefined8 FUN_003b9e90(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = FUN_003b90ac(*(undefined8 *)(param_1 + 0x40));
  uVar6 = 0;
  if (lVar5 != 0) {
    iVar3 = FUN_003b93f0();
    if (iVar3 != 1) {
      return 0;
    }
    lVar5 = FUN_003b95d0(lVar5);
    uVar4 = FUN_003b9890();
    *param_3 = uVar4;
    param_3[5] = *(undefined4 *)(lVar5 + 8);
    uVar1 = FUN_003b98a8(lVar5);
    *(undefined1 *)(param_3 + 6) = uVar1;
    bVar2 = FUN_003b98c8(lVar5);
    *(byte *)((long)param_3 + 0x19) = bVar2 & 1;
    FUN_003b97f0(lVar5,param_3 + 1);
    uVar6 = 1;
  }
  return uVar6;
}

