
void FUN_001e74c4(long param_1,byte param_2,long *param_3)

{
  byte bVar1;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x40);
  bVar1 = 1;
  *(long *)(param_1 + 0x68) = param_1 + 0x68;
  *(long *)(param_1 + 0x70) = param_1 + 0x68;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_0483cfc0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined ***)(param_1 + 0x90) = &PTR_LAB_0483cff8;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined ***)(param_1 + 0xa0) = &PTR_LAB_0483d030;
  FUN_00186460(param_1 + 0xb8,1,1);
  *(byte *)(param_1 + 0x100) = param_2;
  *(long **)(param_1 + 0x108) = param_3;
  *(undefined ***)(param_1 + 0xb8) = &PTR_FUN_04838f28;
  if ((param_2 & 1) == 0) {
    bVar1 = (**(code **)(*param_3 + 0x28))(param_3);
    bVar1 = bVar1 ^ 1;
  }
  *(byte *)(param_1 + 0x110) = bVar1 & 1;
  FUN_001e75c0((undefined8 *)(param_1 + 0x50),1);
  return;
}

