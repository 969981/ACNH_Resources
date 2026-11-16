
bool FUN_027ac9f8(long param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    piVar1 = (int *)(param_1 + 0x60);
    sVar2 = *(short *)(param_1 + 100);
  }
  else {
    if (*(char *)(param_1 + 0xb8) != '\x01') {
      return false;
    }
    piVar1 = (int *)(param_1 + 100);
    sVar2 = *(short *)(param_1 + 0x68);
  }
  if ((sVar2 == 0) || ((short)param_2[1] == 0)) {
    bVar3 = *piVar1 == *param_2;
  }
  else {
    if (*piVar1 != *param_2) {
      return false;
    }
    bVar3 = (*(long *)(param_2 + 1) == *(long *)(piVar1 + 1) &&
            *(long *)(param_2 + 3) == *(long *)(piVar1 + 3)) && param_2[5] == piVar1[5];
  }
  return bVar3;
}

