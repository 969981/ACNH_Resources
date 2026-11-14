
void FUN_0181398c(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + 2);
  uVar1 = *(byte *)(param_1 + 1) >> 1 & 0x7c | (bVar3 & 0x1f) << 7;
  if ((bVar3 & 0x10) != 0) {
    uVar1 = uVar1 | 0xfffff000;
  }
  uVar2 = bVar3 >> 3 & 0x1c | (*(byte *)(param_1 + 3) & 0x7f) << 5;
  if ((*(byte *)(param_1 + 3) & 0x40) != 0) {
    uVar2 = uVar2 | 0xfffff000;
  }
  *param_2 = (float)(int)uVar1;
  param_2[2] = (float)(int)uVar2;
  return;
}

