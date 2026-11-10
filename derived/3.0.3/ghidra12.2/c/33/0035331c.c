
undefined8 FUN_0035331c(long *param_1,int param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 == 9) {
    lVar3 = *param_3;
    iVar1 = *(int *)(lVar3 + 0x4c);
    if (0 < iVar1) {
      if (*(char *)(lVar3 + 0x38) == '\0') {
        fVar4 = (float)FUN_003500f0(lVar3);
      }
      else {
        fVar4 = *(float *)(lVar3 + 0x20);
      }
      fVar4 = fVar4 * (float)iVar1;
      *(float *)(lVar3 + 0x14) =
           *(float *)(param_3 + 3) +
           (float)((int)((*(float *)(lVar3 + 0x14) - *(float *)(param_3 + 3)) / fVar4) + 1) * fVar4;
    }
    return 1;
  }
  if (param_2 == 10) {
    lVar2 = *param_3;
    lVar3 = param_3[3];
    fVar5 = *(float *)(lVar2 + 0x18);
    fVar4 = (float)(**(code **)(*param_1 + 0x28))(param_1,lVar2);
    *(int *)(lVar2 + 0x14) = (int)lVar3;
    *(float *)(lVar2 + 0x18) = fVar5 + fVar4;
    return 3;
  }
  return 0;
}

