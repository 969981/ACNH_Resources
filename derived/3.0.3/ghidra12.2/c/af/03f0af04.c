
void FUN_03f0af04(long param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,uint param_7)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_d8 [2];
  long local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  float local_94;
  undefined8 local_90;
  undefined4 local_88;
  float local_84;
  
  fVar6 = *param_4 * ((float)*(undefined8 *)param_3 - *param_5);
  fVar9 = param_4[1] * ((float)((ulong)*(undefined8 *)param_3 >> 0x20) - param_5[1]);
  fVar10 = param_4[2] * ((float)*(undefined8 *)(param_3 + 2) - param_5[2]);
  fVar11 = param_4[3] * ((float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) - param_5[3]);
  auVar14._4_4_ = fVar9;
  auVar14._0_4_ = fVar6;
  auVar14._8_4_ = fVar10;
  auVar14._12_4_ = fVar11;
  auVar1._4_4_ = fVar9;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = fVar10;
  auVar1._12_4_ = fVar11;
  auVar14 = NEON_ext(auVar14,auVar1,8,1);
  fVar10 = *(float *)(*(long *)(param_1 + 0x58) + 0x1f8);
  fVar6 = -(fVar6 + fVar9 + auVar14._0_4_);
  if (fVar10 != 0.0) {
    fVar6 = fVar6 / (fVar10 * DAT_04c4bac0);
  }
  fVar6 = fVar6 + *(float *)(param_1 + 0x60);
  uVar4 = 0;
  if (fVar6 != (float)(int)fVar6) {
    uVar4 = (uint)(fVar6 < 0.0);
  }
  fVar6 = sinf((fVar6 - (float)(int)((int)fVar6 - uVar4)) * 6.2831855);
  fVar10 = fVar6 * 0.5 + 0.5;
  fVar9 = *(float *)(*(long *)(param_1 + 0x58) + 0x100);
  fVar9 = fVar9 + fVar10 * (*(float *)(*(long *)(param_1 + 0x58) + 0x120) - fVar9);
  fVar17 = *(float *)(param_1 + 0x34) * fVar9;
  fVar16 = *(float *)(param_1 + 0x38) * fVar9;
  fVar9 = fVar9 * *(float *)(param_1 + 0x3c);
  *param_2 = fVar17;
  param_2[1] = fVar16;
  param_2[2] = fVar9;
  fVar6 = DAT_04c4bac0;
  fVar11 = *param_6;
  if ((param_7 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) != 0) {
      fVar12 = *param_3;
      fVar15 = param_3[1];
      fVar7 = param_3[2];
      fVar13 = param_6[1];
      fVar8 = param_6[2];
      lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x50);
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) &&
         (lVar3 = *(long *)**(undefined8 **)(lVar3 + 0x38), (*(byte *)(lVar3 + 0xae) >> 3 & 1) != 0)
         ) {
        plVar5 = (long *)(lVar3 + 0x80);
        uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if ((uVar2 & 1) != 0) {
          local_a0 = 0x3f80000000000000;
          local_b0 = 0x3f800000;
          local_88 = 0x3f800000;
          local_d8[0] = 2;
          local_c0 = &local_b0;
          local_a8 = 0;
          local_98 = 0;
          local_90 = 0;
          local_b8 = 0;
          uStack_c8 = 0;
          local_d0 = lVar3;
          local_a4 = fVar12;
          local_94 = fVar15;
          local_84 = fVar7;
          (*(code *)**(undefined8 **)(lVar3 + 0x80))(plVar5,local_d8);
        }
      }
      fVar6 = fVar6 * 0.01;
      lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x50);
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) &&
         (lVar3 = *(long *)**(undefined8 **)(lVar3 + 0x38), (*(byte *)(lVar3 + 0xae) >> 3 & 1) != 0)
         ) {
        plVar5 = (long *)(lVar3 + 0x80);
        uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if ((uVar2 & 1) != 0) {
          local_a0 = 0x3f80000000000000;
          local_b0 = 0x3f800000;
          local_88 = 0x3f800000;
          local_d8[0] = 2;
          local_c0 = &local_b0;
          local_a8 = 0;
          local_a4 = fVar12 + fVar17 * fVar6;
          local_94 = fVar15 + fVar16 * fVar6;
          local_98 = 0;
          local_90 = 0;
          uStack_c8 = 0;
          local_84 = fVar7 + fVar9 * fVar6;
          local_b8 = 0;
          local_d0 = lVar3;
          (*(code *)**(undefined8 **)(lVar3 + 0x80))(plVar5,local_d8);
        }
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x50);
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) &&
         (lVar3 = *(long *)**(undefined8 **)(lVar3 + 0x38), (*(byte *)(lVar3 + 0xae) >> 3 & 1) != 0)
         ) {
        plVar5 = (long *)(lVar3 + 0x80);
        uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if ((uVar2 & 1) != 0) {
          local_b0 = 0x3f800000;
          local_88 = 0x3f800000;
          local_d8[0] = 2;
          local_c0 = &local_b0;
          local_a8 = 0;
          local_a0 = 0x3f80000000000000;
          local_98 = 0;
          local_90 = 0;
          local_b8 = 0;
          uStack_c8 = 0;
          local_a4 = fVar12 + fVar6 * fVar10 * fVar11;
          local_94 = fVar15 + fVar6 * fVar10 * fVar13;
          local_84 = fVar7 + fVar6 * fVar10 * fVar8;
          local_d0 = lVar3;
          (*(code *)**(undefined8 **)(lVar3 + 0x80))(plVar5,local_d8);
        }
      }
    }
    fVar17 = *param_2;
    fVar16 = param_2[1];
    fVar9 = param_2[2];
    fVar11 = *param_6;
  }
  fVar6 = param_6[1];
  fVar7 = param_6[2];
  *param_2 = fVar17 + fVar10 * fVar11;
  param_2[1] = fVar16 + fVar10 * fVar6;
  param_2[2] = fVar9 + fVar10 * fVar7;
  return;
}

