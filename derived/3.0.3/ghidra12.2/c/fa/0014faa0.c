
void FUN_0014faa0(undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int **)(param_2 + 0x680) == (int *)0x0) {
    return;
  }
  if (**(int **)(param_2 + 0x680) != 1) {
    FUN_0014fa4c(param_1,param_2 + 0x4e8);
    FUN_0014fa4c(param_1,param_2 + 0x4c8);
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x68c);
  if ((bVar1 >> 1 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_00166bf0(param_1,param_2);
    bVar1 = *(byte *)(param_2 + 0x68c);
    uVar3 = uVar3 ^ 1;
  }
  if ((bVar1 >> 2 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00166c10(param_1,param_2);
    uVar2 = uVar2 ^ 1;
  }
  iVar4 = FUN_0014fa4c(param_1,param_2 + 0x4e8);
  if (iVar4 != 0 && (uVar3 & 1) == 0) {
    FUN_00166ca8(param_2);
  }
  iVar4 = FUN_0014fa4c(param_1,param_2 + 0x4c8);
  if (iVar4 == 0 || (uVar2 & 1) != 0) {
    return;
  }
  FUN_00166894(param_2);
  return;
}

