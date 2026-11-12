
undefined8 FUN_0069480c(int *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  if (*param_1 != 3) {
    return 1;
  }
  if ((char)param_1[4] != '\0') {
    *param_2 = (float)param_1[2];
    return 0;
  }
  dVar4 = *(double *)(param_1 + 2);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (1.1754943508222875e-38 <= dVar4) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar4)) {
      bVar1 = dVar4 < 3.4028234663852886e+38;
      bVar2 = dVar4 == 3.4028234663852886e+38;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    *param_2 = (float)dVar4;
    return 0;
  }
  return 2;
}

