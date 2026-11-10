
long FUN_001fe5a4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_001865b0(param_1 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  FUN_00189504(param_1 + 0x30,param_2 + 0x30);
  FUN_00189504(param_1 + 0x58,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  return param_1;
}

