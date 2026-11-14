
bool FUN_01b34790(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  bVar3 = false;
  uVar4 = 5;
  if (199 < uVar2) {
    uVar4 = 6;
  }
  uVar1 = 4;
  if (0x95 < uVar2) {
    uVar1 = uVar4;
  }
  uVar4 = 3;
  if (99 < uVar2) {
    uVar4 = uVar1;
  }
  uVar1 = 2;
  if (0x3b < uVar2) {
    uVar1 = uVar4;
  }
  uVar4 = 1;
  if (0x1d < uVar2) {
    uVar4 = uVar1;
  }
  if ((3 < uVar4) && (*(char *)(param_2 + 0x1d) == '\0')) {
    bVar3 = *(char *)(param_2 + 0x1e) == '\0';
  }
  return bVar3;
}

