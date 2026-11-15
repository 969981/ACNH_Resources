
bool FUN_021644b4(undefined8 param_1)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = (float *)FUN_0251b3b0(param_1,0);
  bVar1 = false;
  if (pfVar2 != (float *)0x0) {
    fVar4 = *pfVar2;
    fVar3 = (float)*(int *)(DAT_050d57c8 + 0x38) * 5.0 + 5.0;
    bVar1 = false;
    if (((float)*(int *)(DAT_050d57c8 + 0x28) * 5.0 <= fVar4) &&
       (bVar1 = false, !NAN(fVar4) && !NAN(fVar3))) {
      bVar1 = fVar4 < fVar3;
    }
    if ((!bVar1) || (pfVar2[2] < (float)*(int *)(DAT_050d57c8 + 0x2c) * 5.0)) {
      return false;
    }
    bVar1 = pfVar2[2] < (float)*(int *)(DAT_050d57c8 + 0x3c) * 5.0 + 5.0;
  }
  return bVar1;
}

