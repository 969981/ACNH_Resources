
void FUN_00222380(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  uVar1 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0x7f7f7f7f) << 1;
  uVar2 = (uVar1 >> 7 & 0x1010101) * 0x1b ^ (uVar1 & 0x7f7f7f7f) << 1;
  uVar3 = (uVar2 & 0x7f7f7f7f) << 1 ^ uVar4 ^ (uVar2 >> 7 & 0x1010101) * 0x1b;
  uVar3 = uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  uVar3 = uVar1 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  *param_1 = uVar4 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  uVar4 = param_2[1];
  uVar1 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0x7f7f7f7f) << 1;
  uVar2 = (uVar1 >> 7 & 0x1010101) * 0x1b ^ (uVar1 & 0x7f7f7f7f) << 1;
  uVar3 = (uVar2 & 0x7f7f7f7f) << 1 ^ uVar4 ^ (uVar2 >> 7 & 0x1010101) * 0x1b;
  uVar3 = uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  uVar3 = uVar1 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  param_1[1] = uVar4 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  uVar4 = param_2[2];
  uVar1 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0x7f7f7f7f) << 1;
  uVar2 = (uVar1 >> 7 & 0x1010101) * 0x1b ^ (uVar1 & 0x7f7f7f7f) << 1;
  uVar3 = (uVar2 & 0x7f7f7f7f) << 1 ^ uVar4 ^ (uVar2 >> 7 & 0x1010101) * 0x1b;
  uVar3 = uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  uVar3 = uVar1 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  param_1[2] = uVar4 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  uVar4 = param_2[3];
  uVar1 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0x7f7f7f7f) << 1;
  uVar2 = (uVar1 >> 7 & 0x1010101) * 0x1b ^ (uVar1 & 0x7f7f7f7f) << 1;
  uVar3 = (uVar2 & 0x7f7f7f7f) << 1 ^ uVar4 ^ (uVar2 >> 7 & 0x1010101) * 0x1b;
  uVar3 = uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  uVar3 = uVar1 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  param_1[3] = uVar4 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar3;
  return;
}

