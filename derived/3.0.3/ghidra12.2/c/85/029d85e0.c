
void FUN_029d85e0(uint *param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  DAT_04c49408._0_1_ = *(undefined1 *)(param_2 + 3);
  uVar8 = 0;
  iVar9 = 0;
  DAT_04c494b0 = *(undefined1 *)((long)param_2 + 0xd);
  DAT_04c49420._4_1_ = (undefined1)DAT_04c49408;
  DAT_04c4945c = (undefined1)DAT_04c49408;
  DAT_04c49478 = (undefined1)DAT_04c49408;
  DAT_04c494cc = DAT_04c494b0;
  do {
    lVar6 = (long)iVar9 * 0x54;
    if ((*(char *)((long)&DAT_04c49408 + lVar6) != '\0') ||
       (*(char *)((long)&DAT_04c49420 + lVar6 + 4) != '\0')) {
      lVar7 = (long)iVar9 * 0x54;
      fVar11 = param_2[1] - *(float *)((long)&DAT_04c49440 + lVar7 + 4);
      fVar14 = *(float *)((long)&DAT_04c49448 + lVar7 + 4);
      fVar10 = *param_2 - *(float *)((long)&DAT_04c49440 + lVar7);
      fVar12 = (float)(&DAT_04c49450)[(long)iVar9 * 0x15];
      fVar13 = param_2[2] - *(float *)((long)&DAT_04c49448 + lVar7);
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (fVar14 <= fVar12) {
        fVar14 = fVar12;
      }
      fVar14 = (SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar13 * fVar13) - fVar12) /
               (fVar14 - fVar12);
      fVar12 = 1.0 - fVar14;
      if (fVar14 <= 0.0) {
        fVar12 = 1.0;
      }
      if (0.0 < fVar12) {
        uVar3 = *(undefined8 *)((long)&DAT_04c49418 + lVar6);
        uVar2 = *(undefined8 *)((long)&DAT_04c49400 + lVar6);
        uVar4 = *(undefined8 *)((long)&DAT_04c49408 + lVar6);
        puVar1 = (undefined8 *)((long)(param_1 + 4) + ((long)((ulong)uVar8 << 0x20) >> 0x1a));
        uVar8 = uVar8 + 1;
        puVar1[2] = *(undefined8 *)((long)&DAT_04c49410 + lVar6);
        puVar1[3] = uVar3;
        *puVar1 = uVar2;
        puVar1[1] = uVar4;
        uVar2 = *(undefined8 *)((long)&DAT_04c49420 + lVar6);
        uVar4 = *(undefined8 *)((long)&DAT_04c49428 + lVar6);
        uVar3 = *(undefined8 *)((long)&DAT_04c49430 + lVar6);
        uVar5 = *(undefined8 *)((long)&DAT_04c49438 + lVar6);
        *(float *)((long)puVar1 + 4) = fVar12;
        puVar1[6] = uVar3;
        puVar1[7] = uVar5;
        puVar1[4] = uVar2;
        puVar1[5] = uVar4;
        if (uVar8 == 0x1e) {
          uVar8 = 0x1e;
          goto LAB_029d86fc;
        }
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x1e);
  if ((int)uVar8 < 1) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    return;
  }
LAB_029d86fc:
  *param_1 = uVar8;
  *(uint **)(param_1 + 2) = param_1 + 4;
  return;
}

