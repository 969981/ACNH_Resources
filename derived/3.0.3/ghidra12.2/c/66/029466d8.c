
bool FUN_029466d8(long param_1,float *param_2,uint *param_3,uint param_4)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if ((param_4 & 1) == 0) {
    fVar4 = *param_2 - *(float *)(param_1 + 0x2a8);
    fVar5 = param_2[2] - *(float *)(param_1 + 0x2b0);
    fVar4 = fVar5 * fVar5 + fVar4 * fVar4;
  }
  else {
    lVar1 = FUN_02945728(param_1);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x6c0) + 0xf0))(lVar1 + 0x6c0);
    uVar3 = (ulong)(*param_3 >> 0x14) & 0xff0;
    fVar4 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
    fVar5 = (*param_2 +
            *pfVar2 * (*(float *)((long)&DAT_04199798 + uVar3) +
                      fVar4 * *(float *)((long)&DAT_0419979c + uVar3))) -
            *(float *)(param_1 + 0x2a8);
    fVar4 = (param_2[2] +
            *pfVar2 * (*(float *)((long)&DAT_041997a0 + uVar3) +
                      fVar4 * *(float *)((long)&DAT_041997a4 + uVar3))) -
            *(float *)(param_1 + 0x2b0);
    fVar4 = fVar4 * fVar4 + fVar5 * fVar5;
  }
  lVar1 = FUN_02945728(param_1);
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x690) + 0xf0))(lVar1 + 0x690);
  fVar5 = *pfVar2;
  lVar1 = FUN_02945728(param_1);
  pfVar2 = (float *)(**(code **)(**(long **)(*(long *)(lVar1 + 0x730) +
                                            (long)*(int *)(param_1 + 0x3c4) * 8) + 0xf0))();
  return SQRT(fVar4) <= fVar5 + *pfVar2;
}

