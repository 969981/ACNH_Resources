
long FUN_004004b8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (param_2 != param_1) {
    FUN_01c66e30(param_1 + 0x28,*(long *)(param_2 + 0x28),*(long *)(param_2 + 0x30),
                 (*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 3) * -0x3333333333333333)
    ;
  }
  return param_1;
}

