
float FUN_02417014(long param_1,long param_2)

{
  float fVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_2 + 8) == '\0') {
    fVar4 = 1.0;
  }
  else {
    fVar4 = *(float *)(param_2 + 0xc);
    fVar5 = *(float *)(param_1 + 0x1820);
    fVar1 = -fVar4;
    if (0.0 <= fVar4) {
      fVar1 = fVar4;
    }
    fVar4 = (float)FUN_023294cc();
    fVar5 = fVar5 / fVar4;
    fVar4 = 1.0;
    fVar7 = 1.0;
    if (fVar5 <= 1.0) {
      fVar7 = fVar5;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar7;
    }
    lVar2 = FUN_0251e98c(1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x9c0) + 0xf0))(lVar2 + 0x9c0);
    fVar5 = *pfVar3;
    lVar2 = FUN_0251e98c(1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0xa20) + 0xf0))(lVar2 + 0xa20);
    fVar7 = *pfVar3;
    lVar2 = FUN_0251e98c(1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x9c0) + 0xf0))(lVar2 + 0x9c0);
    fVar5 = fVar5 + fVar6 * (fVar7 - *pfVar3);
    lVar2 = FUN_0251e98c(1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0xa20) + 0xf0))(lVar2 + 0xa20);
    fVar5 = fVar5 + (*pfVar3 - fVar5) * 0.0;
    if ((fVar5 <= fVar1) &&
       ((*(char *)(param_2 + 0x14) == '\0' || (*(int *)(param_1 + 0x17c8) == 0)))) {
      lVar2 = FUN_0251e98c(1);
      pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x9f0) + 0xf0))(lVar2 + 0x9f0);
      fVar7 = *pfVar3;
      lVar2 = FUN_0251e98c(1);
      pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0xa50) + 0xf0))(lVar2 + 0xa50);
      fVar4 = *pfVar3;
      lVar2 = FUN_0251e98c(1);
      pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x9f0) + 0xf0))(lVar2 + 0x9f0);
      fVar7 = fVar7 + fVar6 * (fVar4 - *pfVar3);
      fVar4 = 0.0;
      if (fVar1 <= fVar7) {
        fVar4 = 1.0 - (fVar1 - fVar5) / (fVar7 - fVar5);
        fVar4 = fVar4 * fVar4;
      }
    }
  }
  return fVar4;
}

