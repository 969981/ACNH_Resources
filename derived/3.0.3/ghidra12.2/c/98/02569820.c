
undefined8 FUN_02569820(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  if ((*(char *)(param_1 + 0x28) == '\0') && (*(float *)(param_1 + 0x34) < 0.5)) {
    pfVar4 = (float *)&DAT_0417abf4;
    if (*(char *)(param_1 + 0x438) != '\0') {
      pfVar4 = (float *)(param_1 + 0x2c);
    }
    fVar6 = SQRT(pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4);
    lVar3 = FUN_0251e98c(1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x120) + 0xf0))(lVar3 + 0x120);
    if (*pfVar4 <= fVar6) {
      lVar3 = FUN_0251e98c(1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x120) + 0xf0))(lVar3 + 0x120);
      fVar5 = *pfVar4;
      lVar3 = FUN_0251e98c(1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x120) + 0xf0))(lVar3 + 0x120);
      fVar5 = (fVar6 - *pfVar4) / (1.0 - fVar5);
      fVar6 = 0.9999;
      if (fVar5 <= 0.9999) {
        fVar6 = fVar5;
      }
      bVar1 = true;
      bVar2 = false;
      if (0.0 <= fVar5) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar6)) {
          bVar1 = fVar6 < 0.5;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        return 1;
      }
    }
  }
  return 0;
}

