
undefined8 FUN_02ff7920(long param_1,long param_2,short *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_171a [2];
  undefined1 auStack_1718 [5796];
  uint local_74;
  
  if (*param_3 == DAT_04cb6038) {
    return 0;
  }
  FUN_007ef010(auStack_171a,param_3);
  FUN_007e4920(auStack_1718,auStack_171a);
  lVar5 = 0;
  uVar4 = 0;
  uVar6 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar5);
    pfVar2 = (float *)(param_2 + lVar5);
    uVar3 = FUN_02ff7cc0(0x3a83126f,puVar1,pfVar2);
    if ((uVar3 & 1) == 0) {
      if (uVar4 < 0xf) {
        uVar6 = *(undefined8 *)(pfVar2 + 2);
        *puVar1 = *(undefined8 *)pfVar2;
        puVar1[1] = uVar6;
        fVar8 = *pfVar2;
        fVar11 = pfVar2[1];
        fVar7 = 255.0;
        if (fVar8 <= 1.0) {
          fVar7 = fVar8 * 255.0;
        }
        fVar9 = 0.0;
        if (0.0 <= fVar8) {
          fVar9 = fVar7;
        }
        fVar7 = 255.0;
        if (fVar11 <= 1.0) {
          fVar7 = fVar11 * 255.0;
        }
        fVar8 = 0.0;
        if (0.0 <= fVar11) {
          fVar8 = fVar7;
        }
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        fVar7 = 255.0;
        if (fVar11 <= 1.0) {
          fVar7 = fVar11 * 255.0;
        }
        fVar10 = 0.0;
        if (0.0 <= fVar11) {
          fVar10 = fVar7;
        }
        fVar7 = 255.0;
        if (fVar12 <= 1.0) {
          fVar7 = fVar12 * 255.0;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar12) {
          fVar11 = fVar7;
        }
        local_74 = (int)fVar9 << 0x18 | (int)fVar8 << 0x10 | (int)fVar10 << 8 | (int)fVar11;
        FUN_007e7690(auStack_1718,uVar4 & 0xffffffff,&local_74);
      }
      uVar6 = 1;
    }
    lVar5 = lVar5 + 0x10;
    uVar4 = uVar4 + 1;
  } while (lVar5 != 0x100);
  return uVar6;
}

