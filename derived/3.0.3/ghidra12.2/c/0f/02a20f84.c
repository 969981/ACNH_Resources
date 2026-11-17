
undefined8 FUN_02a20f84(uint *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  
  pcVar3 = *(char **)(*(long *)(*param_2 + 0x30) + 0x10);
  if (((*pcVar3 == 'U') && (pcVar3[1] == 'I')) && (pcVar3[2] == '_')) {
    fVar4 = (float)FUN_03bdc520(*(long *)(*(long *)(*param_2 + 0x30) + 0x18) + 0x28,param_2[2]);
    if (fVar4 <= (float)param_1[1]) {
      fVar5 = fVar4 - (float)param_1[1];
      bVar1 = false;
      bVar2 = true;
      if (-1.1920929e-07 <= fVar5) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar5)) {
          bVar1 = fVar5 == 1.1920929e-07;
          bVar2 = 1.1920929e-07 <= fVar5;
        }
      }
      if (bVar2 && !bVar1) {
        if (*param_1 < 6) {
          return 1;
        }
        param_1[1] = (uint)fVar4;
        *param_1 = 0;
        return 0;
      }
    }
    param_1[1] = (uint)fVar4;
    *param_1 = 0;
    if (*(long *)(param_1 + 2) == 0) {
      return 0;
    }
    if (param_1[4] == *(uint *)(*(long *)(param_1 + 2) + 0x10)) {
      FUN_03b45ec0(0,0);
    }
  }
  return 0;
}

