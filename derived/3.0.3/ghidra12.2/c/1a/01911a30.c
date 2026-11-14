
bool FUN_01911a30(long param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar2 = (float *)(**(code **)(*(long *)(param_1 + 0x38) + 0xf0))();
  fVar3 = *pfVar2;
  pfVar2 = (float *)(**(code **)(*(long *)(param_1 + 0x98) + 0xf0))((long *)(param_1 + 0x98));
  fVar4 = *param_3;
  fVar5 = fVar3 * 0.5 + *param_2;
  bVar1 = true;
  if ((*param_2 - fVar3 * 0.5 <= fVar4) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
    bVar1 = fVar5 < fVar4;
  }
  if (bVar1) {
    bVar1 = false;
  }
  else {
    bVar1 = param_3[2] <= *pfVar2 * 0.5 + param_2[2] && param_2[2] - *pfVar2 * 0.5 <= param_3[2];
  }
  return bVar1;
}

