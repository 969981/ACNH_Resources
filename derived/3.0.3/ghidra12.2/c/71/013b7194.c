
undefined8 FUN_013b7194(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x460) == 1) {
    uVar2 = FUN_013b7350(*(undefined4 *)(param_1 + 0x38c),*(undefined4 *)(param_1 + 0x390),
                         *(undefined4 *)(param_1 + 0x394),0x420c0000);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar1 = FUN_013b7504(*(undefined4 *)(param_1 + 0x38c),*(undefined4 *)(param_1 + 0x390),
                         *(undefined4 *)(param_1 + 0x394),0x41200000,uVar2,5);
  }
  else {
    if (*(int *)(param_1 + 0x460) != 0) {
      return 0;
    }
    local_24 = 1;
    local_28 = 0x40a00000;
    uVar1 = FUN_013b7250(param_1,param_1 + 0x38c,&local_24,&local_28);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    local_30 = 0x40a00000;
    uStack_2c = 0xc;
    uVar1 = FUN_013b7250(uVar1,param_1 + 0x38c,&uStack_2c,&local_30);
  }
  if ((uVar1 & 1) == 0) {
    return 1;
  }
  return 0;
}

