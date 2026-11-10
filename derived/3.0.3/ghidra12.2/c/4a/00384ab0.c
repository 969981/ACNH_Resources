
void FUN_00384ab0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a4;
  
  if ((*(byte *)(param_3 + 4) >> 3 & 1) == 0) {
    *(undefined8 *)(param_2 + 0xc0) = 0xbf800000bf800000;
    *(undefined8 *)(param_2 + 200) = 0xbf800000bf800000;
  }
  else {
    uVar4 = 0;
    lVar1 = param_2 + 0xc0;
    lVar5 = -0x40;
    uVar6 = 0xffffffff;
    *(uint *)(param_2 + 0x5c) = (uint)*(byte *)(param_3 + 9);
    fVar7 = 0.0;
    do {
      while( true ) {
        local_a4 = *(float *)(param_3 + 0x7c + uVar4 * 4);
        FUN_0038d040(0,0x3f800000,&local_a4);
        if (-1 < (int)uVar6) break;
        lVar2 = param_3 + 0x7c + lVar5;
        lVar3 = lVar1 + lVar5;
        if (fVar7 <= local_a4) {
          fVar7 = local_a4;
        }
        *(float *)(lVar1 + uVar4 * 4) = fVar7;
        *(float *)(lVar3 + 0x50) = *(float *)(lVar2 + 0x50) / 255.0;
        *(float *)(lVar3 + 0x54) = *(float *)(lVar2 + 0x54) / 255.0;
        *(float *)(lVar3 + 0x58) = *(float *)(lVar2 + 0x58) / 255.0;
        *(float *)(lVar3 + 0x5c) = *(float *)(lVar2 + 0x5c) / 255.0;
        if (1.0 <= local_a4) {
          uVar6 = uVar4 & 0xffffffff;
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x10;
        fVar7 = local_a4;
        if (uVar4 == 4) goto LAB_00384c0c;
      }
      lVar2 = param_3 + uVar6 * 0x10;
      *(undefined4 *)(lVar1 + uVar4 * 4) = 0x3f800000;
      lVar3 = lVar1 + lVar5;
      *(float *)(lVar3 + 0x50) = *(float *)(lVar2 + 0x8c) / 255.0;
      *(float *)(lVar3 + 0x54) = *(float *)(lVar2 + 0x90) / 255.0;
      *(float *)(lVar3 + 0x58) = *(float *)(lVar2 + 0x94) / 255.0;
      *(float *)(lVar3 + 0x5c) = *(float *)(lVar2 + 0x98) / 255.0;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 != 4);
LAB_00384c0c:
    fVar7 = *(float *)(param_3 + 0xcc);
    fVar11 = ABS((fVar7 - (float)(int)(fVar7 / 90.0) * 90.0) / 90.0 + -0.5) * -2.0 + 1.0;
    fVar12 = fVar11 * 0.41421357 + 1.0;
    fVar13 = *(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x54);
    fVar14 = *(float *)(param_1 + 0x54) / *(float *)(param_1 + 0x50);
    fVar9 = *(float *)PTR_FloatPi_04bcedc8;
    fVar10 = *(float *)PTR_FloatDegree180_04bcedf8;
    fVar8 = cosf(fVar7 * (fVar9 / fVar10));
    fVar7 = 0.0;
    if (1.0 <= fVar13) {
      fVar7 = fVar13 + -1.0;
    }
    *(float *)(param_2 + 0x110) = fVar8 / (fVar12 / (fVar11 * fVar7 + 1.0));
    fVar8 = sinf((fVar9 / fVar10) * *(float *)(param_3 + 0xcc));
    fVar7 = 0.0;
    if (1.0 <= fVar14) {
      fVar7 = fVar14 + -1.0;
    }
    *(float *)(param_2 + 0x114) = -fVar8 / (fVar12 / (fVar11 * fVar7 + 1.0));
  }
  return;
}

