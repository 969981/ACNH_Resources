
void FUN_00384280(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float local_64;
  
  lVar3 = FUN_0037c748(param_1,6);
  lVar4 = FUN_0037c9ac(param_1,0x12);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar5 != 0) {
      lVar5 = lVar5 + (ulong)*(uint *)(lVar4 + 8);
      fVar6 = (float)FUN_00384580(param_1,lVar5,lVar3);
      fVar7 = 0.0;
      fVar8 = 0.0;
      if ((*(byte *)(lVar3 + 4) & 1) != 0) {
        *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(lVar3 + 0x3c);
        if (((((float)*(undefined8 *)(param_1 + 0x80) == 0.0) &&
             ((float)*(undefined8 *)(param_1 + 0x90) == 0.0)) && (*(float *)(param_1 + 0x74) == 0.0)
            ) && ((((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) == 0.0 &&
                   (*(float *)(param_1 + 0x78) == 0.0)) &&
                  ((float)*(undefined8 *)(param_1 + 0x88) == 0.0)))) {
          fVar8 = 1e+06;
        }
        else {
          fVar8 = 1.0 / (0.7 / *(float *)(lVar3 + 0x3c));
        }
        *(float *)(lVar5 + 100) = fVar8;
        *(uint *)(lVar5 + 0x50) = (uint)*(byte *)(lVar3 + 5);
        *(float *)(lVar5 + 0x70) = *(float *)(lVar3 + 0x40) / 255.0;
        *(float *)(lVar5 + 0x74) = *(float *)(lVar3 + 0x44) / 255.0;
        *(float *)(lVar5 + 0x78) = *(float *)(lVar3 + 0x48) / 255.0;
        fVar8 = *(float *)(lVar3 + 0x4c) / 255.0;
      }
      *(float *)(lVar5 + 0x7c) = fVar8;
      local_68 = *(float *)(lVar3 + 100);
      local_64 = *(float *)(lVar3 + 0x68);
      fVar8 = *(float *)(lVar3 + 0x60);
      bVar1 = *(byte *)(lVar3 + 6);
      bVar2 = *(byte *)(lVar3 + 7);
      if ((*(byte *)(lVar3 + 4) >> 1 & 1) != 0) {
        FUN_0038d040(0,0x42c80000,&local_64);
        *(uint *)(lVar5 + 0x54) = (uint)bVar1;
        *(float *)(lVar5 + 0x80) = local_64 / fVar6 + 1e-05;
        FUN_0038d040(0,0x42c80000,&local_68);
        fVar8 = fVar8 * (*(float *)PTR_FloatPi_04bcedc8 / *(float *)PTR_FloatDegree180_04bcedf8);
        fVar6 = cosf(fVar8);
        fVar6 = fVar6 * (local_68 / *(float *)(param_1 + 0x50));
        *(float *)(lVar5 + 0x84) = fVar6 + fVar6;
        fVar6 = sinf(fVar8);
        fVar6 = -(fVar6 * (local_68 / *(float *)(param_1 + 0x54)));
        *(float *)(lVar5 + 0x88) = fVar6 + fVar6;
        fVar6 = *(float *)(lVar3 + 0x50);
        *(undefined4 *)(lVar5 + 0xa0) = 0;
        *(float *)(lVar5 + 0x90) = fVar6 / 255.0;
        fVar6 = *(float *)(lVar3 + 0x54);
        *(undefined4 *)(lVar5 + 0xa4) = 0;
        *(float *)(lVar5 + 0x94) = fVar6 / 255.0;
        fVar6 = *(float *)(lVar3 + 0x58);
        *(undefined4 *)(lVar5 + 0xa8) = 0;
        *(float *)(lVar5 + 0x98) = fVar6 / 255.0;
        fVar7 = *(float *)(lVar3 + 0x5c);
        *(undefined4 *)(lVar5 + 0xac) = 0;
        *(undefined4 *)(lVar5 + 0x8c) = 0;
        ((undefined4 *)(lVar5 + 0xa0))[bVar2] = 0x3f800000;
        fVar7 = fVar7 / 255.0;
      }
      *(float *)(lVar5 + 0x9c) = fVar7;
      fVar6 = 0.0;
      if ((*(byte *)(lVar3 + 4) >> 2 & 1) != 0) {
        *(uint *)(lVar5 + 0x58) = (uint)*(byte *)(lVar3 + 8);
        *(float *)(lVar5 + 0xb0) = *(float *)(lVar3 + 0x6c) / 255.0;
        *(float *)(lVar5 + 0xb4) = *(float *)(lVar3 + 0x70) / 255.0;
        *(float *)(lVar5 + 0xb8) = *(float *)(lVar3 + 0x74) / 255.0;
        fVar6 = *(float *)(lVar3 + 0x78) / 255.0;
      }
      *(float *)(lVar5 + 0xbc) = fVar6;
      FUN_00384ab0(param_1,lVar5,lVar3);
    }
    if ((*(byte *)(lVar3 + 4) >> 4 & 1) != 0) {
      FUN_00384d00(param_1,param_2,lVar3,lVar4);
    }
  }
  return;
}

