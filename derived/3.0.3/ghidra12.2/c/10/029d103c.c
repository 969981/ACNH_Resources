
void FUN_029d103c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x120);
  uVar1 = *(uint *)(param_1 + 0x114) ^ *(uint *)(param_1 + 0x114) << 0xb;
  uVar2 = uVar5 ^ uVar5 << 0xb;
  uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
  *(uint *)(param_1 + 0x114) = uVar1;
  *(uint *)(param_1 + 4) = uVar1;
  uVar5 = *(uint *)(param_1 + 0x118) ^ *(uint *)(param_1 + 0x118) << 0xb;
  uVar3 = *(uint *)(param_1 + 0x11c) ^ *(uint *)(param_1 + 0x11c) << 0xb;
  uVar5 = uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1;
  *(uint *)(param_1 + 0x118) = uVar5;
  uVar3 = uVar3 >> 8 ^ uVar5 >> 0x13 ^ uVar3 ^ uVar5;
  *(uint *)(param_1 + 8) = uVar5;
  *(uint *)(param_1 + 0xc) = uVar3;
  *(uint *)(param_1 + 0x11c) = uVar3;
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
  uVar4 = uVar2 ^ uVar3;
  *(uint *)(param_1 + 0x120) = uVar4;
  *(uint *)(param_1 + 0x10) = uVar4;
  if ((uVar1 == 0) && (uVar5 == 0 && (uVar2 == 0 && uVar3 == 0))) {
    *(uint *)(param_1 + 4) = 1;
  }
  FUN_029d1110(param_1);
  *(undefined2 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0xffffffffffffffff;
  return;
}

