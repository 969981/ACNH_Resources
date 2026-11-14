
void FUN_019130e0(long param_1,float *param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_60;
  float local_58;
  
  if ((param_2 != (float *)0x0) && (param_3 != (uint *)0x0)) {
    uVar2 = param_3[3];
    local_58 = 0.0;
    local_60 = 0;
    uVar1 = *param_3 ^ *param_3 << 0xb;
    *param_3 = param_3[1];
    param_3[1] = param_3[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    param_3[2] = uVar2;
    param_3[3] = uVar1;
    fVar8 = (float)(uVar1 >> 9 | 0x3f800000) + -1.0;
    FUN_01912d10(fVar8,param_1,&local_60);
    fVar8 = (float)FUN_01912f20(fVar8,param_1);
    pfVar3 = (float *)(**(code **)(*(long *)(param_1 + 0x38) + 0xf0))((long *)(param_1 + 0x38));
    fVar4 = *pfVar3;
    uVar1 = *param_3 ^ *param_3 << 0xb;
    uVar2 = param_3[3];
    *param_3 = param_3[1];
    param_3[1] = param_3[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    fVar4 = fVar4 * 0.017453292 * 0.5;
    param_3[2] = uVar2;
    param_3[3] = uVar1;
    fVar4 = (fVar4 + fVar4) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) - fVar4;
    fVar5 = cosf(fVar4);
    fVar4 = sinf(fVar4);
    fVar7 = param_4[1];
    fVar6 = param_4[2];
    *param_2 = fVar8 * fVar4 + fVar5 * 0.0 + *param_4 + (float)local_60;
    param_2[1] = fVar7 + local_60._4_4_ + 0.0;
    param_2[2] = (fVar8 * fVar5 - fVar4 * 0.0) + fVar6 + local_58;
  }
  return;
}

