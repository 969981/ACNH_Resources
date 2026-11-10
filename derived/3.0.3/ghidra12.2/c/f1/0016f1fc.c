
undefined8 FUN_0016f1fc(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  long local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_30 = 0;
  local_38 = param_1;
  local_28 = param_2;
  uStack_24 = param_3;
  FUN_0017251c(param_1,&LAB_00172308,&local_38);
  lVar2 = local_30;
  do {
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0x98) = 0;
    uVar1 = FUN_0016cc94(param_1,*(undefined4 *)(lVar2 + 0xb8),7);
    lVar2 = lVar3;
  } while (-0x385 < (int)uVar1);
  while (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x98);
    *(undefined8 *)(lVar3 + 0x98) = 0;
    lVar3 = lVar2;
  }
  return uVar1;
}

