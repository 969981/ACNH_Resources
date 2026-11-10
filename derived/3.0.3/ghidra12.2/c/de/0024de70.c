
long FUN_0024de70(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  FUN_0025f9c4();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar2 = *(undefined1 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  uVar3 = *(undefined1 *)(param_2 + 0x32);
  *(undefined1 *)(param_1 + 0x31) = uVar2;
  *(undefined1 *)(param_1 + 0x32) = uVar3;
  return param_1;
}

