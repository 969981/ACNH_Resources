
undefined8 FUN_003ba1a8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003b90ac(*(undefined8 *)(param_1 + 0x40));
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_003b93f0();
    if (iVar1 != 2) {
      return 0;
    }
    FUN_003b9420(lVar2);
    lVar2 = FUN_003b978c();
    uVar3 = 0;
    if (lVar2 != 0) {
      *(bool *)param_3 = *(char *)(lVar2 + 1) == '\x01';
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lVar2 + 4);
      uVar3 = 1;
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar2 + 8);
    }
  }
  return uVar3;
}

