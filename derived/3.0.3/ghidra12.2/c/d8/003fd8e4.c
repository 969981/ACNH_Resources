
long FUN_003fd8e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  FUN_00189504(param_1 + 0x10,param_2 + 0x10);
  if (param_2 == param_1) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    return param_1;
  }
  FUN_00405250(param_1 + 0x38,*(long *)(param_2 + 0x38),*(long *)(param_2 + 0x40),
               (*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 5) * -0x5555555555555555);
  lVar1 = *(long *)(param_2 + 0x58);
  lVar2 = *(long *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_001a2ac0(param_1 + 0x58,lVar1,lVar2,lVar2 - lVar1);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  return param_1;
}

