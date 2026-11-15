
void FUN_0220fa90(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = *(byte *)(param_1 + 0x24) & 0xf9;
  iVar3 = *(int *)(param_1 + 0x14);
  bVar1 = bVar2 | 4;
  if (iVar3 < 1) {
    bVar1 = bVar2;
  }
  bVar2 = bVar1 | 8;
  if (iVar3 != 2) {
    bVar2 = bVar1 & 0xf7;
  }
  if ((bVar1 & 1) != 0) {
    bVar1 = bVar2;
  }
  bVar2 = bVar1 | 0x10;
  if (iVar3 != 0) {
    bVar2 = bVar1;
  }
  *(byte *)(param_1 + 0x24) = bVar2;
  return;
}

