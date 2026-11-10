
uint FUN_0026b3b4(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
    lVar3 = *(long *)(param_1 + 0x40);
  }
  else {
    uVar1 = FUN_002212e4();
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if (lVar3 != 0) {
    uVar2 = FUN_002212e4();
    uVar1 = uVar1 | uVar2;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = FUN_002212e4();
    uVar1 = uVar1 | uVar2;
  }
  return uVar1 & 1;
}

