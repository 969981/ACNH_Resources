
undefined8 FUN_0028d5d8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1 ^ *param_1 << 0xb;
  uVar3 = param_1[3];
  uVar2 = param_1[1] ^ param_1[1] << 0xb;
  *param_1 = param_1[2];
  param_1[1] = uVar3;
  uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
  uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return CONCAT44(uVar1,uVar2);
}

