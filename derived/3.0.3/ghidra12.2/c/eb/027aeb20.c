
bool FUN_027aeb20(long param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    piVar3 = (int *)(param_1 + 100);
  }
  else if (*(char *)(param_1 + 0xb8) == '\0') {
    piVar3 = (int *)(param_1 + 0x60);
  }
  else {
    piVar3 = (int *)0x0;
  }
  if (*(char *)(param_1 + 0x5c) == '\0') {
    piVar1 = (int *)(param_1 + 4);
  }
  else {
    if (*(char *)(param_1 + 0x5c) != '\x01') {
      return false;
    }
    piVar1 = (int *)(param_1 + 8);
  }
  if (piVar3 == (int *)0x0) {
    return false;
  }
  if (((short)piVar3[1] == 0) || ((short)piVar1[1] == 0)) {
    bVar2 = *piVar3 == *piVar1;
  }
  else {
    if (*piVar3 != *piVar1) {
      return false;
    }
    bVar2 = (*(long *)(piVar1 + 1) == *(long *)(piVar3 + 1) &&
            *(long *)(piVar1 + 3) == *(long *)(piVar3 + 3)) && piVar1[5] == piVar3[5];
  }
  return bVar2;
}

