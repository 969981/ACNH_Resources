
undefined8 FUN_003ba228(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  lVar4 = FUN_003b90ac(*(undefined8 *)(param_1 + 0x40));
  uVar6 = 0;
  if (lVar4 != 0) {
    iVar3 = FUN_003b93f0();
    if (iVar3 != 3) {
      return 0;
    }
    puVar5 = (undefined4 *)FUN_003b95b8(lVar4);
    *param_3 = *puVar5;
    param_3[1] = puVar5[1];
    uVar1 = FUN_003b97bc();
    *(undefined1 *)(param_3 + 2) = uVar1;
    cVar2 = FUN_003b97d4(puVar5);
    uVar6 = 1;
    *(bool *)((long)param_3 + 9) = cVar2 != '\0';
  }
  return uVar6;
}

