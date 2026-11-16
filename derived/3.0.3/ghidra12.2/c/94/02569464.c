
void FUN_02569464(undefined4 *param_1,float *param_2)

{
  undefined4 uVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2);
  lVar2 = FUN_0251e98c(1);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x120) + 0xf0))(lVar2 + 0x120);
  if (*pfVar3 <= fVar5) {
    lVar2 = FUN_0251e98c(1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x120) + 0xf0))(lVar2 + 0x120);
    fVar4 = *pfVar3;
    lVar2 = FUN_0251e98c(1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x120) + 0xf0))(lVar2 + 0x120);
    uVar1 = 0;
    fVar4 = (fVar5 - *pfVar3) / (1.0 - fVar4);
    fVar5 = 0.9999;
    if (fVar4 <= 0.9999) {
      fVar5 = fVar4;
    }
    if ((0.0 <= fVar4) && (fVar5 != 0.0)) {
      uVar1 = FUN_006f0400(*param_2,-param_2[1]);
    }
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}

