
int FUN_002abdf8(long param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 8);
  iVar2 = 1;
  if ((bVar1 & 1) != 0) {
    iVar2 = 2;
  }
  if ((bVar1 & 2) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((bVar1 & 4) != 0) {
    iVar2 = iVar2 + 4;
  }
  if ((bVar1 & 8) != 0) {
    iVar2 = iVar2 + 8;
  }
  return iVar2;
}

