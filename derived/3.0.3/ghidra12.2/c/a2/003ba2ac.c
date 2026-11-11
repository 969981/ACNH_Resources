
undefined8 FUN_003ba2ac(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_003b90ac(*(undefined8 *)(param_1 + 0x40));
  uVar4 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_003b93f0();
    if (iVar1 != 3) {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_003b95c4(lVar2);
    uVar4 = 1;
    *param_3 = *puVar3;
  }
  return uVar4;
}

