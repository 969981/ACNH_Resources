
void FUN_020e9c5c(byte *param_1,undefined1 *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  
  param_2[3] = param_1[3];
  bVar5 = (param_1[7] >> 2 & 3) << 2;
  bVar2 = param_2[5] & 0xf0;
  param_2[5] = bVar2 | param_2[5] & 3 | bVar5;
  uVar1 = (uint)*param_1 | (param_1[1] & 0xf) << 8;
  if ((param_1[1] & 8) != 0) {
    uVar1 = uVar1 | 0xfffff000;
  }
  bVar3 = (byte)((uint)(int)(float)(int)uVar1 >> 8);
  *param_2 = (char)(int)(float)(int)uVar1;
  param_2[1] = param_2[1] & 0xf0 | bVar3 & 0xf;
  uVar4 = (uint)(param_1[1] >> 4) | (uint)param_1[2] << 4;
  uVar1 = uVar4 | 0xfffff000;
  if (-1 < (char)param_1[2]) {
    uVar1 = uVar4;
  }
  param_2[2] = (char)((uint)(int)(float)(int)uVar1 >> 4);
  param_2[1] = bVar3 & 0xf | (byte)((int)(float)(int)uVar1 << 4);
  bVar3 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = bVar2 | bVar5 | bVar3 & 3;
  return;
}

