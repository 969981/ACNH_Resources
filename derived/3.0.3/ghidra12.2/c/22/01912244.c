
void FUN_01912244(long param_1,float *param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_2 != (float *)0x0) && (param_3 != (uint *)0x0)) {
    uVar2 = param_3[3];
    uVar1 = *param_3 ^ *param_3 << 0xb;
    *param_3 = param_3[1];
    param_3[1] = param_3[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    param_3[2] = uVar2;
    param_3[3] = uVar1;
    fVar7 = (float)(uVar1 >> 9 | 0x3f800000) + -1.0;
    pfVar3 = (float *)(**(code **)(*(long *)(param_1 + 0x30) + 0xf0))();
    fVar6 = *pfVar3;
    pfVar3 = (float *)(**(code **)(*(long *)(param_1 + 0xc0) + 0xf0))();
    fVar8 = *pfVar3;
    plVar4 = (long *)(param_1 + 0x60);
    pfVar3 = (float *)(**(code **)(*plVar4 + 0xf0))(plVar4);
    fVar6 = fVar6 + *pfVar3 * fVar7 * fVar8 * -0.5;
    pfVar3 = (float *)(**(code **)(*(long *)(param_1 + 0x90) + 0xf0))((long *)(param_1 + 0x90));
    fVar8 = *pfVar3;
    uVar1 = *param_3 ^ *param_3 << 0xb;
    uVar2 = param_3[3];
    *param_3 = param_3[1];
    param_3[1] = param_3[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    fVar8 = fVar8 * 0.017453292 * 0.5;
    param_3[2] = uVar2;
    param_3[3] = uVar1;
    fVar8 = (fVar8 + fVar8) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) - fVar8;
    fVar5 = cosf(fVar8);
    fVar8 = sinf(fVar8);
    *param_2 = *param_4 + fVar6 * fVar8 + fVar5 * 0.0;
    param_2[1] = param_4[1] + 0.0;
    param_2[2] = (fVar6 * fVar5 - fVar8 * 0.0) + param_4[2];
    fVar8 = param_4[1];
    pfVar3 = (float *)(**(code **)(*plVar4 + 0xf0))(plVar4);
    param_2[1] = fVar8 + *pfVar3 * fVar7;
  }
  return;
}

