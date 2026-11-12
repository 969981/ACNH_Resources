
void FUN_006fc344(float *param_1,long param_2,long param_3)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_f0;
  undefined4 uStack_e8;
  float local_e4;
  undefined8 local_e0;
  undefined4 uStack_d8;
  float local_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  fVar26 = 1.0;
  if (*(char *)(param_2 + 0x42d) != '\0') {
    iVar1 = *(int *)(param_2 + 0x428);
    if ((*(int *)(param_2 + 0x420) < iVar1) && (iVar1 != 0)) {
      fVar4 = (float)*(int *)(param_2 + 0x420) / (float)iVar1;
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar4) {
        fVar26 = fVar5;
      }
    }
  }
  plVar3 = (long *)**(undefined8 **)
                     (*(long *)(param_3 + 0x38) + (long)*(short *)(param_2 + 0x340) * 8);
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_f0,(long)*(short *)(param_2 + 0x342));
  *(undefined8 *)(param_1 + 4) = local_e0;
  *(ulong *)(param_1 + 6) = CONCAT44(local_d4,uStack_d8);
  *(undefined8 *)(param_1 + 8) = local_d0;
  *(ulong *)(param_1 + 10) = CONCAT44(local_c4,uStack_c8);
  *(undefined8 *)param_1 = local_f0;
  *(ulong *)(param_1 + 2) = CONCAT44(local_e4,uStack_e8);
  if (*(char *)(param_2 + 0x3b2) != '\0') {
    param_1[0] = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 1.0;
    param_1[6] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 1.0;
    param_1[3] = local_e4;
    param_1[7] = local_d4;
    param_1[0xb] = local_c4;
  }
  cVar2 = *(char *)(param_2 + 0x3b1);
  if (cVar2 == '\0') {
    *(float *)(param_2 + 0x278) = param_1[3];
    fVar5 = param_1[0xb];
    *(float *)(param_2 + 0x27c) = param_1[7];
    *(float *)(param_2 + 0x280) = fVar5;
  }
  fVar15 = (float)*(undefined8 *)param_1;
  fVar5 = (float)*(undefined8 *)(param_2 + 0x344);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x344) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_2 + 0x34c);
  fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x34c) >> 0x20);
  fVar18 = (float)*(undefined8 *)(param_1 + 4);
  fVar16 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_2 + 0x354);
  fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 0x354) >> 0x20);
  fVar7 = (float)*(undefined8 *)(param_2 + 0x35c);
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x35c) >> 0x20);
  fVar19 = (float)*(undefined8 *)(param_1 + 8);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar17 = (float)*(undefined8 *)(param_1 + 2);
  fVar28 = (float)*(undefined8 *)(param_2 + 0x364);
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x364) >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_2 + 0x36c);
  fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x36c) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_1 + 6);
  fVar21 = (float)*(undefined8 *)(param_1 + 10);
  fVar22 = fVar5 * fVar15 + fVar27 * fVar16 + fVar28 * fVar17 + 0.0;
  fVar23 = fVar4 * fVar15 + fVar29 * fVar16 + fVar6 * fVar17 + 0.0;
  fVar24 = fVar11 * fVar15 + fVar7 * fVar16 + fVar8 * fVar17 + 0.0;
  fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
           fVar12 * fVar15 + fVar9 * fVar16 + fVar10 * fVar17;
  fVar15 = fVar5 * fVar18 + fVar27 * fVar13 + fVar28 * fVar14 + 0.0;
  fVar16 = fVar4 * fVar18 + fVar29 * fVar13 + fVar6 * fVar14 + 0.0;
  fVar17 = fVar11 * fVar18 + fVar7 * fVar13 + fVar8 * fVar14 + 0.0;
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
           fVar12 * fVar18 + fVar9 * fVar13 + fVar10 * fVar14;
  fVar5 = fVar5 * fVar19 + fVar27 * fVar20 + fVar28 * fVar21 + 0.0;
  fVar4 = fVar4 * fVar19 + fVar29 * fVar20 + fVar6 * fVar21 + 0.0;
  fVar11 = fVar11 * fVar19 + fVar7 * fVar20 + fVar8 * fVar21 + 0.0;
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) +
           fVar12 * fVar19 + fVar9 * fVar20 + fVar10 * fVar21;
  *(ulong *)(param_1 + 2) = CONCAT44(fVar25,fVar24);
  *(ulong *)param_1 = CONCAT44(fVar23,fVar22);
  *(ulong *)(param_1 + 6) = CONCAT44(fVar18,fVar17);
  *(ulong *)(param_1 + 4) = CONCAT44(fVar16,fVar15);
  *(ulong *)(param_1 + 10) = CONCAT44(fVar12,fVar11);
  *(ulong *)(param_1 + 8) = CONCAT44(fVar4,fVar5);
  if (cVar2 != '\0') {
    *(float *)(param_2 + 0x280) = fVar12;
    *(ulong *)(param_2 + 0x278) = CONCAT44(fVar18,fVar25);
  }
  fVar27 = *(float *)(param_3 + 0x268);
  fVar28 = *(float *)(param_3 + 0x26c);
  fVar29 = 1.0 / fVar27;
  fVar12 = *(float *)(param_3 + 0x270);
  *(float *)(param_2 + 0x2a8) = fVar27 * *(float *)(param_2 + 0x3ac);
  *(float *)(param_2 + 0x2a4) = fVar12 * *(float *)(param_2 + 0x3a8);
  *(float *)(param_2 + 0x2a0) = fVar27 * *(float *)(param_2 + 0x3a4);
  fVar28 = 1.0 / fVar28;
  param_1[4] = fVar15 * fVar29;
  param_1[5] = fVar16 * fVar28;
  *param_1 = fVar22 * fVar29;
  param_1[1] = fVar23 * fVar28;
  param_1[8] = fVar5 * fVar29;
  param_1[9] = fVar4 * fVar28;
  fVar12 = 1.0 / fVar12;
  param_1[2] = fVar24 * fVar12;
  param_1[6] = fVar17 * fVar12;
  param_1[10] = fVar11 * fVar12;
  if (fVar26 != 1.0) {
    local_80 = *(undefined8 *)(param_2 + 0x3f4);
    fVar5 = 0.0;
    if (0.0 <= fVar26) {
      fVar5 = fVar26;
    }
    uStack_78._4_4_ = (float)(*(ulong *)(param_2 + 0x3fc) >> 0x20);
    fVar27 = uStack_78._4_4_;
    local_70 = *(undefined8 *)(param_2 + 0x404);
    uStack_78 = *(ulong *)(param_2 + 0x3fc) & 0xffffffff;
    local_90 = *(undefined8 *)(param_2 + 0x3e4);
    uStack_68._4_4_ = (float)(*(ulong *)(param_2 + 0x40c) >> 0x20);
    fVar28 = uStack_68._4_4_;
    uStack_68 = *(ulong *)(param_2 + 0x40c) & 0xffffffff;
    local_b0 = *(undefined8 *)(param_1 + 4);
    uStack_88._4_4_ = (float)(*(ulong *)(param_2 + 0x3ec) >> 0x20);
    fVar12 = uStack_88._4_4_;
    uStack_88 = *(ulong *)(param_2 + 0x3ec) & 0xffffffff;
    local_a0 = *(undefined8 *)(param_1 + 8);
    uStack_a8._4_4_ = (float)(*(ulong *)(param_1 + 6) >> 0x20);
    fVar4 = uStack_a8._4_4_;
    uStack_a8 = *(ulong *)(param_1 + 6) & 0xffffffff;
    local_c0 = *(undefined8 *)param_1;
    uStack_98._4_4_ = (float)(*(ulong *)(param_1 + 10) >> 0x20);
    fVar11 = uStack_98._4_4_;
    uStack_98 = *(ulong *)(param_1 + 10) & 0xffffffff;
    uStack_b8._4_4_ = (float)(*(ulong *)(param_1 + 2) >> 0x20);
    fVar26 = uStack_b8._4_4_;
    uStack_b8 = *(ulong *)(param_1 + 2) & 0xffffffff;
    FUN_03eb5220(fVar5,param_1,&local_90,&local_c0);
    param_1[3] = fVar12 + fVar5 * (fVar26 - fVar12);
    param_1[7] = fVar27 + fVar5 * (fVar4 - fVar27);
    param_1[0xb] = fVar28 + fVar5 * (fVar11 - fVar28);
  }
  return;
}

