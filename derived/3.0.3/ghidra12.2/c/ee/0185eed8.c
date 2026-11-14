
void FUN_0185eed8(long param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = FUN_006f0400(*(float *)(param_1 + 0x328) - *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                       *(float *)(param_1 + 0x330) - *(float *)(*(long *)(param_1 + 0x300) + 0x280))
  ;
  *(undefined4 *)(param_1 + 0x4c8) = uVar1;
  fVar3 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
  fVar5 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
  fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
  *(float *)(param_1 + 0x4d0) = fVar3;
  pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0xf8) + 0xf0))();
  if (*(int *)(param_1 + 0x280) == 0) {
    if (fVar3 <= *pfVar2) {
      fVar3 = *(float *)(param_1 + 0x4d0) * 0.8;
    }
    else {
      pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0xf8) + 0xf0))();
      fVar3 = *pfVar2;
      pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x60) + 0xf0))();
      fVar3 = fVar3 * *pfVar2;
    }
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x128) + 0xf0))
                                (*(long *)(param_1 + 0x500) + 0x128);
    fVar4 = *pfVar2;
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x60) + 0xf0))();
    fVar6 = *(float *)(param_1 + 0x4d0);
    fVar5 = fVar4 * *pfVar2;
    if (fVar4 * *pfVar2 <= fVar6) {
      fVar5 = fVar6;
    }
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x188) + 0xf0))
                                (*(long *)(param_1 + 0x500) + 0x188);
    fVar7 = *pfVar2;
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x158) + 0xf0))
                                (*(long *)(param_1 + 0x500) + 0x158);
    fVar4 = *pfVar2;
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x158) + 0xf0))
                                (*(long *)(param_1 + 0x500) + 0x158);
    *(float *)(param_1 + 0x558) = *pfVar2 + (fVar7 - fVar4) * ((fVar6 - fVar3) / (fVar5 - fVar3));
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x60) + 0xf0))();
    fVar3 = *pfVar2 * *(float *)(param_1 + 0x558);
  }
  else {
    if (fVar3 <= *pfVar2) {
      fVar3 = *(float *)(param_1 + 0x4d0) * 0.6;
    }
    else {
      pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0xf8) + 0xf0))();
      fVar3 = *pfVar2;
    }
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x128) + 0xf0))
                                (*(long *)(param_1 + 0x500) + 0x128);
    fVar6 = *(float *)(param_1 + 0x4d0);
    fVar5 = *pfVar2;
    if (*pfVar2 <= fVar6) {
      fVar5 = fVar6;
    }
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x188) + 0xf0))
                                (*(long *)(param_1 + 0x500) + 0x188);
    fVar7 = *pfVar2;
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x158) + 0xf0))
                                (*(long *)(param_1 + 0x500) + 0x158);
    fVar4 = *pfVar2;
    pfVar2 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x158) + 0xf0))
                                (*(long *)(param_1 + 0x500) + 0x158);
    fVar3 = *pfVar2 + (fVar7 - fVar4) * ((fVar6 - fVar3) / (fVar5 - fVar3));
  }
  *(float *)(param_1 + 0x558) = fVar3;
  return;
}

