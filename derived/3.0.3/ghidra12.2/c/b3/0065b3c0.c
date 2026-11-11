
int FUN_0065b3c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  iVar3 = 1;
  piVar4 = &DAT_04c7a39c;
  while( true ) {
    if (piVar4[-0xe] == param_1) {
      return iVar2;
    }
    if (*piVar4 == param_1) break;
    uVar1 = iVar3 + 1;
    iVar2 = iVar2 + 2;
    piVar4 = piVar4 + 0x1c;
    iVar3 = iVar3 + 2;
    if (0x115 < uVar1) {
      return 0;
    }
  }
  return iVar3;
}

