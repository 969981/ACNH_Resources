
uint FUN_0028d5ac(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 ^ *param_1 << 0xb;
  uVar2 = param_1[3];
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return uVar1;
}

