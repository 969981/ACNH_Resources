
int FUN_0034ccc0(int param_1)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0x38;
  piVar2 = &DAT_04130868;
  do {
    uVar4 = uVar3 >> 1;
    uVar3 = uVar3 + ~uVar4;
    piVar1 = piVar2 + uVar4 * 2 + 2;
    if (param_1 <= piVar2[uVar4 * 2]) {
      uVar3 = uVar4;
      piVar1 = piVar2;
    }
    piVar2 = piVar1;
  } while (uVar3 != 0);
  if ((piVar2 == (int *)&DAT_04130a28) || (param_1 < *piVar2)) {
    return 0;
  }
  return piVar2[1];
}

