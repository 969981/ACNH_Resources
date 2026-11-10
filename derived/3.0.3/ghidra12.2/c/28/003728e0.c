
undefined1  [16] FUN_003728e0(long param_1)

{
  long lVar1;
  float fVar3;
  undefined1 auVar2 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return *(undefined1 (*) [16])(param_1 + 0x70);
  }
  fVar10 = (float)*(undefined8 *)(lVar1 + 0x70);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20);
  fVar12 = (float)*(undefined8 *)(lVar1 + 0x90);
  fVar7 = (float)*(undefined8 *)(lVar1 + 0x98);
  fVar6 = (float)((ulong)*(undefined8 *)(lVar1 + 0x90) >> 0x20);
  fVar8 = (float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20);
  fVar11 = (float)*(undefined8 *)(lVar1 + 0x80);
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x88);
  fVar5 = (float)*(undefined8 *)(lVar1 + 0x78);
  fVar9 = 0.0;
  fVar11 = fVar4 * fVar3 * fVar12 + fVar10 * fVar8 * fVar7 + fVar11 * fVar5 * fVar6 +
           -fVar12 * fVar8 * fVar5 + -fVar11 * fVar4 * fVar7 + -fVar10 * fVar6 * fVar3;
  if (fVar11 != 0.0) {
    fVar9 = 1.0 / fVar11;
  }
  fVar12 = -(fVar4 * fVar7) + fVar5 * fVar6;
  fVar10 = (-(fVar6 * fVar3) + fVar7 * fVar8) * fVar9;
  fVar8 = (-(fVar8 * fVar5) + fVar3 * fVar4) * fVar9;
  fVar11 = fVar12 * fVar9;
  auVar2._0_4_ = (float)*(undefined8 *)(param_1 + 0x70) * fVar10 +
                 (float)*(undefined8 *)(param_1 + 0x80) * fVar11 +
                 (float)*(undefined8 *)(param_1 + 0x90) * fVar8 + 0.0;
  auVar2._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) * fVar10 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) * fVar11 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) * fVar8 + 0.0;
  auVar2._8_4_ = (float)*(undefined8 *)(param_1 + 0x78) * fVar10 +
                 (float)*(undefined8 *)(param_1 + 0x88) * fVar11 +
                 (float)*(undefined8 *)(param_1 + 0x98) * fVar8 + 0.0;
  auVar2._12_4_ =
       ((-(fVar12 * fVar9) * (float)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20) -
        fVar10 * (float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20)) -
       fVar8 * (float)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20)) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar10 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar11 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar8;
  return auVar2;
}

