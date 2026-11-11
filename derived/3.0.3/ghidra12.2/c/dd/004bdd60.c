
uint FUN_004bdd60(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x1c) == 3) && (*(long *)(param_1 + 0x10) != 0)) {
    iVar1 = FUN_004bda30(*(long *)(param_1 + 0x10),param_2,param_3);
    uVar2 = iVar1 >> 0x1f & 0x80040200;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    uVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  uVar3 = uVar2;
  if ((((0 < iVar1) && (*(uint *)(param_1 + 0x1c) < 6)) &&
      ((1 << (ulong)(*(uint *)(param_1 + 0x1c) & 0x1f) & 0x32U) != 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    iVar1 = FUN_004bdd60(*(long *)(param_1 + 0x10),param_2,param_3);
    uVar3 = 0x80040200;
    if (-1 < iVar1) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}

